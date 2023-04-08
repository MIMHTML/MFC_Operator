#include "Maltese.h"

Maltese* maltese = (Maltese*)new Puppy();

Maltese::Maltese() {
	maltese->setBreed(_T("말티즈"));
	maltese->setColor(_T("말티즈"));
	maltese->setSize(_T("말티즈"));
	maltese->setHowl(_T("말티즈"));
	maltese->setSpeed(_T("말티즈"));
}
Maltese::~Maltese() {}


CString Maltese::displayPuppy() {
	return _T("디스플레이 : " + maltese->getBreed() + " 테스트");
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