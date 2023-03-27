#include <iostream>
#include <vector>

int main() {
	// 1. vector를 이용한 for문 활용
	std::vector<int> v = { 1,2,3,4,5 };
	for (int i : v) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	// 2. 배열을 이용한 for문 활용
	int arr[] = { 1,2,3,4,5 };
	for (int i : arr) {
		std::cout << arr[i - 1] << " ";
	}
	std::cout << std::endl;

	// 3. 이중 for문을 이용한 별 찍기
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i + 1; j++) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	// 4. for문을 이용한 구구단 출력
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			std::cout << i << " x " << " = " << i + j << std::endl;
		}
		std::cout << std::endl;
	}


	// 5. 배열 요소의 합 구하기
	int arr2[] = {1,2,3,4,5};
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr2[i];
	}
	std::cout << "배열의 합 : " << sum << std::endl;

	
	// 6. 최대값 찾기
	int arr3[] = { 5,2,8,1,9 };
	int max_num = arr3[0];
	for (int i = 1; i < 5; i++) {
		if (arr3[i] > max_num){
			max_num = arr3[i];
		}
	}
	std::cout << "최대값 : " << max_num << std::endl;




	return 0;
}