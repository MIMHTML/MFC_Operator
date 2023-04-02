#include <iostream>
#include <vector>
#include <string>

// Animal
class Animal
{
protected:
	std::string name;
	int age;
public:
	Animal(std::string name, int age) {
		this->name = name;
		this->age = age;
	}

	void eat() {
		std::cout << name << " is eating." << std::endl;
	}

	void sleep() {
		std::cout << name << " is sleeping." << std::endl;
	}
}; // class Animal

// Bird (public Animal)
class Bird : public Animal
{
private:
	std::string featherColor;
public:
	Bird(std::string name, int age, std::string featherColor) : Animal(name, age) {
		this->featherColor = featherColor;
	}

	void fly() {
		std::cout << name << " is flying." << std::endl;
	}

	void displayFeatherColor() {
		std::cout << name << "'s feather color is " << featherColor << "." << std::endl;
	}

}; // class Bird : public Animal

int main() {

	Animal animal("choko", 5);
	animal.eat();
	animal.sleep();

	std::cout << std::endl;

	Bird bird("jack", 2, "red");
	bird.eat();
	bird.sleep();
	bird.fly();
	bird.displayFeatherColor();

	std::cout << std::endl;





	return 0;
}

