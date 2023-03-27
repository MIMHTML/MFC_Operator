#include "ex21_struct.h"


void display(MyStruct& temp) {
	std::cout << "이름 : " << temp.name << std::endl;
	std::cout << "나이 : " << temp.age << std::endl;
}