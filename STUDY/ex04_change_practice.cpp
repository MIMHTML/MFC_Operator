#include "Windows.h"
#include <iostream>
#include <tchar.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


using namespace std;

int main()
{
	printf("%%c를 사용한 결과 : %c\n", 'a');            // 문자
	printf("%%s를 사용한 결과 : %s\n", "즐거운 C언어"); // 문자열  

	printf("%%f를 사용한 결과 : %f\n", 0.123456);
	printf("%%f를 사용한 결과 : %f\n", 0.123456789);    // 소수점 6자리까지만 표현  

	printf("%%o를 사용한 결과 : %o\n", 123);            // 8진 정수
	printf("%%x를 사용한 결과 : %x\n", 123);            // 16진 정수  

	printf("%%g를 사용한 결과 : %g\n", 0.001234);       // 값에 따라 %f나 %e
	printf("%%g를 사용한 결과 : %g\n", 0.00001234);     // 값에 따라 %f나 %e
	printf("%%G를 사용한 결과 : %G\n", 0.000001234);    // 값에 따라 %f나 %E

	int num01, num02;

	printf("첫 번째 정수를 입력하세요 : ");
	scanf("%d", &num01);
	printf("두 번째 정수를 입력하세요 : ");
	scanf("%d", &num02);

	printf("입력하신 두 정수의 합은 %d입니다.\n\n\n", num01 + num02);





	// sprintf() 함수 사용하기
	//   - int를 문자열로 변환하여 저장하는 방법
	char s1[10];   // 변환한 문자열을 저장할 배열
	int num1 = 283;   // 283은 정수
	sprintf(s1, "%d", num1);   // %d를 지정하여 정수를 문자열로 저장
	printf("%s\n", s1);   //283


	// sprintf_s() 함수 사용하기
	// int sprintf_s(char * buffer, const char * format, ...);   버퍼에 포맷을 지정하여 출력하는 함수
	// 이름, 번호, 등급을 버퍼에 출력한 후 버퍼의 내용을 표준 입력 스트림에 출력

	/*
		버퍼의 크기를 전달하지 않으면 sprintf 함수 내부에서는 버퍼의 크기를 알 수가 없습니다.
		버퍼에 출력할 내용이 버퍼 크기보다 크면 버퍼 오버플로우 문제가 발생합니다.
		C11에서는 이러한 문제를 개선한 sprintf_s 함수를 제공합니다.
	*/

	char buffer[256];
	char name[30] = "홍길동";
	int num = 23;
	double level = 2.37;

	// 버퍼에 이름, 번호, 등급을 출력
	sprintf_s(buffer, sizeof(buffer), "이름: %s\n번호: %d\n등급: %f\n\n\n", name, num, level);
	// 버퍼를 표준 입력 스트림에 출력
	puts(buffer);



	// 다시 복습
	printf("문자1: %c  문자2: %c  문자3: %c \n", 'a', 'b', 'c');
	printf("문자열1: [%s]   문자열2: [%s]\n", "안녕하세요", "행복한 C++ 공부하기");
	printf("%%d를 활용한 정수표현: %d   %%i를 활용한 정수표현: %i\n", 10, 20);
	printf("%%f는 소수점 6자리까지 표현: %f\n", 1.23456789);
	printf("부호 없는 8진수 :%o \n", 10);
	printf("부호 없는 10진수 :%u \n", 10);
	printf("부호 없는 16진수(소문자): %x\n", 255);
	printf("부호 없는 16진수(대문자): %X\n\n\n", 255);



	// char* tchar_study = "안녕";
	//   비쥬얼 2017 이상부터는 오류가 발생함.

	// 해결방법은 2가지가 있다.
	//   1. tchar_study을 const로 바꾼다.
	//      이렇게 하면 해결할 수 있긴 하지만, tchar_study라는 포인터를 조작할 수 없다.
	const char* tchar_study = "C++ is very very very cool!!";

	// 2. visual studio의 설정을 바꾼다.
	//      프로젝트 > 속성 > C/C++ > 언어 > 준수모드 > 아니요

	// 코드의 안전성을 위해서는 첫번째 방법을 추천.
	printf("%s\n\n\n", tchar_study);

	char chTest[50] = "ABCDEFG";         // 멀티바이트 환경에서 문자열 정의
	wchar_t wchTest[50] = L"ABCDEFG";      // 유니코드 환경에서 문자열 정의
	TCHAR tchTest[50] = TEXT("ABCDEFG");   // TCHAR 통합형 매크로
	TCHAR tchTest2[50] = _T("ABCDEFG");      // TCHAR
	TCHAR aa = 'z';

	cout << chTest << " " << wchTest << " " << tchTest << " " << tchTest2 << " " << aa << endl;

	const char* tchar_name = "김명일";
	int tchar_age = 33;
	double weight = 67.8;
	double height = 178.5;

	sprintf_s(buffer, sizeof(buffer), 
		"%s의 나이: %d세, 키: %f, 몸무게: %f,\nTCHAR: %c, %d, %s, %s, %s, %s \n",
		tchar_name, tchar_age, weight, height, aa, aa, chTest, wchTest, tchTest, tchTest2);
		
	puts(buffer);


	return 0;
}