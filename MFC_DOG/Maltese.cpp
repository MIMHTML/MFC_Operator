#include "Maltese.h"

Maltese* puppy = (Maltese*)new Puppy();

Maltese::Maltese() {
	puppy->setBreed(_T("��Ƽ��"));
	puppy->setColor(_T("��Ƽ��"));
	puppy->setSize(_T("��Ƽ��"));
	puppy->setHowl(_T("��Ƽ��"));
	puppy->setSpeed(_T("��Ƽ��"));
}
Maltese::~Maltese() {}

CString Maltese::displayPuppy() {
	return _T("���÷��� : " + puppy->getBreed() + " �׽�Ʈ");
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