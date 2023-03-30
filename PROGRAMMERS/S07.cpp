#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<int>);

// sort() 오름차순
// sort(a.begin(), a.end());

// greater() 내림차순	
// sort(a.begin(), a.end(), greater<int>());

int main() {
	std::vector<int> a = { 0, 31, 24, 10 ,1 ,9 };

	std::cout << solution(a) << std::endl;

	return 0;
}

int solution(std::vector<int>numbers) {
	int answer = 0;
	std::sort(numbers.begin(), numbers.end());
	answer = numbers[numbers.size() - 1] * numbers[numbers.size() - 2];

	return answer;
}

