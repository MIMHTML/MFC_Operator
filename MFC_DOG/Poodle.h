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

	Poodle setPuppy();
	CString displayPuppy();
	CString personality();
	CString characteristic();

}; // class Poodle : public SmallPuppy
