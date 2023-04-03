#include "ex27_Machine.h"
#include "ex27_Car.h"

void Machine::displaySpec() { 
	std::cout
		<< "brand: " << brand << " / "
		<< "model: " << model << " / "
		<< "color: " << color << " / "
		<< "price: " << price << " Won" << std::endl;
}

void Machine::mcStart() {
	std::cout << model << "(" << brand << ")" << " start" << std::endl;
}

void Machine::mcUse() {
	std::cout << model << "(" << brand << ")" << " use" << std::endl;
}

void Machine::mcOff() {
	std::cout << model << "(" << brand << ")" << " off" << std::endl;
}

Machine::Machine() { std::cout << "Machine 생성자 호출" << std::endl; }
Machine::~Machine() { std::cout << "Machine 소멸자 호출" << std::endl; }



void Car::displaySpec() {
	std::cout
		<< "brand: " << getBrand() << " / "
		<< "model: " << getModel() << " / "
		<< "color: " << getColor() << " / "
		<< "price: " << getPrice() << " Won / "
		<< "tier: " << tier << std::endl;
}

void Car::mcStart() {
	std::cout << "Car Start [" << getModel() << "]" << std::endl;
}

void Car::mcUse() {
	std::cout << "Car Use [" << getModel() << "]" << std::endl;
}

void Car::mcOff() {
	std::cout << "Car Off [" << getModel() << "]" << std::endl;
}

void Car::tierLife() {
	std::cout << "Tier life: " << tier << std::endl;
}

Car::Car() { std::cout << "Car 생성자 호출" << std::endl; }
Car::~Car() { std::cout << "Car 소멸자 호출" << std::endl; }