#include <iostream>
#include "ex23_time.h"

int main() {
	// << 연산자 오버로딩
	 
	Time t1(3, 45);

	t1.show();

	std::cout << t1;


	return 0;
}