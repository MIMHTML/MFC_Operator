#pragma once
#include "SmallPuppy.h"


#ifndef YORKSHIRETERRIER
#define YORKSHIRETERRIER
#endif


class YorkshireTerrier : public SmallPuppy
{
public:
	YorkshireTerrier();
	~YorkshireTerrier();

	CString displayPuppy();
	CString characteristic();
	CString howlSound();
	CString runningSpeed();

}; // class YorkshireTerrier : public SmallPuppy