#include <iostream>
#include "ex22_stock.h"

int main() {
	// 추상화와 클래스
	// 클래스란?
	// 추상화를 사용자 정의 데이터형으로 변환해주는 수단
	/*
		1. 클래스 선언
		2. 클래스 메소드 정의
	*/

	Stock temp = Stock("명일2", 200, 2000);
	Stock temp2("명일3", 300, 3000);
	temp.acquire("명일", 100, 1000);
	temp.show();
	temp.buy(10, 1200);
	temp.show();
	temp.sell(5, 800);
	temp.show();

	return 0;
}