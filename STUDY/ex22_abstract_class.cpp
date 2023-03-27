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

	std::cout << "생성자를 이용하여 객체 생성" << std::endl;
	Stock temp = Stock("명일", 100, 1000);

	std::cout << "디폴트 생성자를 이용하여 객체 생성" << std::endl;
	Stock temp2;
	temp2.show();

	std::cout << "temp를 temp2에 대입" << std::endl;
	temp2 = temp;

	std::cout << "temp와 temp2 출력" << std::endl;
	temp.show();
	temp2.show();

	std::cout << "생성자를 이용하여 temp 내용 재설정" << std::endl;
	temp2 = Stock("김명일", 200, 2000);

	std::cout << "재설정된 temp2 출력" << std::endl;
	temp2.show();

	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 2000);

	s1.show();
	s2.show(); 


	std::cout << "A와 B 중 share_val이 큰 객체는?" << std::endl;
	s1.topval(s2).show();
	

	return 0;
}