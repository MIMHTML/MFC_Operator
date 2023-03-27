#include <iostream>


int sum(int, int);
float sum(float, float);

int main() {
	// 함수의 오버로딩
	// 여러 개의 함수를 같은 이름으로 연결한다.
	std::cout << "두 정수를 입력하십시오.\n";
	int a, b;
	std::cin >> a >> b;
	std::cout << "두 정수의 합은 " << sum(a, b) << " 입니다." << std::endl;
	std::cout << "두 실수를 입력하십시오\n";
	float c, d;
	std::cin >> c >> d;
	std::cout << "두 실수의 합은 " << sum(c, d) << " 입니다." << std::endl;
	 

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}