#include <iostream>
#include <string>

using namespace std;

int main()
{

	string s = "1000";
	int num = 2333;

	/*
		stoi : string to integer		=> string�� integer�� ��ȯ
		stod : string to double			=> string�� double�� ��ȯ
		stoll : strng to long long		=> string�� long long���� ��ȯ
	*/

	// string to integer
	cout << "======���ڿ��� int������ ��ȯ======" << endl;
	int num2 = stoi(s);
	cout << "���� : " << num << " + " << num2 << " = " << num + num2 << endl;


	cout << "===================================" << endl;


	// integer to string
	cout << "======���ڸ� ���ڿ��� ��ȯ=======" << endl;
	string s2 = to_string(num);
	cout << "���ڿ� : " << s << " + " << s2 << " = " << s + s2 << endl;
	

    return 0;
}
