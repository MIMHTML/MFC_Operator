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
	
	Maltese setPuppy();
	CString displayPuppy();
	CString personality();
	CString characteristic();

}; // class Maltese : public SmallPuppy


