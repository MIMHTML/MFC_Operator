#include <iostream>

int func(int);

int main() {
	// �Լ��� �����ϴ� ������
	// ��� �Լ��� �Լ��� �ּҸ� �Ű������� �Ѱ��ִ� ��� �����ϰ� ����� �� �ִ�.
	/*
		1. �Լ��� �ּҸ� ��´�.
		2. �Լ��� �����ϴ� �����͸� �����Ѵ�.
		3. �Լ��� �����ϴ� �����͸� ����Ͽ� �� �Լ��� ȣ���Ѵ�.
	*/

	std::cout << func << std::endl;

	int (*pf)(int);
	pf = func;

	std::cout << (*pf)(3) << std::endl;

	return 0;
}

int func(int n) {

	return n + 1;
}