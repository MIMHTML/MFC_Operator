#include <iostream>

const float PIE = 3.14;
void cheers(int n);
float circle(int x);
void helloCPP(int, int);

int main() {
	/*
		1. �Լ� ���� ���� 
		2. �Լ� ���� ����
		3. �Լ� ȣ��
	

		�Լ��� ����
		1. ���ϰ��� �ִ� Ÿ��
		2. ���ϰ��� ���� Ÿ��
	*/
	int a;
	std::cout << "�ϳ��� ���� �Է��Ͻÿ�. " << std::endl;
	std::cin >> a;
	cheers(a);

	int b;
	std::cout << "���� ������ ���̸� �Է��Ͻÿ�." << std::endl;
	std::cin >> b;
	float c = circle(b);
	std::cout << "���� ���̴� " << c << " �Դϴ�." << std::endl;

	int times, times2;
	std::cout << "������ �Է��Ͻÿ�. " << std::endl;
	std::cin >> times;
	std::cout << "������ �Է��Ͻÿ�. " << std::endl;
	std::cin >> times2;

	helloCPP(times, times2);

	return 0;
}

void cheers(int n) {
	for (int i = 0; i < n; i++) {
		std::cout << "Cheers!" << std::endl;
	}
}

float circle(int x) {
	return x * x * PIE;
}

void helloCPP(int n, int m) {
	for (int i = 0; i < n; i++) {
		std::cout << "Hello \n";
	}

	for (int i = 0; i < m; i++) {
		std::cout << "C++ \n";
	}
}
