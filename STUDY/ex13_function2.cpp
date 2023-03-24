#include <iostream>

using namespace std;

int sumArr(int*, int);

const int SIZE = 8;

int main() {
	int arr[SIZE] = { 1,2,4,8,16,32,64,128 };
	cout << "size of arr " << sizeof arr << endl;
	// arr == &arr[0]
	int sum = sumArr(arr, SIZE);


	cout << "함수의 총 합은 " << sum << " 입니다. ";
	return 0;
}
 
int sumArr(int* arr, int n) {
	cout << "size of arr " << sizeof arr << endl;
	int total = 0;

	for (int i = 0; i < n; i++) {
		total += arr[i];
	}

	return total;
}