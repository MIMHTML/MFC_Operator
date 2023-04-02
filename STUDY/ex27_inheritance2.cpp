#include "ex27_inheritance2.h"

int main() {
	Car car;

	car.setModel("E-Class");
	car.setBrand("Benz");
	car.setColor("black");
	car.setPrice(8000000);

	car.displayColor();
	car.displayPrice();

}
