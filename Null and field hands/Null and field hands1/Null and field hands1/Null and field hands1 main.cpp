#include "Null and field hands1.h"

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// 空指针：指针变量指向内存中编号为0的空间
	// 用途：初始化指针变量
	// 注意：空指针指向的内存是不可以访问的

	// 空指针
	// 指针变量p指向内存地址编号为0的空间
	int * p = NULL;

	// 访问空指针报错
	// 内存编号0~255为系统占用内存，不允许用户访问
	// cout << *p << endl;

	system("pause");
	return 0;
}