#include <iostream>
#include <string>
#include <sstream>
#include <tchar.h>

int main() {

	// ���ڿ��� ���ڷ� ��ȯ�ϱ�
	//	1. stoi()
	//		- stoi() �Լ��� ���ڿ��� ���������� ��ȯ�Ͽ� ������ �����Ѵ�.
	//		- stoi() �Լ��� <string> ��� ���Ͽ� ���ǵǾ� �ִ�.
	//		- ���ڿ� ���ο� ���� �̿��� ���ڰ� ���ԵǾ� ������ ���ܸ� �߻���Ų��. (invalid_argument ����)
	//		  ����, ���ڿ� ���ο� ���� �̿��� ���ڰ� ���Ե� ���ɼ��� �ִٸ�,
	//		  'stoi()' �Լ� ȣ�� ���� �̸� üũ�ϴ� ������ �ʿ��ϴ�.

	std::string str = "123qqq1414";
	int num = std::stoi(str);
	std::cout << num << std::endl;


	// - ����� stoi() �Լ��� ���ڿ��� int Ÿ������ ��ȯ�� �� �ִ�.
	//   long, long long, unsigned int, unsigned long, unsigned long long �� �پ��� Ÿ������ ��ȯ�ϴ� �Լ��� �����Ѵ�.
	//	 stoi()�Լ� ��� stol(), stoll(), stoul(), stoullI() �Լ� ���� ����ϸ� �ȴ�.

	// 2. atoi()
	//		- C++11 ���Ŀ��� stoi() �Լ��� ����ϴ� ���� ����ȴ�.
	//		- atoi() �Լ��� ���ڿ��� ������ ��ȯ�� ��, ���� �̿��� ���ڰ� ���ԵǾ� ���� ��쿡��
	//		  �� ������ ���ڸ��� ��ȯ�Ѵ�. ���� ���� ó�� ������ ������ ����ġ ���� ����� �߻���ų �� �ִ�.

	std::string str2 = "qq11233qqq123wrqwr";
	int num2 = std::atoi(str2.c_str());
	std::cout << num2 << std::endl;

	// 3. stringstream Ŭ����
	//	 <sstream> ��� ���Ͽ� ���ǵǾ� �ִ�.

	std::string str3 = "qq123555qwqe1414";
	int num3;
	std::stringstream(str3) >> num3;
	std::cout << num3 << std::endl;

	// ���ڸ� ���ڿ��� ��ȯ�ϱ�
	//	1. to_string()
	//		- to_string() �Լ��� ������ �ε��Ҽ��� ���� ���ڿ��� ��ȯ���ش�.

	num = 123;
	str = std::to_string(num);
	std::cout << str << std::endl;

	// 2. stringstream Ŭ����
	//	<sstream> ��� ���Ͽ� ���ǵǾ� �ִ�.
	std::stringstream ss;
	ss << num;
	str = ss.str();
	std::cout << str << std::endl;

	// string Ŭ���� ���� ���ڿ��� ���ڿ��� ��ȯ�ϴ� ���
	//	1) sprintf()
	//		- buf�� ���ڸ� �����ϱ� ���� ���ڿ� �����Դϴ�.
	//		- sprintf() �Լ���
	//		  ù��° ���ڷ� ���ڿ� ���۸� �ް�,
	//		  �ι�° ���ڴ� ��� ������ �����մϴ�.
	//		  ����° ���ڷ� ��ȯ�� ���ڸ� �޽��ϴ�.

	int sprintf_num = 8751;
	char buf[20];
	sprintf(buf, "%d", sprintf_num);
	std::cout << buf << std::endl;


	// 2) sprintf_s()
	//	- sprintf() �Լ��� ���� ������ ������ ����ų ���ɼ��� �ִ�. �̷��� ������ �ذܶ��� ���� sprintf_s() �Լ� ����
	//	- sprintf_s() �Լ���
	//	  ù��° ���ڷ� ����� ���ۿ� ������ ũ�⸦ �ް�,
	//	  �ι�° ���ڷ� ��� ������ �޽��ϴ�.
	//	- sprintf_s() �Լ��� sprintf() �Լ��� ������ ����� ����������,
	//	  ���� �������� �����ϱ� ���� ������ ũ�⸦ �˻��ϰ�,
	//	  ��� ���ۿ� ���ڿ��� �� �� �ִ� ����� ������ �ִ� ��쿡�� ���ڿ��� ����մϴ�.

	sprintf_s(buf, sizeof(buf), "hihi %d", sprintf_num);
	std::cout << buf << std::endl;



	// _ttoi()�� _tstoi() ������
	//
	//	_ttoi() : atoi()�� �����մϴ�.
	//			  �� �Լ��� �Է� ���ڿ��� ó������ ���ڰ� �ƴ� ���ڰ� ������ �������� �κ� ���ڿ��� ������ ��ȯ�մϴ�.
	//			  �� �Լ��� �Է� ���ڿ��� null ���� ���ڿ��̾�� �մϴ�.
	//
	//	_tstoi() : ���ڿ��� ������ �������� �ؼ��� �� �ֽ��ϴ�.
	//			   �� �Լ��� �Է� ���ڿ��� �Ľ��ϰ� ������ �������� ǥ���� ������ ��ȯ�մϴ�.
	//			   �� �Լ��� �Է� ���ڿ��� null ���� ���ڿ��̾�� �ϸ�,
	//			   ���� �Ű� ������ ���� �����Դϴ�.
	//			   ���� ���� �Ű� ������ �����Ǹ�, �Լ��� �Է� ���ڿ���
	//			   ù ��° ���ڿ��� ù ��° ���ڰ� 0x �Ǵ� 0X�� ��� 16��������, �׷��� ������ 10�������� ��ȯ�մϴ�.
	//
	//	����, _ttoi �Լ��� �ܼ��� ���ڿ��� ������ ��ȯ�ϰ� ������ ����ϰ�,
	//	_tstoi �Լ��� ���� ��ȯ�� �����ϰ� ���� �� ����մϴ�.


	// _ttoi() �Լ� ����
	TCHAR str10[] = _T("123");
	int num10 = _ttoi(str10);
	std::cout << num10 << std::endl;	// ��°�� : 123

	TCHAR str20[] = _T("-456");
	int num20 = _ttoi(str20);
	std::cout << num20 << std::endl;	// ��°�� : -456

	TCHAR str30[] = _T("hello123");
	int num30 = _ttoi(str30);
	std::cout << num30 << std::endl;	// ��°�� : 0 (ù ��° ���ڰ� ���ڰ� �ƴϱ� ������ ��ȯ ����)

	// _tstoi()
	TCHAR str40[] = _T("1101");
	int num40 = _tstoi(str40);
	//int num40 = _tstoi(str40, nullptr, 2);
	std::cout << num40 << std::endl;	// ��°�� : 13 (2�������� ǥ���� "1101"�� 10�������� ��ȯ

	TCHAR str50[] = _T("0xFF");
	int num50 = _tstoi(str50);
	//int num50 = _tstoi(str50, nullptr, 0);
	std::cout << num50 << std::endl;	// ��°�� : 255 (16�������� ǥ���� "0xFF"�� 10�������� ��ȯ)

	std::wstring str60 = L"123";
	int num60 = _tstoi(str60.c_str());
	std::cout << num60 << std::endl;	// ��°�� : 123 (std::wstring�� ����� ����)


	return 0;
}
