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

	std::cout << "�����ڸ� �̿��Ͽ� ��ü ����" << std::endl;
	Stock temp = Stock("����", 100, 1000);

	std::cout << "����Ʈ �����ڸ� �̿��Ͽ� ��ü ����" << std::endl;
	Stock temp2;
	temp2.show();

	std::cout << "temp�� temp2�� ����" << std::endl;
	temp2 = temp;

	std::cout << "temp�� temp2 ���" << std::endl;
	temp.show();
	temp2.show();

	std::cout << "�����ڸ� �̿��Ͽ� temp ���� �缳��" << std::endl;
	temp2 = Stock("�����", 200, 2000);

	std::cout << "�缳���� temp2 ���" << std::endl;
	temp2.show();

	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 2000);

	s1.show();
	s2.show(); 


	std::cout << "A�� B �� share_val�� ū ��ü��?" << std::endl;
	s1.topval(s2).show();
	

	return 0;
}