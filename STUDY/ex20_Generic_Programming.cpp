#include <iostream>

// class Ȥ�� typeName
template <class Any>
Any sum(int, Any); 

int main() {
	// �Լ� ���ø�
	// ��ü���� ���������� ������ �� �ִ� �Ϲ������� �Լ��� ����
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