#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// 1.查看二维数组所占内存空间
	// 2.获取二维数组首地址

	// 二维数组组名
	int arr[2][3] = { { 1,2,3 } , { 4,5,6 } };

	cout << "二维数组大小：" << sizeof(arr) << endl;
	cout << "二维数组一行大小：" << sizeof(arr[0]) << endl;
	cout << "二维数组元素大小：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组行数：" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "二维数组列数：" << sizeof(arr) / sizeof(arr[0][0]) << endl;

	// 地址
	cout << "二维数组首地址：" << arr << endl;
	cout << "二维数组第一行地址：" << arr[0] << endl;
	cout << "二维数组第二行地址：" << arr[1] << endl;
	cout << "二维数组第一个元素地址：" << &arr[0][0] << endl;
	cout << "二维数组第二个元素地址：" << &arr[0][1] << endl;

	// 总结1：二维数组名就是这个数组的首地址
	// 总结2：二维数组名是一个指向一维数组的指针
	// 总结2：对二维数组名进行sizeof时，可以获取整个二维数组占用的内存空间大小

	system("pause");
	return 0;
}