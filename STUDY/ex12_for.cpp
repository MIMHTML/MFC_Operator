#include <iostream>

int main() {
	// �ݺ����̶�?
	char a[10] = { 'a','b','c','d','e' };

	using namespace std;


	for (int i = 0; i < strlen(a); i++) {
		cout << a[i] << endl;
	}


	// ����������, ���ҿ�����
	int aa = 10;
	int b = 10;
	cout << "aa :" << aa << " " << "b : " << b << endl;
	cout << "a++ : " << aa++ << endl;
	cout << "++b : " << ++b << endl;
	cout << "aa :" << aa << " " << "b : " << b << endl;



	// �迭 ��� �ݺ���
	int c[10] = { 1,2,3,4,5 };
	for (int i : c) {
		cout << c[i-1] << endl;
	}


	// ��ø ���� : 2���� �迭���� ���� ���� Ȱ���.
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