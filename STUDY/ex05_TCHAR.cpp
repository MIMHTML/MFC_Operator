#include <Windows.h>
#include <iostream>
#include <string>
#include <tchar.h>
#define _CRT_SECURE_NO_WARNINGS

using namespace std;


int converttoint()
{
	TCHAR tchar[2];
	_tcscpy_s(tchar, TEXT("5"));

	int i = tchar[0];

	cout << i << endl;

	return 0;
}

int tchartochar()
{
	TCHAR tchar[255] = _T("TCHAR 카피 문자");
	char tchar2[255];

	int len = 255;
	WideCharToMultiByte(CP_ACP, 0, tchar, len, tchar2, len, NULL, NULL);

	printf("%s\n", tchar2);

	return 0;
}


int main()
{
	converttoint();
	tchartochar();

	char buffer[255];
	int a = 25;
	char b = 'a';
	char c[10] = "sadf";

	sprintf_s(buffer, sizeof(buffer), "안녕:%d, %c, %s", a, b, c);
	puts(buffer);

}