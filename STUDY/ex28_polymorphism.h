#pragma once

#include <iostream>
#include <string>
#include <vector>

class Exam
{
private:
	std::string ex;

public:
	Exam();
	virtual void eexam(){}

	~Exam();


};

Exam::Exam()
{
}

Exam::~Exam()
{
}
