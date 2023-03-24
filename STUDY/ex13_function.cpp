#include <iostream>

const float PIE = 3.14;
void cheers(int n);
float circle(int x);
void helloCPP(int, int);

int main() {
	/*
		1. 함수 정의 제공 
		2. 함수 원형 제공
		3. 함수 호출
	

		함수의 종류
		1. 리턴값이 있는 타입
		2. 리턴값이 없는 타입
	*/
	int a;
	std::cout << "하나의 수를 입력하시오. " << std::endl;
	std::cin >> a;
	cheers(a);

	int b;
	std::cout << "원의 반지름 길이를 입력하시오." << std::endl;
	std::cin >> b;
	float c = circle(b);
	std::cout << "원의 넓이는 " << c << " 입니다." << std::endl;

	int times, times2;
	std::cout << "정수를 입력하시오. " << std::endl;
	std::cin >> times;
	std::cout << "정수를 입력하시오. " << std::endl;
	std::cin >> times2;

	helloCPP(times, times2);

	return 0;
}

void cheers(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "Cheers!" << std::endl;
	}
}

float circle(int x) {
	return x * x * PIE;
}

void helloCPP(int n, int m) {
	for (int i = 0; i < n; i++) {
		std::cout << "Hello \n";
	}

	for (int i = 0; i < m; i++) {
		std::cout << "C++ \n";
	}
}
