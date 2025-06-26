#include <iostream>
using namespace std;

// 所谓值传递，就是函数调用时实参将数值传入给形参
// 值传递时，如果形参发生，并不会影响实参

// void 是 C++ 中的一种返回值类型，用在函数声明或定义中，表示该函数不返回任何值。
// 当函数只需要完成某些操作（比如打印、修改变量、执行计算），但不需要向调用者返回结果时，使用 void。

void swap(int num1, int num2) {
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	// return; // 当函数声明时候，不需要返回值，可以不写return
}

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	int a = 10;
	int b = 20;

	swap(a, b); // 调用swap函数，传入a和b的值
	cout << "main中的 a = " << a << endl;
	cout << "main中的 b = " << b << endl;

	// 总结：值传递时，形参是修饰不了实参的

	system("pause"); // 暂停程序，等待用户输入
	return 0; // 返回0表示程序正常结束
}