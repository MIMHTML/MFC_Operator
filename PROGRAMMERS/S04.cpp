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


// 다른 사람 풀이
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
	올림함수: ceil()

	ceil() 함수는 전달된 실수값보다 크거나 같은 가장 작은 정수를 반환하는 함수입니다.
	반환값은 double형으로, 인수로 전달된 값이 정수일 경우 반환값도 정수로 변환됩니다.

	예를 들어, ceil(3.14159)는 4.0을 반환하고, ceil(2.0)은 2.0을 반환합니다.
	ceil()함수는 <cmath> 헤더 파일에 선언되어 있습니다.

	※ 반대로 내림 함수는 floor() 함수이다.
*/