#include "Chihuahua.h"

Chihuahua::Chihuahua(){
	Puppy* puppy = new Chihuahua();
	puppy->setBreed(_T("Ä¡¿Í¿Í"));
	puppy->setColor(_T(""));
	puppy->setSize(_T(""));
	puppy->setHowl(_T(""));
	puppy->setSpeed(_T(""));
}
Chihuahua::~Chihuahua(){}

CString Chihuahua::displayPuppy() {

	return _T("");
}

CString Chihuahua::characteristic() {
	return _T("");
}

CString Chihuahua::howlSound() {
	return _T("");
}

CString Chihuahua::runningSpeed() {
	return _T("");
}