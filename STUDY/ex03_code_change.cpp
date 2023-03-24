#include <iostream>

using namespace std;

int main() 
{
	cout << "문자를 ASCII코드로 변환" << endl;
	char c = 'A';
	int i = static_cast<int>(c);
	cout << c << " 를 ASCII코드로 변환 결과 : " << i << endl;
	


	// 알파벳 소문자, 대문자, 숫자 0~9 중 하나가 주어졌을 때, 주어진 글자의 아스키 코드값을 출력하기.
	char a;
	int num;

	cout << "숫자 입력하세요 : " << endl;
	scanf("%c", &a);
	num = (int)a;

	printf("아스키 코드값 : %d \n", num);
	printf("해당하는 문자 : %c \n", num);


	return 0;
}