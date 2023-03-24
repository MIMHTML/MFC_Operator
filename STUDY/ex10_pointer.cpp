#include <iostream>

int main() {
	// 변수 선언 과정

	// 포인터 : 사용할 주소에 이름을 붙인다.
	//	즉, 포인터는 포인터의 이름이 주소를 나타낸다.
	//	간접값 연산자, 간접 참조 연산자 *
	
	int *a;	// c style
	int* b;	// c++ style
	int* c, d;	// c는 포인터 변수, d는 int형 변수

	int aa = 6;
	int* bb;
	bb = &aa;

	std::cout << "aa의 값 " << aa << std::endl;
	std::cout << "*bb의 값 " << *bb << std::endl;

	std::cout << "aa의 주소 " << &aa << std::endl;
	std::cout << "*bb의 주소" << bb << std::endl;

	*bb = *bb + 1;
	std::cout << "이제 aa의 값은 " << aa << std::endl; 

	// new 연산자
	/*
		어떤 데이터형을 원하는지 new 연산자에게 알려주면
		new 연산자는 그에 알맞은 크기의 메모리 블록을 찾아내고
		그 블록의 주소를 리턴한다.
	*/
	int* pointer = new int;


	// delete 연산자
	/*
		사용한 메모리를 다시 메모리 폴로 환수
		환수된 메모리는 프로그램의 다른 부분이 다시 사용
	*/
	int* ps = new int;
	// 메모리 사용
	delete ps;


	/* 
	delete 규칙 4가지
		1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다.
		2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
		3. new[]로 메모리를 대입할 경우 delete[]로 해제한다.
		4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다.
	*/

	double* p3 = new double[3];	// double 형 데이터 3개를 저장할 수 있는 공간을 대입한다.
	p3[0] = 0.2;				// p3를 배열 이름처럼 취급한다.
	p3[1] = 0.5;
	p3[2] = 0.8;

	std::cout << "p3[1] is " << p3[1] << std::endl;

	p3 = p3 + 1;	// 포인터를 증가시킨다.

	std::cout << "Now p3[0] is " << p3[0] << " and ";
	std::cout << "p3[1] is " << p3[1] << std::endl;
	
	p3 = p3 - 1;	// 다시 시작 위치를 지시한다.
	delete[] p3;	// 배열 메모리를 해제한다.
	return 0;
}