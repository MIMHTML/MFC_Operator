#include <iostream>
#include <vector>

int solution(std::vector<int>);

int main() {
	std::vector<int> dot = { -3,2 };

	std::cout << solution(dot) << std::endl;

	return 0;
}

int solution(std::vector<int> dot) {
	int answer = 0;
	int x = dot[0];
	int y = dot[1];
	
	if (x > 0 && y > 0)
		answer = 1;
	else if (x < 0 && y > 0)
		answer = 2;
	else if (x < 0 && y < 0)
		answer = 3;
	else if (x > 0 && y < 0)
		answer = 4;

	return answer;
}


// 다른 사람 풀이
int solution2(std::vector<int> dot) {
	return dot[0] > 0 ? (dot[1] > 0 ? 1 : 4) : (dot[1] < 0 ? 3 : 2);
}




int solution3(std::vector<int> dot) {
	int x = dot[0], y = dot[1];
	if (x > 0) {
		if (y > 0) return 1;
		else return 4;
	}
	else {
		if (y > 0) return 2;
		else return 3;
	}
}
