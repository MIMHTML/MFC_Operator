#include <iostream>
#include <vector>


class A  
{
public:
	A() {
		std::cout << "A()" << std::endl;
	}
};

class B : public A
{
public:
	B() {
		std::cout << "B()" << std::endl;
	}
};

int main() {
	B b;

	return 0;
}

