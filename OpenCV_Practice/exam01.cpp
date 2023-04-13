#include <opencv2/opencv.hpp>

#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat image;

	image = imread("puppy.jpg", IMREAD_COLOR);
	if (image.empty())
	{
		std::cout << "Could not open or find the image" << std::endl;
		return -1;
	}

	namedWindow("Original", WINDOW_NORMAL);

	setWindowProperty("Original", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);

	imshow("Original", image);

	waitKey(5000);

	return 0;
}