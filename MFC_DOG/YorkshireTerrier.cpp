#include "YorkshireTerrier.h"


YorkshireTerrier::YorkshireTerrier() {}
YorkshireTerrier::~YorkshireTerrier() {}

YorkshireTerrier puppy;
YorkshireTerrier YorkshireTerrier::setPuppy() {
	puppy.setBreed(_T("��ũ���׸���"));
	puppy.setColor(_T("Ȳ�ݺ� ����"));
	puppy.setSize(_T("����"));
	puppy.setHowl(_T("�˾�"));
	puppy.setSpeed(_T("�������"));

	return puppy;
}


CString YorkshireTerrier::displayPuppy() {
	CString displayPuppy = _T("ǰ�� : " + puppy.getBreed()
		+ "\r\n���� : " + puppy.getColor()
		+ "\r\nũ�� : " + puppy.getSize()
		+ "\r\n�����Ҹ� : " + puppy.getHowl()
		+ "\r\n�޸��¼ӵ� : " + puppy.getSpeed());
	return displayPuppy;
}

CString YorkshireTerrier::personality() {
	return _T("");
}

CString YorkshireTerrier::characteristic() {
	return _T("\r\n\r\n���� ǰ�� �ϳ�. ������ �������̸� �ױ۷��� �Ϻ� ������ �賭�� ������ ��ũ�Ű� �̸��� ����̴�.\r\n19���� �߹� ����Ʋ���� �뵿�ڵ��� �⸣�� ����, �׵��� ���� ã���� ��ũ�ſ�\r\n�� �� ���� ���� ���׸��� �׸������ ������ �� ���� ���� �̿��ߴ�.");
}
