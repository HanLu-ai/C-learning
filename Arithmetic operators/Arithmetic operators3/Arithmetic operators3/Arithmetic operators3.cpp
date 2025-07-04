#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	//递增
	//前置递增
	int b = 10;
	++b;
	cout << b << endl; // 输出11

	//后置递增
	int a = 10;
	a++; //等价于a = a+1
	cout << a << endl; // 输出11

	//区别
	//前置递增先对变量进行++，再计算表达式
	int a2 = 10;
	int b2 = ++a2 * 10;
	cout << b2 << endl;

	//后置递增先计算表达式，再对变量进行++
	int a3 = 10;
	int b3 = a3++ * 10;
	cout << b3 << endl;

	system("pause");
	return 0;
}