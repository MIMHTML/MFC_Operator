#pragma once
#include "SmallPuppy.h"

#ifndef POODLE
#define POODLE
#endif

class Poodle : public SmallPuppy
{
public:
	Poodle();
	~Poodle();

	CString displayPuppy();
	CString characteristic();
	CString howlSound();
	CString runningSpeed();

}; // class Poodle : public SmallPuppy
