#include "Poodle.h"

Poodle::Poodle() {}
Poodle::~Poodle() {}

Poodle puppy;
Poodle Poodle::setPuppy() {
	puppy.setBreed(_T("Ǫ��"));
	puppy.setColor(_T(""));
	puppy.setSize(_T("����"));
	puppy.setHowl(_T("�۸�"));
	puppy.setSpeed(_T("������"));

	return puppy;
}


CString Poodle::displayPuppy() {
	CString displayPuppy = _T("ǰ�� : " + puppy.getBreed()
		+ "\r\n���� : " + puppy.getColor()
		+ "\r\nũ�� : " + puppy.getSize()
		+ "\r\n�����Ҹ� : " + puppy.getHowl()
		+ "\r\n�޸��¼ӵ� : " + puppy.getSpeed());
	return displayPuppy;
}

CString Poodle::personality() {
	return _T("");
}

CString Poodle::characteristic() {
	return _T("\r\n\r\n����, ũ��, �к���, ���ɿ� �̸��� ���� �������� �䱸 ������ ���� ���\r\n���� ��Ű�� ������ �ſ� ��ȣ �Ǵ� �ݷ����̴�.\r\n�츮���󿡼� 2��°�� ���� �⸣�� �ݷ����̴�.\r\n1��°�� ��Ƽ��.\r\n�������ٵ� ū Ư¡�� ��κ��� ��, ����̿� �ٸ��� Ǫ���� ���� ���� ������ �ʴ´�.\r\n������ �� ���� ����, �� �˷����� �������� �����ο� ���̴�.\r\n�� �˷������ �Ϲ������� ���� �� ��ü�� �˷����Ⱑ �ִ� �� �ƴ϶�\r\n���� ���� �������� �����̳� ��Ÿ ������� ���� �߻��Ǵ� �����ε�\r\n���ʿ� ���� �� ���� �׷��� ������ ũ�� ��Ʈ���� ������\r\n�������� �������� ���� �̻� ������ ���̴�.\r\n���� �˷����� ������ ���� ������ �� ������ ���ִ� �� ���� ����.\r\n������ �����ϰ� �α��ִ� Ǫ�� �����鵵 �����ڿ��� Ǫ���� ������ ���� ����\r\n�˷����� ������ �ִ� ������Ե� ���� ���ٰ� �򰡵Ǵ� ��.");
}