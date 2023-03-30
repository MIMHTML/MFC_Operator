#include <iostream>
#include <vector>


std::vector<int> solution(std::vector<int>, int, int);

int main() {
	std::vector<int> numbers = { 1,2,3,4,5 };
	int num1 = 1;
	int num2 = 3;

	std::vector<int> solution_answer = solution(numbers, num1, num2);

	for (int i = 0; i < solution_answer.size(); i++) {
		std::cout << solution_answer[i] << std::endl;
	}


	return 0;
}

std::vector<int> solution(std::vector<int> numbers, int num1, int num2) {
	std::vector<int> answer;

	for (int i = num1; i < num2+1; i++) {
		answer.push_back(numbers[i]);
	}


	return answer;
}


// 다른 사람 풀이
std::vector<int> solution(std::vector<int> numbers, int num1, int num2) {
	std::vector<int> answer(numbers.begin() + num1, numbers.begin() + num2 + 1);
	return answer;
}