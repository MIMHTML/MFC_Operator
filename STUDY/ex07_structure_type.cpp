#include <iostream>


// 구조체 : 다른 데이터형이 허용되는 데이터의 집합
// cf) 배열 : 같은 데이터형의 집합
int main()
{
	// 축구선수
	struct MyStruct
	{
		std::string name;
		std::string position;
		int height;
		int weight;
	} C;

	MyStruct A;
	A.name = "Son";
	A.position = "Striker";
	A.height = 183;
	A.weight = 77;

	MyStruct B = {
		"Kim",
		"Striker",
		178,
		68
	};
	
	std::cout << A.name << ", " << B.name << std::endl;

	C.name = "Lee";
	
	std::cout << C.name << std::endl;
	
	MyStruct D[2] = {
		{"A", "A", 1, 1},
		{"B", "B", 2, 2}
	};

	std::cout << D[0].name;
	std::cout << D[1].name;


	return 0;
}