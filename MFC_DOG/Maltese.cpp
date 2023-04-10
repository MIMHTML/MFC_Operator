#include "Maltese.h"
Maltese::Maltese() {}
Maltese::~Maltese() {}

Maltese puppy;

Maltese Maltese::setPuppy() {
	puppy.setBreed(_T("말티즈"));
	puppy.setColor(_T("흰색"));
	puppy.setSize(_T("소형"));
	puppy.setHowl(_T("멍멍"));
	puppy.setSpeed(_T("빠르다"));

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
	return _T("\r\n\r\n개의 한 품종이며 남유럽 지방의 섬나라인 몰타가 원산이다.\r\n또한 대표적인 소형견이기도 하다.\r\n국내 명칭은 말티즈/몰티즈가 혼재되는 편이다.");
}

