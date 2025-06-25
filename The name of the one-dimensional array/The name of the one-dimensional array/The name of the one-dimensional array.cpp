#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	/* 一维数组名称的用途：
	   1.可以统计整个数组在内存中的长度
	   2.可以获取数组在内存中的首地址 */

	// 数组名用途
	// 1.可以获取整个数组占用内存空间大小
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	cout << "整个数组所占内存空间为：" << sizeof(arr) << " 字节" << endl;
	cout << "每个元素所占内存空间为：" << sizeof(arr[0]) << " 字节" << endl;
	cout << "数组元素个数为：" << sizeof(arr) / sizeof(arr[0]) << "个" << endl;

	// 2.可以获取数组的首地址
	cout << "数组首地址为：" << (int)arr << endl;
	cout << "数组中第一个元素地址为：" << (int)&arr[0] << endl;
	cout << "数组中第二个元素地址为：" << (int)&arr[1] << endl;

	// arr = 100; // 错误：数组名是常量，因此不可以赋值

	// 注意：数组名是常量，不可以赋值
	// 总结1：直接打印数组名，可以查看数组所占内存的首地址
	// 总结2：对数组名进行sizeof，可以获取整个数组占内存空间的大小

	system("pause");
	return 0;
}