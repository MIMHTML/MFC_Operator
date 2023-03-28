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


// �ٸ� ��� Ǯ��

#include <numeric>
double solution2(std::vector<int> numbers) {
	double answer = 0;
	int sum = std::accumulate(begin(numbers), end(numbers), 0, std::plus<int>());
	answer = (double)sum / numbers.size();
	return answer;
}



/*
	accumulate �Լ��� C++�� <numeric> ������� �����ϴ� �Լ���, �־��� �����̳�
	(�� : vector, list, array ��)�� ��ҵ��� ���ϰų� �� �� ���˴ϴ�.
*/

int solution3() {
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	int sum = std::accumulate(v.begin(), v.end(), 0); // v�� ��� ��ҵ��� ���� ���

	std::cout << "sum: " << sum << std::endl; // ���: sum: 15

	return 0;
}

/*
	�� �ڵ忡�� accumulate �Լ��� ����Ͽ� vector v�� ��� ��ҵ��� ���� ����մϴ�.
	accumulate �Լ��� ù ��° ���ڷ� ���� �ݺ���(iterator),
					  �� ��° ���ڷ� ���� �ݺ���(iterator),
					  �� ��° ���ڷ� �ʱⰪ�� �޽��ϴ�.
	�� ���ÿ����� v�� ���۰� �� �ݺ��ڸ� v.begin, v.end�� �����ϰ� �ʱⰪ�� 0���� �����Ͽ����ϴ�.
	accumulate �Լ��� v�� ù ��° ��Һ��� ������ ��ұ����� ���� ����� ��ȯ�մϴ�.
*/
