#pragma once
#include "SmallPuppy.h"


#ifndef MALTESE
#define MALTESE
#endif


class Maltese : public SmallPuppy
{
public:
	Maltese();
	~Maltese();

	CString displayPuppy();
	CString characteristic();
	CString howlSound();
	CString runningSpeed();
private:

}; // class Maltese : public SmallPuppy


