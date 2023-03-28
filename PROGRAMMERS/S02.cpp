#include <iostream>
#include <vector>

int solution(int);

int main() {
	int age;
	bool switch_button = true;

	while (switch_button) {
		std::cout << "나이를 입력하세요 : ";
		std::cin >> age;

		if (age == 0) {
			switch_button = false;
			break;
		}
		std::cout << solution(age) << " 년생 입니다. " << std::endl;

	}

	return 0;
}


int solution(int age) {
	std::vector<int> age_vector;
	age_vector.push_back(age);
	int year = 2022;
	
	year -= age_vector[0];

	return year+1;
}