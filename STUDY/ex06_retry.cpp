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

	std::cout << "�ȳ��ϼ��� ���� " << name2 << " �Դϴ�." << std::endl;
	std::cout << "������ ��� �ǽó���?" << std::endl;
	//std::cin >> name1;
	std::cin.getline(name1, size);

	std::cout << "��, " << name1 << "��, ����� �̸���";
	std::cout << strlen(name1) << "�� �Դϴٸ�," << std::endl;
	std::cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�." << std::endl;
	std::cout << "�̸���" << name1[0] << "���� �����ϴ±���." << std::endl;
	name2[3] = '\0';
	std::cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�." << std::endl;
	std::cout << name2 << std::endl << std::endl;

	std::cout << strlen(name2) << std::endl;
	std::cout << sizeof(name2) << std::endl;
	std::cout << sizeof(name2) << "�迭 ũ��" << std::endl;
	std::cout << strlen(name2) << "���ڱ���" << std::endl;

	std::string char1 = "higigigigi";
	std::string char2;

	std::cout << char1 << char2 << std::endl;

	char2 = char1;

	std::cout << char1 << char2 << std::endl;
	std::cout << char1[0] << char2[0] << std::endl;
	std::cout << sizeof(char2) << std::endl;

	return 0;
}