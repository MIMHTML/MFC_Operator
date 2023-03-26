#include <iostream>

using namespace std;

int sumArr(int*, int*);

const int SIZE = 8;

int main() {
	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	cout << "size of arr " << sizeof arr << endl;
	// arr == &arr[0]
	int sum = sumArr(arr, arr+SIZE);
	cout << "함수의 총 합은 " << sum << " 입니다. ";

	sum = sumArr(arr, arr+3);
	cout << "함수의 세번째 인덱스까지의 합은 " << sum << " 입니다." << endl;
	return 0;
}
 
int sumArr(int* begin, int* end) {
	cout << "size of arr " << sizeof begin << endl;
	int total = 0;
	int* pt;

	for (pt = begin; pt != end; pt++) {
		total += *pt;

	}


	return total;
}