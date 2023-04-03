#include "ex27_Machine.h"
#include "ex27_Car.h"

int main() {

	Machine machine;
	Machine* car = new Car();
	Car* pCar = dynamic_cast<Car*>(car);
	
	machine.setBrand("Samsung");
	machine.setModel("Galaxy");
	machine.setColor("black");
	machine.setPrice("2,230,000");

	std::cout << machine.getBrand() << std::endl;
	std::cout << machine.getModel() << std::endl;
	std::cout << machine.getColor() << std::endl;
	std::cout << machine.getPrice() << std::endl;

	machine.displaySpec();
	machine.mcStart();
	machine.mcUse();
	machine.mcOff();

	car->setBrand("test Brand");
	car->setModel("test car Model setting");
	pCar->setTier("ff");
	car->displaySpec();
	pCar->displaySpec();
	std::cout << car->getBrand() << std::endl;
	car->mcStart();

	Car* car2 = new Car();

	car2->setBrand("Mercedes-Benz");
	car2->setModel("E-CLASS");
	car2->setColor("white");
	car2->setPrice("80,000,000");
	car2->setTier("Kumho");

	car2->displaySpec();
	car2->mcStart();
	car2->mcUse();
	car2->mcOff();
	car2->tierLife();
	

	car2->~Car();


	return 0;
}