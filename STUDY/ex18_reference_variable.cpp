#include <iostream>

void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main() {

	int wallet1 = 100;
	int wallet2 = 200;

	std::cout << "���� ����" << std::endl;
	std::cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << std::endl;

	std::cout << "������ �̿��� ���� ��ȯ\n" << std::endl;
	swapA(wallet1, wallet2);
	std::cout << "���� ��ȯ ���� ����\n";
	std::cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << std::endl;

	std::cout << "�����͸� �̿��� ���� ��ȯ\n" << std::endl;
	swapB(&wallet1, &wallet2);
	std::cout << "�����͸� �̿��� ��ȯ ���� ����\n";
	std::cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << std::endl;

	std::cout << "���� �̿��� ���� ��ȯ\n" << std::endl;
	swapC(wallet1, wallet2);
	std::cout << "���� �̿��� ��ȯ ���� ����\n";
	std::cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << std::endl;


	return 0;
}

// ������ �����ϴ� ���
void swapA(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

// �����ͷ� �����ϴ� ���
void swapB(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// ������ �����ϴ� ���
void swapC(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}