#include <iostream>

void countDown(int);

int main() {
	// 재귀호출 : C++에서 함수는 자기 자신을 호출할 수 있다.
	
	countDown(5);

	return 0;
}

void countDown(int n) {
	std::cout << "Counting..." << n << std::endl;
	if (n > 0)
		countDown(n - 1);
	std::cout << n << " 번 째 재귀함수" << std::endl;

}