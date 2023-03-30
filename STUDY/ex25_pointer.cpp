#include <iostream>


void modify(int*);

int main() {

	int* a = new int(10);
	int* b = new int(*a);
	int* c = a;

	std::cout << "a : " << a << std::endl;	// 2,053,543,870,880
	std::cout << "a : " << *a << std::endl;

	std::cout << "b : " << b << std::endl;	// 2,053,543,869,728
	std::cout << "b : " << *b << std::endl;

	std::cout << "c : " << c << std::endl;	// 2,053,543,870,880
	std::cout << "c : " << *c << std::endl;

	*a = 20;
	std::cout << "a값 변환 후 " << std::endl;

	std::cout << "a : " << a << std::endl;	// 2,053,543,870,880
	std::cout << "a : " << *a << std::endl;

	std::cout << "b : " << b << std::endl;	// 2,053,543,869,728
	std::cout << "b : " << *b << std::endl;

	std::cout << "c : " << c << std::endl;	// 2,053,543,870,880
	std::cout << "c : " << *c << std::endl;

	int aa[20];
	int aa_len = sizeof(aa) / sizeof(aa[0]);
	std::cout << aa_len << std::endl;

	for (int i = 0; i < aa_len; i++) {
		aa[i] = i;
	}

	for (int i = 0; i < aa_len; i++) {
		std::cout << "aa[" << i << "] : " << &aa[i] << std::endl;
	}

	int x = 5;
	int* ptr = &x;
	
	std::cout << ptr << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << &x << std::endl;
	std::cout << x << std::endl;
	modify(ptr);
	std::cout << ptr << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << &x << std::endl;
	std::cout << x << std::endl;

	return 0;
}

void modify(int* ptr) {
	*ptr = 10;
}

/*
	포인터는 C와 C++ 같은 프로그래밍 언어에서 사용되는 중요한 개념 중 하나다.
	포인터는 메모리의 주소를 저장하고 가리키는 변수로, 포인터를 사용하여 메모리 주소를
	다룰 수 있습니다. 이를 활용하여 다양한 알고리즘을 구현할 수 있습니다.

	1. 동적 메모리 할당

	동적 메모리 할당은 포인터를 사용하여 구현할 수 있는 대표적인 알고리즘 입니다.
	포인터를 사용하여 메모리를 할당하고, 해제하는 함수인
	malloc(), calloc(), realloc(), free() 등을
	사용하여 메모리를 동적으로 할당 및 해제할 수 있습니다.

	2. 링크드 리스트

	링크드 리스트는 포인터를 사용하여 구현되는 자료구조 중 하나입니다.
	링크드 리스트는 각 노드가 데이터와 다음 노드를 가리키는 포인터로 구성되며,
	이를 연결하여 리스트를 구성합니다. 포인터를 사용하여 다음 노드를 가리키므로,
	삽입, 삭제, 탐색 등의 연산이 쉽게 수행됩니다.

	3. 이중 포인터

	이중 포인터는 포인터 변수의 주소를 가리키는 포인터입니다.
	이중 포인터를 사용하여 다차원 배열을 구현하거나, 포인터의 동적 할당 및 해제를 수행하는
	등의 작업을 수행할 수 있습니다.

	4. 트리

	트리는 링크드 리스트와 마찬가지로 포인터를 사용하여 구현되는 자료구조 중 하나입니다.
	트리는 노드들이 계층적으로 구성되어 있으며, 각 노드는 데이터와 자식 노드를 가리키는
	포인터로 구성됩니다. 이를 활용하여 트리 구조의 탐색, 삽입, 삭제 등의 작업을 수행할 수 있습니다.

	5. 그래프

	그래프는 정점과 간선으로 구성된 자료구조로, 포인터를 사용하여 구현할 수 있습니다.
	각 정점은 데이터와 연결된 간선을 가리키는 포인터로 구성되며, 이를 연결하여 그래프를 구성합니다.
	포인터를 사용하여 그래프의 탐색, 최단 경로, 최소 스패닝 트리 등의 작업을 수행할 수 있습니다.
*/

