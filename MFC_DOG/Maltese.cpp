#include "Maltese.h"
Maltese::Maltese() {}
Maltese::~Maltese() {}

Maltese puppy;

Maltese Maltese::setPuppy() {
	puppy.setBreed(_T("��Ƽ��"));
	puppy.setColor(_T("���"));
	puppy.setSize(_T("����"));
	puppy.setHowl(_T("�۸�"));
	puppy.setSpeed(_T("������"));

	return puppy;
}


CString Maltese::displayPuppy() {
	CString displayPuppy = _T("ǰ�� : " + puppy.getBreed()
							+ "\r\n���� : " + puppy.getColor()
							+ "\r\nũ�� : " + puppy.getSize()
							+ "\r\n�����Ҹ� : " + puppy.getHowl()
							+ "\r\n�޸��¼ӵ� : " + puppy.getSpeed());
	return displayPuppy;
}

CString Maltese::personality() {
	return _T("");
}

CString Maltese::characteristic() {
	return _T("\r\n\r\n���� �� ǰ���̸� ������ ������ �������� ��Ÿ�� �����̴�.\r\n���� ��ǥ���� �������̱⵵ �ϴ�.\r\n���� ��Ī�� ��Ƽ��/��Ƽ� ȥ��Ǵ� ���̴�.");
}

