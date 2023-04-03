#include <iostream>

inline float square(float x) { return x * x; }

int main() {
	// 인라인 함수

	int a = 5;
	std::cout << "한 변의 길이가 " << a << " 인 정사각형의 넓이는?" << std::endl;
	float b = square(a);
	std::cout << b << std::endl;


	return 0;
}