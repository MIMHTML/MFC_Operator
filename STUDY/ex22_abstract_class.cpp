#include <iostream>
#include "ex22_stock.h"

int main() {
	// �߻�ȭ�� Ŭ����
	// Ŭ������?
	// �߻�ȭ�� ����� ���� ������������ ��ȯ���ִ� ����
	/*
		1. Ŭ���� ����
		2. Ŭ���� �޼ҵ� ����
	*/

	Stock temp = Stock("����2", 200, 2000);
	Stock temp2("����3", 300, 3000);
	temp.acquire("����", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();

	return 0;
}