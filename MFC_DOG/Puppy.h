#pragma once


#ifndef PUPPY
#define PUPPY           
#endif

#include "pch.h"
#include <iostream>
#include <string>
#include <vector>


class Puppy
{
private:
	CString breed;
	CString color;
	CString size;
	CString howl;
	CString speed;

public:

	Puppy();
	virtual ~Puppy();

	void setBreed(CString breed) { this->breed = breed; }
	CString getBreed() const { return breed; }
	
	void setColor(CString color) { this->color = color; }
	CString getColor() const { return color; }

	void setSize(CString size) { this->size = size; }
	CString getSize() const { return size; }

	void setHowl(CString howl) { this->howl = howl; }
	CString getHowl() const { return howl; }

	void setSpeed(CString speed) { this->speed = speed; }
	CString getSpeed() const { return speed; }

	virtual CString personality();
	virtual CString characteristic();

};	// class Puppy
