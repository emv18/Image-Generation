#include opencv2/opencv.hpp
#include <iostream>

using namespace cv;
using namespace std;

int main( )
{
    Mat image;
    image = imread("/Images/juventus.jpeg", IMREAD_COLOR);   // Read the file

    if (!image.data)                              // Check for invalid input
    {
        cout << "Could not open or find the image" << std::endl;
        return -1;
    }

    namedWindow("Display window", WINDOW_AUTOSIZE);// Create a window for display.
    imshow("Display window", image);                   // Show our image inside it.

    waitKey(0);                                          // Wait for a keystroke in the window
    return 0;
}//
// Created by Eduardo on 28/08/22.
//
