#include <iostream>
#include <vector>

int main() {

	std::vector<int> a;

	std::cout << a.size() << std::endl;
	std::cout << &a << std::endl;

	for (int i = 0; i < 10; i++) {
		a.push_back(i);

		std::cout << "a[" << i << "] : " << a[i] << std::endl;
		std::cout << "a[" << i << "]ÀÇ ÁÖ¼Ò : " << &a[i] << std::endl;
	}


	std::cout << a.size() << std::endl;

		
		
	return 0;
}
