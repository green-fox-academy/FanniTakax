#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <math.h>

#include <iostream>

#define PI 3.141592654

using namespace cv;
using namespace std;

Mat image = imread( "../white.jpg", IMREAD_COLOR );

int X;
int Y;


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

    std::cout << angle << std::endl;

    return 0;
}