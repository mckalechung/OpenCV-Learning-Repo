//Include Libraries
#include<opencv2/opencv.hpp>
#include "opencv2/highgui/highgui.hpp"
#include<iostream>
#include <cstdlib>

// Namespace nullifies the use of cv::function(); 
using namespace std;
using namespace cv;

int main()
{
	// Read an image 
	Mat image = imread("Resources/one.jpg", 0);

	imshow("Window Name", image);

	// Wait for any keystroke
	waitKey(0);
    destroyAllWindows();
}




