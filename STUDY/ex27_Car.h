#pragma once
#include "ex27_Machine.h"

class Car : public Machine
{
private:
	std::string tier;

public:
	Car();
	~Car();

	void setTier(std::string tier) { this->tier = tier; }
	std::string getTier() const { return tier; }

	void mcStart();
	void mcUse();
	void mcOff();
	void displaySpec();
	
	void tierLife();


};
