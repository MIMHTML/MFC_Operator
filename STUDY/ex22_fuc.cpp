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
	std::cout << "회사 명 : " << name << std::endl;
	std::cout << "주식 수 : " << shares << std::endl;
	std::cout << "주가 : " << share_val << std::endl;
	std::cout << "주식 총 가치 : " << total_val << std::endl;
	std::cout << "변경!" << std::endl;
}

// 사용 범위 결정 연산자::
Stock::Stock(std::string co, int n, float pr)
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

// 기본 생성자
Stock::Stock() {
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

// 파괴자
Stock::~Stock()
{
	std::cout << name << "클래스가 소멸되었습니다.\n";
}