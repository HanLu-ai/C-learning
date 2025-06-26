#include "Null and field hands2.h"

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// 野指针：指针变量指向非法的内存空间
	// 指针变量p指向内存地址编号为0x1100的空间
	int * p = (int*)0x1100;

	// 访问野指针报错
	// cout << *p << endl;

	// 总结：空指针和野指针都不是我们申请的空间，因此不要访问。

	system("pause");
	return 0;
}