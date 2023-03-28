#include <iostream>


void foo(int*);

int main() {

	int* a = new int(10);
	int* b = new int(*a);
	int* c = a;

	std::cout << "a : " << a << std::endl;	// 2,053,543,870,880
	std::cout << "a : " << *a << std::endl;

	std::cout << "b : " << b << std::endl;	// 2,053,543,869,728
	std::cout << "b : " << *b << std::endl;

	std::cout << "c : " << c << std::endl;	// 2,053,543,870,880
	std::cout << "c : " << *c << std::endl;

	*a = 20;
	std::cout << "a값 변환 후 " << std::endl;

	std::cout << "a : " << a << std::endl;	// 2,053,543,870,880
	std::cout << "a : " << *a << std::endl;

	std::cout << "b : " << b << std::endl;	// 2,053,543,869,728
	std::cout << "b : " << *b << std::endl;

	std::cout << "c : " << c << std::endl;	// 2,053,543,870,880
	std::cout << "c : " << *c << std::endl;

	int aa[20];
	int aa_len = sizeof(aa) / sizeof(aa[0]);
	std::cout << aa_len << std::endl;

	for (int i = 0; i < aa_len; i++) {
		aa[i] = i;
	}

	for (int i = 0; i < aa_len; i++) {
		std::cout << "aa[" << i << "] : " << &aa[i] << std::endl;
	}

	int x = 5;
	int* ptr = &x;
	
	std::cout << ptr << std::endl;
	std::cout << *ptr << std::endl;
	foo(ptr);
	std::cout << ptr << std::endl;
	std::cout << *ptr << std::endl;

	return 0;
}

void foo(int* ptr) {
	*ptr = 10;
}

