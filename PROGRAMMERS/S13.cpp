#include <iostream>
#include <vector>
#include <algorithm>


int solution(std::vector<int>);

int main() {
	std::vector<int> sides = {1,2,3 };
	int solution_answer = solution(sides);

	std::cout << solution_answer << std::endl;

	return 0;
}

int solution(std::vector<int> sides) {
	int answer = 0;
	std::sort(sides.begin(), sides.end());
	if (sides[2] < (sides[0] + sides[1]))
		answer = 1;
	else answer = 2;

	return answer;
}