#include <iostream>

inline float square(float x) { return x * x; }

int main() {
	// �ζ��� �Լ�

	int a = 5;
	std::cout << "�� ���� ���̰� " << a << " �� ���簢���� ���̴�?" << std::endl;
	float b = square(a);
	std::cout << b << std::endl;


	return 0;
}