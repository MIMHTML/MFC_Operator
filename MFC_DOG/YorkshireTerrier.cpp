#include "YorkshireTerrier.h"


YorkshireTerrier::YorkshireTerrier() {}
YorkshireTerrier::~YorkshireTerrier() {}

YorkshireTerrier puppy;
YorkshireTerrier YorkshireTerrier::setPuppy() {
	puppy.setBreed(_T("요크셔테리어"));
	puppy.setColor(_T("황금빛 갈색"));
	puppy.setSize(_T("소형"));
	puppy.setHowl(_T("알알"));
	puppy.setSpeed(_T("재빠르다"));

	return puppy;
}


CString YorkshireTerrier::displayPuppy() {
	CString displayPuppy = _T("품종 : " + puppy.getBreed()
		+ "\r\n색깔 : " + puppy.getColor()
		+ "\r\n크기 : " + puppy.getSize()
		+ "\r\n울음소리 : " + puppy.getHowl()
		+ "\r\n달리는속도 : " + puppy.getSpeed());
	return displayPuppy;
}

CString YorkshireTerrier::personality() {
	return _T("");
}

CString YorkshireTerrier::characteristic() {
	return _T("\r\n\r\n개의 품중 하나. 영국이 원산지이며 잉글랜드 북부 지방의 험난한 지역인 요크셔가 이름의 기원이다.\r\n19세기 중반 스코틀랜드 노동자들이 기르던 개로, 그들이 일을 찾으러 요크셔에\r\n올 때 여러 종의 조그마한 테리어들을 데려와 쥐 잡기용 개로 이용했다.");
}
