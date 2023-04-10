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

	YorkshireTerrier setPuppy();
	CString displayPuppy();
	CString personality();
	CString characteristic();

}; // class YorkshireTerrier : public SmallPuppy
