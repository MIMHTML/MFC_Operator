#include <iostream>

// class 혹은 typeName
template <class Any>
Any sum(int, Any); 

int main() {
	// 함수 템플릿
	// 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
	int a = 3;
	int b = 4;
	std::cout << sum(a, b) << std::endl;

	float c = 3.14;
	float d = 1.592;
	std::cout << sum(c, d) << std::endl;

	std::cout << sum(a, c) << std::endl;


	return 0;
}

template <class Any>
Any sum(int a, Any b) {
	return a + b;
}