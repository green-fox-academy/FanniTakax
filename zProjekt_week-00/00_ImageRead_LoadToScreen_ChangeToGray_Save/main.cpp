#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

#include <iostream>

using namespace cv;

int main() {
    Mat image;

    image = imread( "../fire.jpeg", IMREAD_COLOR );

    if( image.empty() )
    {
        std::cout <<  "Could not open or find the image" << std::endl ;
        return -1;
    }

    Mat gray_image;
    cvtColor( image, gray_image, COLOR_BGR2GRAY );
    imwrite( "../Gray_Image.jpg", gray_image );

    namedWindow( "Gray image", WINDOW_NORMAL );
    imshow( "Gray image", gray_image );

    namedWindow( "Source", WINDOW_NORMAL );
    imshow( "Source", image );

    waitKey(0);

    return 0;
}