#pragma once

#ifndef PUPPY
#define PUPPY           
#endif

#include <iostream>
#include <string>
#include <vector>

class Puppy
{
private:
	std::string breed;
	std::string color;
	std::string size;
	std::string howl;
	std::string speed;

public:
	void setBreed(std::string breed) { this->breed = breed; }
	std::string getBreed() const { return breed; }
	
	void setColor(std::string color) { this->color = color; }
	std::string getColor() const { return color; }

	void setSize(std::string size) { this->size = size; }
	std::string getSize() const { return size; }

	void setHowl(std::string howl) { this->howl = howl; }
	std::string getHowl() const { return howl; }

	void setSpeed(std::string speed) { this->speed = speed; }
	std::string getSpeed() const { return speed; }

	virtual void characteristic();
	virtual void howlSound();
	virtual void runningSpeed();


};
