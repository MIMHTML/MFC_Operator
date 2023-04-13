#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;



int threshold1 = 30;

Vec3b lower_blue1, upper_blue1, lower_blue2, upper_blue2, lower_blue3, upper_blue3;
Mat img_color;

// 마우스 클릭시 호출되는 콜백함수
//	- 클릭한 픽셀의 좌표를 받아서 픽셀 값을 가져오게 된다.
void mouse_callback(int event, int x, int y, int flags, void* param)
{
	// 마우스 왼쪽 버튼을 누르는 이벤트가 발생한 경우로 이벤트를 제한함.
	if (event == EVENT_LBUTTONDOWN)
	{
		// 클릭한 위치에 있는 픽셀값을 읽어옴
		Vec3b color_pixel = img_color.at<Vec3b>(y, x);

		// cvtColor 함수에 적용하기 위해 한 픽셀로 구성된 이미지로 바꿉니다.
		Mat bgr_color = Mat(1, 1, CV_8UC3, color_pixel);

		// cvtColor 함수를 사용하여 이미지를 비쥬얼 색공간에서 hsv 색공간으로 변환합니다.
		Mat hsv_color;
		cvtColor(bgr_color, hsv_color, COLOR_BGR2HSV);

		// 휴값을 정수 변수에 대입합니다.
		int hue = hsv_color.at<Vec3b>(0, 0)[0];
		int saturation = hsv_color.at<Vec3b>(0, 0)[1];
		int value = hsv_color.at<Vec3b>(0, 0)[2];

		cout << "hue = " << hue << endl;
		cout << "saturation = " << saturation << endl;
		cout << "value = " << value << endl;

		// 마우스 클릭한 위치의 픽셀에서 얻은 휴값과 유사한 색만 추출하기 위해 범위를 정해야 합니다.
		// 앞에서 구한 휴값에 +10, -10 하여 범위를 정합니다.
		// hue 값이 10 이하인 경우,
		// hue 값이 170 이상인 경우,
		// 그리고 나머지의 경우로 나누어 범위를 설정합니다.
		// saturation과 value값의 최소값은 threshold1 변수에 30으로 지정되어 있습니다.
		// 최대값은 255로 지정합니다.
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
	// 윈도우를 생성하고 윈도우에 마우스 콜백함수를 등록합니다.
	// 해당 윈도우에서 마우스 이벤트가 발생하면 콜백함수가 호출되게 됩니다.
	namedWindow("img_color");
	setMouseCallback("img_color", mouse_callback);


	Mat img_hsv;

	// 카메라에서 이미지를 가지고 올 수 있도록 비디오 캡쳐 객체를 생성합니다.
	VideoCapture cap(0);
	if (!cap.isOpened()) {

		cout << "카메라를 열 수 없습니다." << endl;
		return -1;
	}


	while (1)
	{
		// 비디오 캡처 객체의 read함수를 사용하여 카메라로부터 이미지를 가져옵니다.
		cap.read(img_color);

		// 이미지를 비쥬얼 색공간에서 hsv 색공간으로 변환합니다.
		cvtColor(img_color, img_hsv, COLOR_BGR2HSV);

		Mat img_mask1, img_mask2, img_mask3, img_mask;
		
		// 마우스 클릭시 만들었던 범위를 가지고 hsv 이미지에서 마스크 이미지를 생성합니다.
		// 인레이지 함수는 이미지에서 범위 내에 있는 픽셀을 흰색으로, 그의 픽셀은 검은색으로 만듭니다.
		// 그래서 바이너리 이미지라고도 부릅니다.
		inRange(img_hsv, lower_blue1, upper_blue1, img_mask1);
		inRange(img_hsv, lower_blue2, upper_blue2, img_mask2);
		inRange(img_hsv, lower_blue3, upper_blue3, img_mask3);
		img_mask = img_mask1 | img_mask2 | img_mask3;

		// 마스크 이미지와 원본이미지를 and연산하여 마스크 이미지에서 흰색으로 표현되는 부분만 원본 이미지에서 남겨줍니다.
		Mat img_result;
		bitwise_and(img_color, img_color, img_result, img_mask);

		imshow("img_color", img_color);
		imshow("img_mask", img_mask);
		imshow("img_result", img_result);

		// 화면에 결과 이미지를 보여주고 아무키나 누르면 종료하도록 합니다.
		if (waitKey(1) > 0)
			break;
	}


	return 0;
}