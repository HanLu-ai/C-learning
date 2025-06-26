#include "Pointers and functions.h"
// 值传递
void swap1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

// 地址传递
void swap2(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}