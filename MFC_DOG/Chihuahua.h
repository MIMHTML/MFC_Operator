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

	Chihuahua setPuppy();
	CString displayPuppy();
	CString personality();
	CString characteristic();

}; // class Chihuahua : public SmallPuppy
