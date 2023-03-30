#include <iostream>
#include <vector>

std::vector<int> solution(std::vector<int>);

int main() {
	std::vector<int> num_list = {1,3, };
	
	std::vector<int> solution_answer = solution(num_list);

	for (int i = 0; i < solution_answer.size(); i++) {
		std::cout << solution_answer[i] << std::endl;
	}

	return 0;
}

std::vector<int> solution(std::vector<int> num_list) {
	std::vector<int> answer(2);
	
	for (int i = 0; i < num_list.size(); i++) {
		if ((num_list[i] % 2) == 0) {
			answer[0] = answer[0] + 1;
		}
		else {
			answer[1] = answer[1] + 1;
		}

	}

	return answer;
}



// 다른 사람 풀이
std::vector<int> solution(std::vector<int> num_list) {
	std::vector<int> answer(2, 0);
	for (int num : num_list) {
		answer[num % 2]++;
	}
	return answer;
}