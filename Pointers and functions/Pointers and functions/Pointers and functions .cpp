#include "Pointers and functions.h"
// ֵ����
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// ��ַ����
void swap2(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}