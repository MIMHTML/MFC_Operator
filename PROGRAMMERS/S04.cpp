#include <iostream>
#include <vector>


int solution(int);

int main() {
	int n = 22;
	
	std::cout << solution(n) << std::endl;

	return 0;
}

int solution(int n) {
	int answer = 1;
	int pizza = 7;
	int pizza_piece = 7;

	for (int i = 0; i < n; i++) {
		if (pizza / n <= 0) {
			pizza += pizza_piece;
			answer++;
		}
	}
	
	return answer;
}


// �ٸ� ��� Ǯ��
int solution2(int n) {
	int answer = (n + 6) / 7;
	return answer;
}

int solution3(int n) {
	return (n % 7 == 0) ? n / 7 : n / 7 + 1;
}


#include <cmath>
int solution(int n) {
	int answer = ceil(n / 7.f);
	return answer;
}

/*
	�ø��Լ�: ceil()

	ceil() �Լ��� ���޵� �Ǽ������� ũ�ų� ���� ���� ���� ������ ��ȯ�ϴ� �Լ��Դϴ�.
	��ȯ���� double������, �μ��� ���޵� ���� ������ ��� ��ȯ���� ������ ��ȯ�˴ϴ�.

	���� ���, ceil(3.14159)�� 4.0�� ��ȯ�ϰ�, ceil(2.0)�� 2.0�� ��ȯ�մϴ�.
	ceil()�Լ��� <cmath> ��� ���Ͽ� ����Ǿ� �ֽ��ϴ�.

	�� �ݴ�� ���� �Լ��� floor() �Լ��̴�.
*/