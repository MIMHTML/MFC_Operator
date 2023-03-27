#include "ex22_stock.h"

void Stock::acquire(std::string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}
void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	std::cout << "ȸ�� �� : " << name << std::endl;
	std::cout << "�ֽ� �� : " << shares << std::endl;
	std::cout << "�ְ� : " << share_val << std::endl;
	std::cout << "�ֽ� �� ��ġ : " << total_val << std::endl;
	std::cout << "����!" << std::endl;
}

// ��� ���� ���� ������::
Stock::Stock(std::string co, int n, float pr)
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

// �⺻ ������
Stock::Stock() {
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

// �ı���
Stock::~Stock()
{
	std::cout << name << "Ŭ������ �Ҹ�Ǿ����ϴ�.\n";
}