#include "Pointers and functions.h"

int main() {
	int a = 10;
	int b = 20;

	swap1(a, b); // 值传递不会改变实参
	swap2(&a, &b); // 地址传递会改变实参

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 总结：如果不想修改实参，就用值传递，如果想修改实参，就用地址传递

	system("pause");
	return 0;
}