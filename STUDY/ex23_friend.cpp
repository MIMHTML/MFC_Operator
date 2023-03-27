#include <iostream>
#include "ex23_time.h"

int main() {
	// C++ friend
	// 이항 연산자
	// operator*
	Time t1(1, 20);
	Time t2;

	t2 = t1 * 3;
	// t2 = operator*(3, t1);
	t2.show();

	return 0;
}