#include "Poodle.h"



Poodle::Poodle() {
	Puppy* puppy = new Poodle();
	puppy->setBreed(_T("Çªµé"));
	puppy->setColor(_T(""));
	puppy->setSize(_T(""));
	puppy->setHowl(_T(""));
	puppy->setSpeed(_T(""));
}

Poodle::~Poodle() {}

CString Poodle::displayPuppy() {
	return _T("");
}

CString Poodle::characteristic() {
	return _T("");
}

CString Poodle::howlSound() {
	return _T("");
}

CString Poodle::runningSpeed() {
	return _T("");
}