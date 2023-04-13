#include <opencv2/opencv.hpp>


using namespace cv;



bool mouse_is_pressing = false;		// 마우스 버튼을 누른 상태인지 체크하기 위해 사용
int start_x = -1, start_y = -1;		// 버튼 누른 위치를 저장하기 위해 사용. ROI 시작점입니다.
Mat img_color;	// 원본 영상을 저장할 변수를 전역으로 선언해줘야 한다.


void mouse_callback(int event, int x, int y, int flags, void* userdata)
{	
	Mat img_result = img_color.clone();		// 원본 영상을 복사해서 결과 영상으로 사용합니다.

	// 마우스 왼쪽 버튼을 누른 경우 좌표를 ROI 시작점으로 저장합니다.
	if (event == EVENT_LBUTTONDOWN) {

		mouse_is_pressing = true;	// mouse_is_pressing을 true로 바꾸고
		start_x = x;
		start_y = y;

		// 시작점에 초록색 원을 보여줍니다.
		circle(img_result, Point(x, y), 10, Scalar(0, 255, 0), -1);
		imshow("img_color", img_result);

	}
	// 버튼을 누른채 이동한 경우 ROI 시작점부터 현재 마우스 커서 위치까지를 초록색 사각형으로 그립니다.
	else if (event == EVENT_MOUSEMOVE) {

		if (mouse_is_pressing) {

			rectangle(img_result, Point(start_x, start_y), Point(x, y),
				Scalar(0, 255, 0), 3);

			imshow("img_color", img_result);
		}

	}
	// 왼쪽 버튼에서 손을 뗀 경우 해당 좌표가 ROI 끝 좌표가 됩니다.
	else if (event == EVENT_LBUTTONUP) {

		mouse_is_pressing = false;	// mouse_is_pressing을 false로 바꾸고

		// ROI 영역을 그레이스케일로 변환하여 
		Mat img_cat(img_color, Rect(start_x, start_y, x - start_x, y - start_y));
		cvtColor(img_cat, img_cat, COLOR_BGR2GRAY);
		cvtColor(img_cat, img_cat, COLOR_GRAY2BGR);

		// 별도의 윈도우에 보여줍니다.
		img_cat.copyTo(img_result(Rect(start_x, start_y, x - start_x, y - start_y)));
		imshow("img_color", img_result);
		imshow("img_cat", img_cat);
	}
}



int main()
{

	// 이미지를 불러와서 화면에 보여줍니다.
	img_color = imread("puppy.jpg", IMREAD_COLOR);
	imshow("img_color", img_color);

	// 마우스 이벤트 발생시 호출될 콜백 함수를 지정합니다.	
	setMouseCallback("img_color", mouse_callback);

	waitKey(0);
	destroyAllWindows();
}