#include "ex21_struct.h"
#include "ex21_new.h"

/*
	��� ����
	1. �Լ� ����
	2. #define�̳� const�� ����ϴ� ��ȣ ���
	3. ����ü ����
	4. Ŭ���� ����
	5. ���ø� ����
	6. �ζ��� �Լ�
*/


// ��� ������ ���� ���Ͽ� ���Խ�ų ����,
// �ݵ�� �� �� ���� ���Խ��Ѿ� �Ѵ�.

int main() {
	MyStruct mikim = {
		"Mikim",
		33
	};

	display(mikim);
	return 0;
}

