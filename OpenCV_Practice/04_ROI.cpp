#include <opencv2/opencv.hpp>


using namespace cv;



bool mouse_is_pressing = false;		// ���콺 ��ư�� ���� �������� üũ�ϱ� ���� ���
int start_x = -1, start_y = -1;		// ��ư ���� ��ġ�� �����ϱ� ���� ���. ROI �������Դϴ�.
Mat img_color;	// ���� ������ ������ ������ �������� ��������� �Ѵ�.


void mouse_callback(int event, int x, int y, int flags, void* userdata)
{	
	Mat img_result = img_color.clone();		// ���� ������ �����ؼ� ��� �������� ����մϴ�.

	// ���콺 ���� ��ư�� ���� ��� ��ǥ�� ROI ���������� �����մϴ�.
	if (event == EVENT_LBUTTONDOWN) {

		mouse_is_pressing = true;	// mouse_is_pressing�� true�� �ٲٰ�
		start_x = x;
		start_y = y;

		// �������� �ʷϻ� ���� �����ݴϴ�.
		circle(img_result, Point(x, y), 10, Scalar(0, 255, 0), -1);
		imshow("img_color", img_result);

	}
	// ��ư�� ����ä �̵��� ��� ROI ���������� ���� ���콺 Ŀ�� ��ġ������ �ʷϻ� �簢������ �׸��ϴ�.
	else if (event == EVENT_MOUSEMOVE) {

		if (mouse_is_pressing) {

			rectangle(img_result, Point(start_x, start_y), Point(x, y),
				Scalar(0, 255, 0), 3);

			imshow("img_color", img_result);
		}

	}
	// ���� ��ư���� ���� �� ��� �ش� ��ǥ�� ROI �� ��ǥ�� �˴ϴ�.
	else if (event == EVENT_LBUTTONUP) {

		mouse_is_pressing = false;	// mouse_is_pressing�� false�� �ٲٰ�

		// ROI ������ �׷��̽����Ϸ� ��ȯ�Ͽ� 
		Mat img_cat(img_color, Rect(start_x, start_y, x - start_x, y - start_y));
		cvtColor(img_cat, img_cat, COLOR_BGR2GRAY);
		cvtColor(img_cat, img_cat, COLOR_GRAY2BGR);

		// ������ �����쿡 �����ݴϴ�.
		img_cat.copyTo(img_result(Rect(start_x, start_y, x - start_x, y - start_y)));
		imshow("img_color", img_result);
		imshow("img_cat", img_cat);
	}
}



int main()
{

	// �̹����� �ҷ��ͼ� ȭ�鿡 �����ݴϴ�.
	img_color = imread("puppy.jpg", IMREAD_COLOR);
	imshow("img_color", img_color);

	// ���콺 �̺�Ʈ �߻��� ȣ��� �ݹ� �Լ��� �����մϴ�.	
	setMouseCallback("img_color", mouse_callback);

	waitKey(0);
	destroyAllWindows();
}