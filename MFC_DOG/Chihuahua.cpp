#include "Chihuahua.h"

Chihuahua::Chihuahua(){}
Chihuahua::~Chihuahua(){}

Chihuahua puppy;

Chihuahua Chihuahua::setPuppy() {
	puppy.setBreed(_T("ġ�Ϳ�"));
	puppy.setColor(_T("������, ��Ȳ��"));
	puppy.setSize(_T("����"));
	puppy.setHowl(_T("�п�"));
	puppy.setSpeed(_T("��δ�"));

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
	return _T("\r\n\r\n���� ǰ��. ġ�Ϳ�(Chihuahua)�� ���� ǰ�� �� ���� ���� ǰ������ �����ϴ�.\r\nŰ�� 13~22cm, ��� ü���� 1.8~2.7kg�� ���� ü���̴�.\r\n���� �� ������ ���� ū �׷���Ʈ ���ο� ���ϸ� 20���� 1�ۿ� �� �Ǵ� ���̴�.\r\n�ʹ� ũ�� �б��ϸ�, ���� ũ�� �ణ �����ϰ� ���δ�.\r\n�к����� ������, ������, ��Ȳ��, ��蹫�� �� ���� ������ �ִ�.\r\n���� ���� �Ų��Ų��� �ܸ����̴�.\r\n������� �ִµ�, ���� �ٷ��� ���޶�Ͼ� ��� �����ϸ鼭 ���ܳ��� �Ǿ���.");
}
