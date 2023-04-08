#pragma once
#include "Puppy.h"

#ifndef SMALL_PUPPY
#define SMALL_PUPPY           
#endif

class SmallPuppy : public Puppy{
public:
	SmallPuppy();
	virtual ~SmallPuppy();

	virtual CString personality()=0;
	virtual CString characteristic()=0;
	virtual CString displayPuppy()=0;

}; // class SmallPuppy : public Puppy
