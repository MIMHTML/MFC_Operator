#include "Maltese.h"
Maltese::Maltese() : SmallPuppy::SmallPuppy() {}
Maltese::~Maltese() {}

Maltese puppy;

Maltese Maltese::setMaltese() {
	puppy.setBreed(_T("��Ƽ��"));
	puppy.setColor(_T("���"));
	puppy.setSize(_T("����"));
	puppy.setHowl(_T("�۸�"));
	puppy.setSpeed(_T("ȣ�ٴ�"));

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
	return _T("���� �� ǰ���̸� ������ ������ �������� ��Ÿ�� �����̴�. ���� ��ǥ���� �������̱⵵ �ϴ�. ���� ��Ī�� ��Ƽ��/��Ƽ� ȥ��Ǵ� ���̴�.");
}

