#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

//#include <opencv2/opencv.hpp>
// - 하나의 헤더파일만 include 하면 모든 모듈 사용가능

#include <iostream>


// OpenCV와 C++ 표준 라이브러리는 다행히 충돌이 나는 이름이 없기 때문에
// using namespace를 사용해도 무방하다.
// 하지만, 큰 프로젝트라면 주의해야한다. 다른 라이브러리와 충돌이 나는 이름이 있을 수도 있기 때문.
using namespace cv;
using namespace std;


// OpenCV로 작성된 프로그램은 터미널에서 실행이 가능하다.
// 이때 입력 이미지나 영상처리 함수를 위한 파라미터를 입력받을 수 있습니다.
int main()
{
	// 입력 이미지를 저장할 Mat 객체를 선언.
	Mat image;

	// imread 함수를 사용하여 이미지를 읽어서 리턴되는 Mat 객체를 변수에 대입합니다.
	// 두번째 아규먼트로는
	//		IMREAD_UNCHANGED : 알파채널을 포함시킨 컬러 이미지를 리턴
	//		IMREAD_COLOR	 : 알파채널이 없는 컬러 이미지를 리턴
	//		IMREAD_GRAYSCALE : 그레이스케일 이미지로 변환하여 리턴
	// 를 많이 사용합니다.
	image = imread("puppy.jpg", IMREAD_COLOR);




	// imread 함수로 읽은 Mat 객체가 비어있다면, 에러 메시지를 보여주고 프로그램을 종료합니다.
	// 프로그램 문제 발생시 잘못된 입력에 의해서 발생하는 에러는 찾기 힘들기 때문에
	// 입력을 체크해보는 습관은 중요하다.
	if (image.empty())
	{
		std::cout << "Could not open or find the image" << std::endl;
		return -1;
	}



	// namedWindow 함수를 사용하여 이미지를 보여줄 윈도우를 생성한다.
	// 첫번째 아규먼트 : 윈도우의 식별자이면서 동시에 윈도우 타이틀에 보여질 메시지
	// 두번째 아규먼트 : WINDOW_AUTOSIZE를 사용하면 이미지 크기에 맞추어 윈도우 크기가 정해진다.  
	//					 그래서 모니터 해상도보다 큰 이미지를 불러온 경우 일부분만 보일 수 있다.
	//					 또한, 사용자가 윈도우 크기를 조정할 수 없다.
	//					
	// 두번째 아규먼트로 WINDOW_NORMAL을 사용하면 이미지가 큰 경우 해상도 크기에 맞추어 윈도우 크기가 조정됩니다.
	// 사용자가 윈도우 크기를 조정할 수도 있습니다.
	namedWindow("Original", WINDOW_NORMAL);

	// 전체화면으로 이미지를 보여주기 위해 코드를 수정했습니다.
	// 실행시켜보면 화면에 꽉차게 이미지를 보여줍니다.
	setWindowProperty("Original", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);

	// namedWindow 함수와 setWindowProperty 함수는 세트다.
	// 윈도우를 생성하는 namedWindow는 생략할 수 있다.
	// imshow 함수만 호출해도 됩니다.
	// 하지만 트랙바를 윈도우에 붙이는 경우에는 namedWindow 함수가 필요합니다.




	// imshow 함수를 사용하여 첫번째 아규먼트로 지정한 윈도우에 두번째 아규먼트로 지정한
	// Mat 객체에 저장된 이미지를 보여줍니다.
	imshow("Original", image);




	// OpenCV로 생성한 윈도우가 활성화된 상태에서 키보드 입력이 있을때까지 대기하도록 합니다. 
	// 일정시간 대기하도록 하고 싶으면, 0 대신에 대기할 시간을 적어주면 됩니다. (단위: ms)

	// 키보드 입력대기 시간을 5초로 수정합니다.
	// 실행시켜보면 5초후 자동으로 윈도우가 종료됩니다.
	waitKey(5000);




	// 실행시켜 보면 2개의 윈도우가 보인다.
	// opencv로 생성된 윈도우에는 이미지가 보인다.
	// 명령프롬프트 창에는 cout 같은 콘솔 출력함수로 필요한 메시지를 출력해볼 수 있다.
	// esc키를 누르면 opencv 윈도우가 닫힌다.
	// 이후 명령프롬프트 창에서 아무키나 눌러서 빠져나온다.
	return 0;
}