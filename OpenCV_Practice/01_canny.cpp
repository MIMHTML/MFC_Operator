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
	// 영상처리를 하는 도중에 필요할 때마다 imshow 함수를 사용하여 과정을 출력해 볼수도 있다.
	// 실행시켜보면 이미지 처리 과정을 단계별로 볼 수 있다.
	imshow("Original", image);

	// 영상처리 알고리즘은 이미지를 읽어온 후 윈도우에 보여주기 전에 영상처리를 넣어주면 된다.
	// 에지를 검출하는 캐니함수를 추가
	// Canny 함수는 이미지를 그레이스케일로 변환 후 사용해야 한다.
	Canny(image, image, 50, 150);

	// 윈도우 이름을 다르게하여 단게별로 다른 윈도우에 보여지게 할 수도 있다.
	imshow("Canny", image);

	waitKey(0);

	return 0;
}