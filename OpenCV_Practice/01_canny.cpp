#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat image;

	image = imread("puppy.jpg", IMREAD_GRAYSCALE);
	if (image.empty())
	{ 
		std::cout << "Could not open or find the image" << std::endl;
		return -1;
	}

	namedWindow("Original", WINDOW_NORMAL);
	namedWindow("Canny", WINDOW_NORMAL);
	// ����ó���� �ϴ� ���߿� �ʿ��� ������ imshow �Լ��� ����Ͽ� ������ ����� ������ �ִ�.
	// ������Ѻ��� �̹��� ó�� ������ �ܰ躰�� �� �� �ִ�.
	imshow("Original", image);

	// ����ó�� �˰����� �̹����� �о�� �� �����쿡 �����ֱ� ���� ����ó���� �־��ָ� �ȴ�.
	// ������ �����ϴ� ĳ���Լ��� �߰�
	// Canny �Լ��� �̹����� �׷��̽����Ϸ� ��ȯ �� ����ؾ� �Ѵ�.
	Canny(image, image, 50, 150);

	// ������ �̸��� �ٸ����Ͽ� �ܰԺ��� �ٸ� �����쿡 �������� �� ���� �ִ�.
	imshow("Canny", image);

	waitKey(0);

	return 0;
}