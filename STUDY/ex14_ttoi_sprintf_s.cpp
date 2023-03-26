#include <iostream>
#include <string>
#include <sstream>
#include <tchar.h>

int main() {

	// 문자열을 숫자로 변환하기
	//	1. stoi()
	//		- stoi() 함수는 문자열을 정수형으로 변환하여 변수에 저장한다.
	//		- stoi() 함수는 <string> 헤더 파일에 정의되어 있다.
	//		- 문자열 내부에 숫자 이외의 문자가 포함되어 있으면 예외를 발생시킨다. (invalid_argument 예외)
	//		  따라서, 문자열 내부에 숫자 이외의 문자가 포함될 가능성이 있다면,
	//		  'stoi()' 함수 호출 전에 이를 체크하는 로직이 필요하다.

	std::string str = "123qqq1414";
	int num = std::stoi(str);
	std::cout << num << std::endl;


	// - 참고로 stoi() 함수는 문자열을 int 타입으로 변환할 수 있다.
	//   long, long long, unsigned int, unsigned long, unsigned long long 등 다양한 타입으로 변환하는 함수도 존재한다.
	//	 stoi()함수 대신 stol(), stoll(), stoul(), stoullI() 함수 등을 사용하면 된다.

	// 2. atoi()
	//		- C++11 이후에는 stoi() 함수를 사용하는 것이 권장된다.
	//		- atoi() 함수는 문자열을 정수로 변환할 때, 숫자 이외의 문자가 포함되어 있을 경우에도
	//		  그 이전의 숫자만을 변환한다. 따라서 예외 처리 로직이 없으면 예기치 않은 결과를 발생시킬 수 있다.

	std::string str2 = "qq11233qqq123wrqwr";
	int num2 = std::atoi(str2.c_str());
	std::cout << num2 << std::endl;

	// 3. stringstream 클래스
	//	 <sstream> 헤더 파일에 정의되어 있다.

	std::string str3 = "qq123555qwqe1414";
	int num3;
	std::stringstream(str3) >> num3;
	std::cout << num3 << std::endl;

	// 숫자를 문자열로 변환하기
	//	1. to_string()
	//		- to_string() 함수는 정수나 부동소수점 수를 문자열로 변환해준다.

	num = 123;
	str = std::to_string(num);
	std::cout << str << std::endl;

	// 2. stringstream 클래스
	//	<sstream> 헤더 파일에 정의되어 있다.
	std::stringstream ss;
	ss << num;
	str = ss.str();
	std::cout << str << std::endl;

	// string 클래스 없이 숫자에서 문자열로 변환하는 방법
	//	1) sprintf()
	//		- buf는 숫자를 저장하기 위한 문자열 버퍼입니다.
	//		- sprintf() 함수는
	//		  첫번째 인자로 문자열 버퍼를 받고,
	//		  두번째 인자는 출력 형식을 지정합니다.
	//		  세번째 인자로 변환할 숫자를 받습니다.

	int sprintf_num = 8751;
	char buf[20];
	sprintf(buf, "%d", sprintf_num);
	std::cout << buf << std::endl;


	// 2) sprintf_s()
	//	- sprintf() 함수는 버퍼 오버런 문제를 일으킬 가능성이 있다. 이러한 문제를 해겨랗기 위해 sprintf_s() 함수 제공
	//	- sprintf_s() 함수는
	//	  첫번째 인자로 출력할 버퍼와 버퍼의 크기를 받고,
	//	  두번째 인자로 출력 형식을 받습니다.
	//	- sprintf_s() 함수는 sprintf() 함수와 동일한 기능을 수행하지만,
	//	  버퍼 오버런을 방지하기 위해 버퍼의 크기를 검사하고,
	//	  출력 버퍼에 문자열이 들어갈 수 있는 충분한 공간이 있는 경우에만 문자열을 출력합니다.

	sprintf_s(buf, sizeof(buf), "hihi %d", sprintf_num);
	std::cout << buf << std::endl;



	// _ttoi()와 _tstoi() 차이점
	//
	//	_ttoi() : atoi()와 유사합니다.
	//			  이 함수는 입력 문자열의 처음부터 숫자가 아닌 문자가 나오기 전까지의 부분 문자열을 정수로 변환합니다.
	//			  이 함수는 입력 문자열이 null 종료 문자열이어야 합니다.
	//
	//	_tstoi() : 문자열을 지정된 진법으로 해석할 수 있습니다.
	//			   이 함수는 입력 문자열을 파싱하고 지정된 진법으로 표현된 정수로 변환합니다.
	//			   이 함수는 입력 문자열이 null 종료 문자열이어야 하며,
	//			   진법 매개 변수는 선택 사항입니다.
	//			   만약 진법 매개 변수가 생략되면, 함수는 입력 문자열의
	//			   첫 번째 문자열의 첫 번째 문자가 0x 또는 0X인 경우 16진법으로, 그렇지 않으면 10진법으로 변환합니다.
	//
	//	따라서, _ttoi 함수는 단순히 문자열을 정수로 변환하고 싶을때 사용하고,
	//	_tstoi 함수는 진법 변환을 수행하고 싶을 때 사용합니다.


	// _ttoi() 함수 예시
	TCHAR str10[] = _T("123");
	int num10 = _ttoi(str10);
	std::cout << num10 << std::endl;	// 출력결과 : 123

	TCHAR str20[] = _T("-456");
	int num20 = _ttoi(str20);
	std::cout << num20 << std::endl;	// 출력결과 : -456

	TCHAR str30[] = _T("hello123");
	int num30 = _ttoi(str30);
	std::cout << num30 << std::endl;	// 출력결과 : 0 (첫 번째 문자가 숫자가 아니기 때문에 변환 실패)

	// _tstoi()
	TCHAR str40[] = _T("1101");
	int num40 = _tstoi(str40);
	//int num40 = _tstoi(str40, nullptr, 2);
	std::cout << num40 << std::endl;	// 출력결과 : 13 (2진법으로 표현된 "1101"을 10진법으로 변환

	TCHAR str50[] = _T("0xFF");
	int num50 = _tstoi(str50);
	//int num50 = _tstoi(str50, nullptr, 0);
	std::cout << num50 << std::endl;	// 출력결과 : 255 (16진법으로 표현된 "0xFF"를 10진법으로 변환)

	std::wstring str60 = L"123";
	int num60 = _tstoi(str60.c_str());
	std::cout << num60 << std::endl;	// 출력결과 : 123 (std::wstring을 사용한 예시)


	return 0;
}
