#include "Chihuahua.h"

Chihuahua::Chihuahua(){}
Chihuahua::~Chihuahua(){}

Chihuahua puppy;

Chihuahua Chihuahua::setPuppy() {
	puppy.setBreed(_T("��Ƽ��"));
	puppy.setColor(_T("���"));
	puppy.setSize(_T("����"));
	puppy.setHowl(_T("�۸�"));
	puppy.setSpeed(_T("ȣ�ٴ�"));

	return puppy;
}

CString Chihuahua::displayPuppy() {
	CString displayPuppy = _T("ǰ�� : " + puppy.getBreed()
		+ "\r\n���� : " + puppy.getColor()
		+ "\r\nũ�� : " + puppy.getSize()
		+ "\r\n�����Ҹ� : " + puppy.getHowl()
		+ "\r\n�޸��¼ӵ� : " + puppy.getSpeed());
	return displayPuppy;
}

CString Chihuahua::personality() {
	return _T("");
}

CString Chihuahua::characteristic() {
	return _T("\r\n\r\n���� �� ǰ���̸� ������ ������ �������� ��Ÿ�� �����̴�. \n\r\n���� ��ǥ���� �������̱⵵ �ϴ�.\r\n\r���� ��Ī�� ��Ƽ��/��Ƽ� ȥ��Ǵ� ���̴�.");
}
