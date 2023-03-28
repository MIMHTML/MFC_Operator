#include <iostream>
#include <vector>


double solution(std::vector<int>);
double solution2(std::vector<int> numbers);

int main() {
	std::vector<int> numbers = {89,90,91,92,93,94,95,96,97,98,99};

	for (int i = 0; i < numbers.size(); i++) {
		std::cout << numbers[i] << std::endl;
	}

	std::cout << numbers.size() << std::endl;
	std::cout << solution(numbers) << std::endl;

	std::cout << solution2(numbers) << std::endl;

	return 0;
}

double solution(std::vector<int> numbers) {
	double answer = 0;

	for (int i = 0; i < numbers.size(); i++) {
		answer += numbers[i];
	}
	answer /= numbers.size();

	return answer;
}


// 다른 사람 풀이

#include <numeric>
double solution2(std::vector<int> numbers) {
	double answer = 0;
	int sum = std::accumulate(begin(numbers), end(numbers), 0, std::plus<int>());
	answer = (double)sum / numbers.size();
	return answer;
}



/*
	accumulate 함수는 C++의 <numeric> 헤더에서 제공하는 함수로, 주어진 컨테이너
	(예 : vector, list, array 등)의 요소들을 더하거나 뺄 때 사용됩니다.
*/

int solution3() {
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	int sum = std::accumulate(v.begin(), v.end(), 0); // v의 모든 요소들의 합을 계산

	std::cout << "sum: " << sum << std::endl; // 출력: sum: 15

	return 0;
}

/*
	위 코드에서 accumulate 함수를 사용하여 vector v의 모든 요소들의 합을 계산합니다.
	accumulate 함수는 첫 번째 인자로 시작 반복자(iterator),
					  두 번째 인자로 종료 반복자(iterator),
					  세 번째 인자로 초기값을 받습니다.
	위 예시에서는 v의 시작과 끝 반복자를 v.begin, v.end로 지정하고 초기값을 0으로 지정하였습니다.
	accumulate 함수는 v의 첫 번째 요소부터 마지막 요소까지를 더한 결과를 반환합니다.
*/
