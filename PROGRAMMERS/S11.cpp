#include <iostream>
#include <vector>

int solution(int);
int main() {

	std::cout << solution(20) << std::endl;

	return 0;
}

int solution(int n) {
	int answer = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			answer++;
		}
	}
	return answer;
}


// 내가 처음 쓴 답 (이중 for문으로 인해 시간 초과 => 오답)
int solution2(int n) {
	int answer = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if ((i * j) == n) {
				answer++;
			}
		}
	}
	return answer;
}