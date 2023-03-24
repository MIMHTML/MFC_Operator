#include "Windows.h"
#include <iostream>
#include <tchar.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)


using namespace std;

int main()
{
	printf("%%c�� ����� ��� : %c\n", 'a');            // ����
	printf("%%s�� ����� ��� : %s\n", "��ſ� C���"); // ���ڿ�  

	printf("%%f�� ����� ��� : %f\n", 0.123456);
	printf("%%f�� ����� ��� : %f\n", 0.123456789);    // �Ҽ��� 6�ڸ������� ǥ��  

	printf("%%o�� ����� ��� : %o\n", 123);            // 8�� ����
	printf("%%x�� ����� ��� : %x\n", 123);            // 16�� ����  

	printf("%%g�� ����� ��� : %g\n", 0.001234);       // ���� ���� %f�� %e
	printf("%%g�� ����� ��� : %g\n", 0.00001234);     // ���� ���� %f�� %e
	printf("%%G�� ����� ��� : %G\n", 0.000001234);    // ���� ���� %f�� %E

	int num01, num02;

	printf("ù ��° ������ �Է��ϼ��� : ");
	scanf("%d", &num01);
	printf("�� ��° ������ �Է��ϼ��� : ");
	scanf("%d", &num02);

	printf("�Է��Ͻ� �� ������ ���� %d�Դϴ�.\n\n\n", num01 + num02);





	// sprintf() �Լ� ����ϱ�
	//   - int�� ���ڿ��� ��ȯ�Ͽ� �����ϴ� ���
	char s1[10];   // ��ȯ�� ���ڿ��� ������ �迭
	int num1 = 283;   // 283�� ����
	sprintf(s1, "%d", num1);   // %d�� �����Ͽ� ������ ���ڿ��� ����
	printf("%s\n", s1);   //283


	// sprintf_s() �Լ� ����ϱ�
	// int sprintf_s(char * buffer, const char * format, ...);   ���ۿ� ������ �����Ͽ� ����ϴ� �Լ�
	// �̸�, ��ȣ, ����� ���ۿ� ����� �� ������ ������ ǥ�� �Է� ��Ʈ���� ���

	/*
		������ ũ�⸦ �������� ������ sprintf �Լ� ���ο����� ������ ũ�⸦ �� ���� �����ϴ�.
		���ۿ� ����� ������ ���� ũ�⺸�� ũ�� ���� �����÷ο� ������ �߻��մϴ�.
		C11������ �̷��� ������ ������ sprintf_s �Լ��� �����մϴ�.
	*/

	char buffer[256];
	char name[30] = "ȫ�浿";
	int num = 23;
	double level = 2.37;

	// ���ۿ� �̸�, ��ȣ, ����� ���
	sprintf_s(buffer, sizeof(buffer), "�̸�: %s\n��ȣ: %d\n���: %f\n\n\n", name, num, level);
	// ���۸� ǥ�� �Է� ��Ʈ���� ���
	puts(buffer);



	// �ٽ� ����
	printf("����1: %c  ����2: %c  ����3: %c \n", 'a', 'b', 'c');
	printf("���ڿ�1: [%s]   ���ڿ�2: [%s]\n", "�ȳ��ϼ���", "�ູ�� C++ �����ϱ�");
	printf("%%d�� Ȱ���� ����ǥ��: %d   %%i�� Ȱ���� ����ǥ��: %i\n", 10, 20);
	printf("%%f�� �Ҽ��� 6�ڸ����� ǥ��: %f\n", 1.23456789);
	printf("��ȣ ���� 8���� :%o \n", 10);
	printf("��ȣ ���� 10���� :%u \n", 10);
	printf("��ȣ ���� 16����(�ҹ���): %x\n", 255);
	printf("��ȣ ���� 16����(�빮��): %X\n\n\n", 255);



	// char* tchar_study = "�ȳ�";
	//   ����� 2017 �̻���ʹ� ������ �߻���.

	// �ذ����� 2������ �ִ�.
	//   1. tchar_study�� const�� �ٲ۴�.
	//      �̷��� �ϸ� �ذ��� �� �ֱ� ������, tchar_study��� �����͸� ������ �� ����.
	const char* tchar_study = "C++ is very very very cool!!";

	// 2. visual studio�� ������ �ٲ۴�.
	//      ������Ʈ > �Ӽ� > C/C++ > ��� > �ؼ���� > �ƴϿ�

	// �ڵ��� �������� ���ؼ��� ù��° ����� ��õ.
	printf("%s\n\n\n", tchar_study);

	char chTest[50] = "ABCDEFG";         // ��Ƽ����Ʈ ȯ�濡�� ���ڿ� ����
	wchar_t wchTest[50] = L"ABCDEFG";      // �����ڵ� ȯ�濡�� ���ڿ� ����
	TCHAR tchTest[50] = TEXT("ABCDEFG");   // TCHAR ������ ��ũ��
	TCHAR tchTest2[50] = _T("ABCDEFG");      // TCHAR
	TCHAR aa = 'z';

	cout << chTest << " " << wchTest << " " << tchTest << " " << tchTest2 << " " << aa << endl;

	const char* tchar_name = "�����";
	int tchar_age = 33;
	double weight = 67.8;
	double height = 178.5;

	sprintf_s(buffer, sizeof(buffer), 
		"%s�� ����: %d��, Ű: %f, ������: %f,\nTCHAR: %c, %d, %s, %s, %s, %s \n",
		tchar_name, tchar_age, weight, height, aa, aa, chTest, wchTest, tchTest, tchTest2);
		
	puts(buffer);


	return 0;
}