#include <iostream>

int main() {
	// 열거체(enum)
	// 기호 상수를 만드는 것에 대한 또다른 방법

	enum spectrum { red, orange, yellow, green, blue = 10, violet, indigo, ultraviolet };
	/*
		1. spectrum을 새로운 데이터형 이름으로 만듭니다.
		2. red, orange, yellow.... 0에서부터 7까지 정수값을 각각 나타내는 기호 상수로 만듭니다.
	*/


	spectrum a = orange;
	std::cout << a << std::endl;

	int b = blue;
	b = blue + 3;
	std::cout << b << std::endl;

	int c = violet;
	std::cout << c << std::endl;

	std::cout << green << std::endl;

	return 0;
}