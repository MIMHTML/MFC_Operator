#include <iostream>

void countDown(int);

int main() {
	// ���ȣ�� : C++���� �Լ��� �ڱ� �ڽ��� ȣ���� �� �ִ�.
	
	countDown(5);

	return 0;
}

void countDown(int n) {
	std::cout << "Counting..." << n << std::endl;
	if (n > 0)
		countDown(n - 1);
	std::cout << n << " �� ° ����Լ�" << std::endl;

}