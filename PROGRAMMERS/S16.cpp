#include <iostream>
#include <vector>
#include <map>
#include <functional>

using namespace std;

int solution(vector<string>);

int main() {
	vector<string> babbling = { "ayaye", "uuuma", "ye", "yemawoo", "ayaa" };
	cout << solution(babbling) << endl;

	return 0;
}

int solution(std::vector<std::string> babbling) {
	int answer = 0;

	map<string, bool> canWords
	{
		{"aya",false},
		{"ye",false},
		{"woo",false},
		{"ma",false}
	};

	function<void()> initMap = [&canWords]
	{
		canWords["aya"] = false;
		canWords["ye"] = false;
		canWords["woo"] = false;
		canWords["ma"] = false;
	};

	string word;

	for (string babb : babbling)
	{
		initMap();

		word = "";

		for (auto b : babb)
		{
			word += b;

			if (canWords.find(word) != canWords.end())
			{
				canWords[word] = true;
				word = "";
			}
		}
		if (word.empty())
		{
			answer += 1;
		}
	}

	return answer;
}

