#include <iostream>
#include <vector>

int main() {
	// 1. vector�� �̿��� for�� Ȱ��
	std::vector<int> v = { 1,2,3,4,5 };
	for (int i : v) {
		std::cout << i << " ";
	}
	std::cout << std::endl;

	// 2. �迭�� �̿��� for�� Ȱ��
	int arr[] = { 1,2,3,4,5 };
	for (int i : arr) {
		std::cout << arr[i - 1] << " ";
	}
	std::cout << std::endl;

	// 3. ���� for���� �̿��� �� ���
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < i + 1; j++) {
			std::cout << "*";
		}

		std::cout << std::endl;
	}

	// 4. for���� �̿��� ������ ���
	for (int i = 2; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			std::cout << i << " x " << " = " << i + j << std::endl;
		}
		std::cout << std::endl;
	}


	// 5. �迭 ����� �� ���ϱ�
	int arr2[] = {1,2,3,4,5};
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += arr2[i];
	}
	std::cout << "�迭�� �� : " << sum << std::endl;

	
	// 6. �ִ밪 ã��
	int arr3[] = { 5,2,8,1,9 };
	int max_num = arr3[0];
	for (int i = 1; i < 5; i++) {
		if (arr3[i] > max_num){
			max_num = arr3[i];
		}
	}
	std::cout << "�ִ밪 : " << max_num << std::endl;




	return 0;
}