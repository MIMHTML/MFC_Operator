#include "Maltese.h"

Maltese* maltese = (Maltese*)new Puppy();

Maltese::Maltese() {
	maltese->setBreed(_T("��Ƽ��"));
	maltese->setColor(_T("��Ƽ��"));
	maltese->setSize(_T("��Ƽ��"));
	maltese->setHowl(_T("��Ƽ��"));
	maltese->setSpeed(_T("��Ƽ��"));
}
Maltese::~Maltese() {}


CString Maltese::displayPuppy() {
	return _T("���÷��� : " + maltese->getBreed() + " �׽�Ʈ");
}

CString Maltese::characteristic() {
	return _T("");
}

CString Maltese::howlSound() {
	return _T("");
}

CString Maltese::runningSpeed() {
	return _T("");
}