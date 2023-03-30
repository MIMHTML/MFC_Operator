#include <iostream>
#include <vector>


int solution(std::vector<int>, int);
int solution2(std::vector<int>, int);
int main() {
	std::vector<int> array = { 1,1,2,2,2,2,2,2,3,4,5 };
	std::cout << solution(array, 1) << std::endl;
	std::cout << solution2(array, 2);

	return 0;
}

int solution(std::vector<int> array, int n) {
	int answer = 0;

	for (int i = 0; i < array.size(); i++) {
		if (array[i] == n)
			answer++;
	}

	return answer;
}


// 다른 사람 풀이
#include <algorithm>
int solution2(std::vector<int> array, int n) {
	int answer = 0;
	answer = count(array.begin(), array.end(), n);
	return answer;
}