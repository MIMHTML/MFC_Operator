#include <iostream>

int main() {
	// ����ü(enum)
	// ��ȣ ����� ����� �Ϳ� ���� �Ǵٸ� ���

	enum spectrum { red, orange, yellow, green, blue = 10, violet, indigo, ultraviolet };
	/*
		1. spectrum�� ���ο� �������� �̸����� ����ϴ�.
		2. red, orange, yellow.... 0�������� 7���� �������� ���� ��Ÿ���� ��ȣ ����� ����ϴ�.
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