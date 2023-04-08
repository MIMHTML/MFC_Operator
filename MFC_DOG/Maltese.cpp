#include "Maltese.h"
Maltese::Maltese() : SmallPuppy::SmallPuppy() {}
Maltese::~Maltese() {}

Maltese puppy;

Maltese Maltese::setMaltese() {
	puppy.setBreed(_T("말티즈"));
	puppy.setColor(_T("흰색"));
	puppy.setSize(_T("소형"));
	puppy.setHowl(_T("멍멍"));
	puppy.setSpeed(_T("호다닥"));

	return puppy;
}

CString Maltese::displayPuppy() {
	CString displayPuppy = _T("품종 : " + puppy.getBreed()
							+ "\r\n색깔 : " + puppy.getColor()
							+ "\r\n크기 : " + puppy.getSize()
							+ "\r\n울음소리 : " + puppy.getHowl()
							+ "\r\n달리는속도 : " + puppy.getSpeed());
	return displayPuppy;
}

CString Maltese::personality() {
	return _T("");
}

CString Maltese::characteristic() {
	return _T("개의 한 품종이며 남유럽 지방의 섬나라인 몰타가 원산이다. 또한 대표적인 소형견이기도 하다. 국내 명칭은 말티즈/몰티즈가 혼재되는 편이다.");
}

