#include <iostream>
#include <string>

using namespace std;

int main()
{

	string s = "1000";
	int num = 2333;

	/*
		stoi : string to integer		=> string을 integer로 변환
		stod : string to double			=> string을 double로 변환
		stoll : strng to long long		=> string을 long long으로 변환
	*/

	// string to integer
	cout << "======문자열을 int형으로 변환======" << endl;
	int num2 = stoi(s);
	cout << "숫자 : " << num << " + " << num2 << " = " << num + num2 << endl;


	cout << "===================================" << endl;


	// integer to string
	cout << "======숫자를 문자열로 변환=======" << endl;
	string s2 = to_string(num);
	cout << "문자열 : " << s << " + " << s2 << " = " << s + s2 << endl;
	

    return 0;
}
