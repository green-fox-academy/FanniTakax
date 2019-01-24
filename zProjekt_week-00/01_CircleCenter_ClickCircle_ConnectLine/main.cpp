#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

#include <iostream>

using namespace cv;
using namespace std;

Mat image = imread( "../white.jpg", IMREAD_COLOR );

void CallBackFunc(int event, int x, int y, int flags, void* userdata)
{
    if  ( event == EVENT_LBUTTONDOWN )
    {
        cout << "Left button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
        circle(image, Point(x, y), 8, Scalar(30, 30, 20), 2, LINE_8, 0);
        imshow( "Source", image );

        line(image, Point(image.cols/2, image.rows/2), Point(x, y), Scalar(55, 55, 55), 2, LINE_8, 0);
        imshow( "Source", image );
    }
    else if  ( event == EVENT_RBUTTONDOWN )
    {
        //cout << "Right button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
    }
    else if  ( event == EVENT_MBUTTONDOWN )
    {
        //cout << "Middle button of the mouse is clicked - position (" << x << ", " << y << ")" << endl;
    }
    else if ( event == EVENT_MOUSEMOVE )
    {
        //cout << "Mouse move over the window - position (" << x << ", " << y << ")" << endl;
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

    setMouseCallback("Source", CallBackFunc, NULL);
    imshow( "Source", image );
    waitKey(0);

    return 0;
}