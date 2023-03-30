#include <iostream>
#include <vector>
#include <algorithm>

std::string solution(std::string);

int main() {


	std::cout << solution("jaron") << std::endl;

	return 0;
}

std::string solution(std::string my_string) {
	std::string answer = "";
	std::reverse(my_string.begin(), my_string.end());
	// string(my_string.rbegin(), my_string.rend());
	answer = my_string;

	

	return answer;
}