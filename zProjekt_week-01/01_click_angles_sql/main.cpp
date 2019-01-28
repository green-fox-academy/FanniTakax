#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <math.h>
#include <sqlite3.h>

#include <iostream>

#define PI 3.141592654

static int callback(void *NotUsed, int argc, char **argv, char **azColName) {
    int i;
    for(i = 0; i<argc; i++) {
        printf("%s = %s\n", azColName[i], argv[i] ? argv[i] : "NULL");
    }
    printf("\n");
    return 0;
}

using namespace cv;
using namespace std;

Mat image = imread( "../white.jpg", IMREAD_COLOR );

int X;
int Y;

char buffer[100];
sqlite3 *db;
int dbCheck;
char *errMsg = 0;

void MouseCallBackFunc(int event, int x, int y, int flags, void* userdata)
{
    if  ( event == EVENT_LBUTTONDOWN )
    {
        cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
        circle(image, Point(x, y), 8, Scalar(30, 30, 20), 2, LINE_8, 0);
        X = x;
        Y = y;

        line(image, Point(image.cols/2, image.rows/2), Point(x, y), Scalar(55, 55, 55), 2, LINE_8, 0);

        imshow( "Source", image );
    }
}


int main() {
    dbCheck = sqlite3_open("../test.db", &db);

    if( dbCheck ){
        std::cout << "Couldn't open database" << std::endl;
        return 0;
    }else{
        std::cout << "database opened" << std::endl;
    }


 if( image.empty() )
    {
        std::cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }
    namedWindow( "Source", WINDOW_AUTOSIZE );

    circle(image, Point(image.cols/2, image.rows/2), 10, Scalar(30, 30, 20), 2, LINE_8, 0);

    line(image, Point(image.cols/2, image.rows/2), Point(image.cols, image.rows/2), Scalar(55, 55, 55), 2, LINE_8, 0);

    setMouseCallback("Source", MouseCallBackFunc, NULL);

    imshow( "Source", image );

    waitKey(0);

    double sideA = ((double)image.cols / 2) - (image.cols - X);
    double sideB = ((double)image.rows / 2) - Y;

    double angle = 0;

    if(X <= image.cols/2){
        angle = atan(sideB/sideA)*180/PI + 180;
    }else if(X > image.cols/2 && Y > image.rows/2){
        angle = atan(sideB/sideA)*180/PI + 360;
    }else if( X > image.cols/2 && Y < image.rows/2){
        angle = atan(sideB/sideA)*180/PI;
    }

    sprintf(buffer, "INSERT INTO angles(angle, date) VALUES(%.2f, DATETIME());", angle);
    std::cout << buffer << std::endl;
    dbCheck = sqlite3_exec(db, buffer, callback, 0, &errMsg);

    std::cout << "miahiba" << std::endl;

    if( dbCheck != SQLITE_OK ){
        fprintf(stderr, "SQL error: %s\n", errMsg);
        sqlite3_free(errMsg);
    } else {
        fprintf(stdout, "Records created successfully\n");
    }

    sqlite3_close(db);

    return 0;
}