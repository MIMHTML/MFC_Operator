#include <iostream>

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main() {

	int wallet1 = 100;
	int wallet2 = 200;

	std::cout << "최초 상태" << std::endl;
	std::cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << std::endl;

	std::cout << "참조를 이용한 값의 교환\n" << std::endl;
	swapA(wallet1, wallet2);
	std::cout << "참조 교환 이후 상태\n";
	std::cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << std::endl;

	std::cout << "포인터를 이용한 값의 교환\n" << std::endl;
	swapB(&wallet1, &wallet2);
	std::cout << "포인터를 이용한 교환 이후 상태\n";
	std::cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << std::endl;

	std::cout << "값을 이용한 값의 교환\n" << std::endl;
	swapC(wallet1, wallet2);
	std::cout << "값을 이용한 교환 이후 상태\n";
	std::cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << std::endl;


	return 0;
}

// 참조로 전달하는 방식
void swapA(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

// 포인터로 전달하는 방식
void swapB(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// 값으로 전달하는 방식
void swapC(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}