#include <iostream>
#include <vector>

int solution(int num1, int num2);

int main()
{
	std::cout << solution(1, 2) << std::endl;

	return 0;
}


int solution(int num1, int num2 ) {
	std::vector<int> answer;
	answer.push_back(num1);
	answer.push_back(num2);

	if (answer[0] == answer[1]) {
		return 1;
	}
	else {
		return -1;
	}

}


