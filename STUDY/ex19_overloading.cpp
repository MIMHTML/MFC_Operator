#include <iostream>


int sum(int, int);
float sum(float, float);

int main() {
	// �Լ��� �����ε�
	// ���� ���� �Լ��� ���� �̸����� �����Ѵ�.
	std::cout << "�� ������ �Է��Ͻʽÿ�.\n";
	int a, b;
	std::cin >> a >> b;
	std::cout << "�� ������ ���� " << sum(a, b) << " �Դϴ�." << std::endl;
	std::cout << "�� �Ǽ��� �Է��Ͻʽÿ�\n";
	float c, d;
	std::cin >> c >> d;
	std::cout << "�� �Ǽ��� ���� " << sum(c, d) << " �Դϴ�." << std::endl;
	 

	return 0;
}

int sum(int a, int b) {
	return a + b;
}

float sum(float a, float b) {
	return a + b;
}