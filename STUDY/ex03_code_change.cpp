#include <iostream>

using namespace std;

int main() 
{
	cout << "���ڸ� ASCII�ڵ�� ��ȯ" << endl;
	char c = 'A';
	int i = static_cast<int>(c);
	cout << c << " �� ASCII�ڵ�� ��ȯ ��� : " << i << endl;
	


	// ���ĺ� �ҹ���, �빮��, ���� 0~9 �� �ϳ��� �־����� ��, �־��� ������ �ƽ�Ű �ڵ尪�� ����ϱ�.
	char a;
	int num;

	cout << "���� �Է��ϼ��� : " << endl;
	scanf("%c", &a);
	num = (int)a;

	printf("�ƽ�Ű �ڵ尪 : %d \n", num);
	printf("�ش��ϴ� ���� : %c \n", num);


	return 0;
}