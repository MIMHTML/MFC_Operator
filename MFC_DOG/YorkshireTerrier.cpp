#include "YorkshireTerrier.h"


YorkshireTerrier::YorkshireTerrier() {
	Puppy* puppy = new YorkshireTerrier();
	puppy->setBreed(_T("요크셔테리어"));
	puppy->setColor(_T(""));
	puppy->setSize(_T(""));
	puppy->setHowl(_T(""));
	puppy->setSpeed(_T(""));
}
YorkshireTerrier::~YorkshireTerrier() {}

CString YorkshireTerrier::displayPuppy() {
	return _T("");
}

CString YorkshireTerrier::characteristic() {
	return _T("");
}

CString YorkshireTerrier::howlSound() {
	return _T("");
}

CString YorkshireTerrier::runningSpeed() {
	return _T("");
}