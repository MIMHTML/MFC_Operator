#include <iostream>
#include <vector>


std::vector<int> solution(std::vector<int>);

int main() {
	std::vector<int> num_list = { 1,1,1,1,1,2 };
	std::vector<int> solution_answer = solution(num_list);

	for (int i = 0; i < solution_answer.size(); i++) {
		std::cout << solution_answer[i] << std::endl;

	}

	return 0;
}

std::vector<int> solution(std::vector<int> num_list) {
	std::vector<int> answer;
	for (int i = (num_list.size()) - 1; i >= 0; i--) {
		answer.push_back(num_list[i]);
	}

	return answer;
}


// �ٸ� ��� Ǯ��
#include <algorithm>
std::vector<int> solution(std::vector<int> num_list) {
	std::vector<int> answer;
	reverse(num_list.begin(), num_list.end());

	return num_list;
}

// reverse �Լ��� ����Ͽ� vector�� ��ҵ��� �������� ������ �� �ִ�.
