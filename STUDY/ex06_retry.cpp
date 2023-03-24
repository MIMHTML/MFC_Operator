#include <iostream>

int main() {

	int i;
	float sum = 0;

	for (i = 0; i < 1000; i++) {
		sum += 0.1;
	}

	std::cout << sum << std::endl;


	const int size = 20;
	char name1[size];
	char name2[size] = "C++ Programming";

	std::cout << "안녕하세요 저는 " << name2 << " 입니다." << std::endl;
	std::cout << "성함이 어떻게 되시나요?" << std::endl;
	//std::cin >> name1;
	std::cin.getline(name1, size);

	std::cout << "음, " << name1 << "씨, 당신의 이름은";
	std::cout << strlen(name1) << "자 입니다만," << std::endl;
	std::cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다." << std::endl;
	std::cout << "이름이" << name1[0] << "으로 시작하는군요." << std::endl;
	name2[3] = '\0';
	std::cout << "제 이름의 처음 세 문자는 다음과 같습니다." << std::endl;
	std::cout << name2 << std::endl << std::endl;

	std::cout << strlen(name2) << std::endl;
	std::cout << sizeof(name2) << std::endl;
	std::cout << sizeof(name2) << "배열 크기" << std::endl;
	std::cout << strlen(name2) << "글자길이" << std::endl;

	std::string char1 = "higigigigi";
	std::string char2;

	std::cout << char1 << char2 << std::endl;

	char2 = char1;

	std::cout << char1 << char2 << std::endl;
	std::cout << char1[0] << char2[0] << std::endl;
	std::cout << sizeof(char2) << std::endl;

	return 0;
}