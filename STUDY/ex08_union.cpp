#include <iostream>


// ����ü(union)
// ���� �ٸ� ���������� �� ���� �� ������ ������ �� ����.
int main() {

	union MyUnion
	{
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	std::cout << test.intVal << std::endl;
	test.longVal = 33;
	std::cout << test.intVal << std::endl;
	std::cout << test.longVal << std::endl;
	test.floatVal = 3.3;
	std::cout << test.intVal << std::endl;
	std::cout << test.longVal << std::endl;
	std::cout << test.floatVal << std::endl;


	return 0;
}