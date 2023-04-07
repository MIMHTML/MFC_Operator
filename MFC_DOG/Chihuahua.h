#pragma once
#include "SmallPuppy.h"

#ifndef CHIHUAHUA
#define CHIHUAHUA
#endif


class Chihuahua : public SmallPuppy
{
public:
	Chihuahua();
	~Chihuahua();

	CString displayPuppy();
	CString characteristic();
	CString howlSound();
	CString runningSpeed();
private:

}; // class Chihuahua : public SmallPuppy
