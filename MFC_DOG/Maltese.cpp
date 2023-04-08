#include "Maltese.h"

Maltese* puppy = (Maltese*)new Puppy();

Maltese::Maltese() {
	puppy->setBreed(_T("말티즈"));
	puppy->setColor(_T("말티즈"));
	puppy->setSize(_T("말티즈"));
	puppy->setHowl(_T("말티즈"));
	puppy->setSpeed(_T("말티즈"));
}
Maltese::~Maltese() {}

CString Maltese::displayPuppy() {
	return _T("디스플레이 : " + puppy->getBreed() + " 테스트");
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