#pragma once
#include "Puppy.h"

#ifndef SMALL_PUPPY
#define SMALL_PUPPY           
#endif

class SmallPuppy : public Puppy{
public:
	SmallPuppy();
	virtual ~SmallPuppy();

	void setBreed(CString breed) { this->setBreed(breed); }
	CString getBreed() const { return this->getBreed(); }


	virtual CString displayPuppy() = 0;
	virtual CString characteristic() = 0;
	virtual CString howlSound() = 0;
	virtual CString runningSpeed() = 0;
private:

}; // class SmallPuppy : public Puppy
