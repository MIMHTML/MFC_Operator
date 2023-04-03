#pragma once
#include <iostream>
#include <string>
#include <vector>

#ifndef EX27_INHERITANCE3
#define	EX27_INHERITANCE3

class Machine
{
private:
	std::string brand;
	std::string model;
	std::string color;
	std::string price;

public:
	void setBrand(std::string brand) { this->brand = brand; }
	std::string getBrand() const { return brand; }

	void setModel(std::string model) { this->model = model; }
	std::string getModel() const { return model; }

	void setColor(std::string color) { this->color = color; }
	std::string getColor() const { return color; }

	void setPrice(std::string price) { this->price = price; }
	std::string getPrice() const { return price; }

	virtual void mcStart();
	virtual void mcUse();
	virtual void mcOff();
	virtual void displaySpec();

	Machine();
	virtual ~Machine();

};	// class Machine

#endif