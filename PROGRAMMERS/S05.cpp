	#include <iostream>
#include <vector>
#include <cmath>

int solution(int, int);

int main() {

	std::cout << solution(7, 1) << std::endl;

	return 0;
}

int solution(int slice, int n) {
	int answer = ceil(n / (double)slice);

	return answer;
}