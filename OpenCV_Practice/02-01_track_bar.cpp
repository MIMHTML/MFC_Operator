#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

// Ʈ���� ������ �䱸�ϴ� �ݹ��Լ��� �����մϴ�.
// �� ���������� Ư�� �뵵�� ��������� �ʽ��ϴ�.
void dummy(int, void*)
{

}

int threshold1 = 30;

Vec3b lower_blue1, upper_blue1, lower_blue2, upper_blue2, lower_blue3, upper_blue3;
Mat img_color;

void mouse_callback(int event, int x, int y, int flags, void* param)
{
	if (event == EVENT_LBUTTONDOWN)
	{
		Vec3b color_pixel = img_color.at<Vec3b>(y, x);

		Mat bgr_color = Mat(1, 1, CV_8UC3, color_pixel);

		Mat hsv_color;
		cvtColor(bgr_color, hsv_color, COLOR_BGR2HSV);

		int hue = hsv_color.at<Vec3b>(0, 0)[0];
		int saturation = hsv_color.at<Vec3b>(0, 0)[1];
		int value = hsv_color.at<Vec3b>(0, 0)[2];

		cout << "hue = " << hue << endl;
		cout << "saturation = " << saturation << endl;
		cout << "value = " << value << endl;

		if (hue < 10)
		{
			cout << "case 1" << endl;
			lower_blue1 = Vec3b(hue - 10 + 180, threshold1, threshold1);
			upper_blue1 = Vec3b(180, 255, 255);
			lower_blue2 = Vec3b(0, threshold1, threshold1);
			upper_blue2 = Vec3b(hue, 255, 255);
			lower_blue3 = Vec3b(hue, threshold1, threshold1);
			upper_blue3 = Vec3b(hue + 10, 255, 255);
		}
		else if (hue > 170)
		{
			cout << "case 2" << endl;
			lower_blue1 = Vec3b(hue, threshold1, threshold1);
			upper_blue1 = Vec3b(180, 255, 255);
			lower_blue2 = Vec3b(0, threshold1, threshold1);
			upper_blue2 = Vec3b(hue + 10 - 180, 255, 255);
			lower_blue3 = Vec3b(hue - 10, threshold1, threshold1);
			upper_blue3 = Vec3b(hue, 255, 255);
		}
		else
		{
			cout << "case 3" << endl;
			lower_blue1 = Vec3b(hue, threshold1, threshold1);
			upper_blue1 = Vec3b(hue + 10, 255, 255);
			lower_blue2 = Vec3b(hue - 10, threshold1, threshold1);
			upper_blue2 = Vec3b(hue, 255, 255);
			lower_blue3 = Vec3b(hue - 10, threshold1, threshold1);
			upper_blue3 = Vec3b(hue, 255, 255);
		}

		cout << "hue = " << hue << endl;
		cout << "#1 = " << lower_blue1 << "~" << upper_blue1 << endl;
		cout << "#2 = " << lower_blue2 << "~" << upper_blue2 << endl;
		cout << "#3 = " << lower_blue3 << "~" << upper_blue3 << endl;
	}
}


int main()
{
	namedWindow("img_color");
	setMouseCallback("img_color", mouse_callback);
	// Ʈ���ٸ� ���� threshold1�� �����Ͽ� �����մϴ�.
	// �ִ밪�� 255���� �Դϴ�.
	// Ʈ������ �ʱⰪ�� 30���� �����մϴ�. 
	createTrackbar("threshold", "img_color", &threshold1, 255, dummy);
	setTrackbarPos("threshold", "img_color", 30); 

	Mat img_hsv;

	VideoCapture cap(0);
	if (!cap.isOpened()) {

		cout << "ī�޶� �� �� �����ϴ�." << endl;
		return -1;
	}


	while (1)
	{
		cap.read(img_color);

		// Ʈ���� �̵��� �ٲﰪ�� �����ɴϴ�.
		// ���콺 Ŭ���� �ݹ��Լ����� ������ ������Ʈ�� ���˴ϴ�.
		threshold1 = getTrackbarPos("threshold", "img_color"); 

		cvtColor(img_color, img_hsv, COLOR_BGR2HSV);

		Mat img_mask1, img_mask2, img_mask3, img_mask;

		inRange(img_hsv, lower_blue1, upper_blue1, img_mask1);
		inRange(img_hsv, lower_blue2, upper_blue2, img_mask2);
		inRange(img_hsv, lower_blue3, upper_blue3, img_mask3);
		img_mask = img_mask1 | img_mask2 | img_mask3;

		// �������� ������ �����װ� Ŭ��¡�� �߰��մϴ�.
		// �������� ���� ���̳ʸ� �̹������� ��� �������� ����Ǵ� ����� �����ϸ�,
		// Ŭ��¡�� ���� ��� ���� ���ο� ����� ������ ������ �ſ�ϴ�.
		int morph_size = 2;
		Mat element = getStructuringElement(MORPH_RECT, Size(2 * morph_size + 1, 2 * morph_size + 1),
			Point(morph_size, morph_size));
		morphologyEx(img_mask, img_mask, MORPH_OPEN, element);
		morphologyEx(img_mask, img_mask, MORPH_CLOSE, element);


		Mat img_result;
		bitwise_and(img_color, img_color, img_result, img_mask);

		imshow("img_color", img_color);
		imshow("img_mask", img_mask);
		imshow("img_result", img_result);

		if (waitKey(1) > 0)
			break;
	}


	return 0;
}