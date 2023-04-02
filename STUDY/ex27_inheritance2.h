#pragma once
#pragma once
#include <iostream>
#include <string>
#include <vector>

#ifndef INHERITANCE_EXAM
#define	INHERITANCE_EXAM

class Car
{
private:
	std::string brand;
	std::string model;
	std::string color;
	int price;

public:


	// getter, setter
	void setBrand(std::string brand) { this->brand = brand; }
	std::string getBrand() const { return brand; }

	void setModel(std::string model) { this->model = model; }
	std::string getModel() const { return model; }

	void setColor(std::string color) { this->color = color; }
	std::string getColor() const { return color; }

	void setPrice(int price) { this->price = price; }
	int getPrice() const { return price; }

	// function
	void start() {
		std::cout << "start the " << model << "(" << brand << ")" << std::endl;
	}

	void displayColor() {
		std::cout << model << "(" << brand << ")" << " color is " << color << std::endl;
	}

	void displayPrice() {
		std::cout << model << "(" << brand << ")" << " price is " << price << " won" << std::endl;
	}




}; // class Car



class Computer : public Car
{
private:
	std::string ram;
	std::string hdd;

public:
	void setRam(std::string ram) { this->ram = ram; }
	std::string getRam() const { return ram; }

	void setHdd(std::string hdd) { this->hdd = hdd; }
	std::string getHdd() const { return hdd; }

}; // class Computer : public Car



#endif // #ifndef INHERITANCE_EXAM

