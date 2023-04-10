#include "Chihuahua.h"

Chihuahua::Chihuahua(){}
Chihuahua::~Chihuahua(){}

Chihuahua puppy;

Chihuahua Chihuahua::setPuppy() {
	puppy.setBreed(_T("치와와"));
	puppy.setColor(_T("검은색, 담황색"));
	puppy.setSize(_T("소형"));
	puppy.setHowl(_T("왈왈"));
	puppy.setSpeed(_T("잽싸다"));

	return puppy;
}

CString Chihuahua::displayPuppy() {
	CString displayPuppy = _T("품종 : " + puppy.getBreed()
		+ "\r\n색깔 : " + puppy.getColor()
		+ "\r\n크기 : " + puppy.getSize()
		+ "\r\n울음소리 : " + puppy.getHowl()
		+ "\r\n달리는속도 : " + puppy.getSpeed());
	return displayPuppy;
}

CString Chihuahua::personality() {
	return _T("");
}

CString Chihuahua::characteristic() {
	return _T("\r\n\r\n개의 품종. 치와와(Chihuahua)는 개의 품종 중 가장 작은 품종으로 유명하다.\r\n키는 13~22cm, 평균 체중은 1.8~2.7kg이 정상 체중이다.\r\n견종 중 몸집이 가장 큰 그레이트 데인에 비하면 20분의 1밖에 안 되는 셈이다.\r\n귀는 크고 쫑긋하며, 눈은 크고 약간 볼록하게 보인다.\r\n털빛깔은 붉은색, 검은색, 담황색, 얼룩무늬 등 여러 가지가 있다.\r\n원래 털이 매끈매끈한 단모종이다.\r\n장모종도 있는데, 비교적 근래에 포메라니안 등과 교배하면서 생겨나게 되었다.");
}
