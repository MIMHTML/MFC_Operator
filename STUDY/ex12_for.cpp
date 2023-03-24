#include <iostream>

int main() {
	// 반복문이란?
	char a[10] = { 'a','b','c','d','e' };

	using namespace std;


	for (int i = 0; i < strlen(a); i++) {
		cout << a[i] << endl;
	}


	// 증가연산자, 감소연산자
	int aa = 10;
	int b = 10;
	cout << "aa :" << aa << " " << "b : " << b << endl;
	cout << "a++ : " << aa++ << endl;
	cout << "++b : " << ++b << endl;
	cout << "aa :" << aa << " " << "b : " << b << endl;



	// 배열 기반 반복문
	int c[10] = { 1,2,3,4,5 };
	for (int i : c) {
		cout << c[i-1] << endl;
	}


	// 중첩 루프 : 2차원 배열에서 가장 많이 활용됨.
	int temp[4][5]=
	{
		{ 1,2,3,4,5 },
		{ 11,22,33,44,55 },
		{ 111, 222, 333, 444, 555 },
		{ 1111,2222,3333,4444,5555 }
	};

	for (int i = 0; i<4; i++) {
		for (int j = 0; j<5; j++) {
			cout << temp[i][j] << " ";
		}
		cout << "\n";
	}


	return 0;
}