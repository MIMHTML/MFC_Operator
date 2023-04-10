#include "Poodle.h"

Poodle::Poodle() {}
Poodle::~Poodle() {}

Poodle puppy;
Poodle Poodle::setPuppy() {
	puppy.setBreed(_T("푸들"));
	puppy.setColor(_T(""));
	puppy.setSize(_T("소형"));
	puppy.setHowl(_T("멍멍"));
	puppy.setSpeed(_T("빠르다"));

	return puppy;
}


CString Poodle::displayPuppy() {
	CString displayPuppy = _T("품종 : " + puppy.getBreed()
		+ "\r\n색깔 : " + puppy.getColor()
		+ "\r\n크기 : " + puppy.getSize()
		+ "\r\n울음소리 : " + puppy.getHowl()
		+ "\r\n달리는속도 : " + puppy.getSpeed());
	return displayPuppy;
}

CString Poodle::personality() {
	return _T("");
}

CString Poodle::characteristic() {
	return _T("\r\n\r\n성격, 크기, 털빠짐, 지능에 이르는 현대 목적견의 요구 조건을 거의 모두\r\n충족 시키기 때문에 매우 선호 되는 반려견이다.\r\n우리나라에서 2번째로 많이 기르는 반려견이다.\r\n1번째는 말티즈.\r\n무엇보다도 큰 특징은 대부분의 개, 고양이와 다르게 푸들은 털이 거의 빠지지 않는다.\r\n때문에 털 날림 문제, 털 알레르기 문제에서 자유로운 편이다.\r\n털 알레르기는 일반적으로 실제 털 자체에 알레르기가 있는 게 아니라\r\n털을 통해 전해지는 각질이나 기타 물질들로 인해 발생되는 증상인데\r\n애초에 털이 덜 날려 그러한 물질을 크게 퍼트리지 않으니\r\n어지간히 예민하지 않은 이상 괜찮은 편이다.\r\n따라서 알레르기 반응이 없는 가족이 털 관리를 해주는 게 가장 좋다.\r\n실제로 유명하고 인기있는 푸들 잡종들도 유전자에서 푸들의 비중이 높을 수록\r\n알레르기 반응이 있는 사람에게도 문제 없다고 평가되는 편.");
}