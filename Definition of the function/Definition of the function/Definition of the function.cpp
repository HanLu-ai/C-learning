#include <iostream>
using namespace std;

int add(int num1, int num2) {
	int sum = num1 + num2; // 函数体语句
	return sum; // 返回值类型和返回表达式
}


int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	/* 函数的定义：
	   函数的定义一般主要有5个步骤
	   1.返回值类型：一个函数可以返回一个值
	   2.函数名：给函数起个名称
	   3.参数表列：使用该函数时，传入的数据
	   4.函数体语句：花括号内的代码，函数内需要执行的语句
	   5.return表达式：和返回值类型挂钩，函数执行完后，返回相应的数值 */

	/* 返回值类型 函数名 (参数列表) {
	   函数体语句
	   return表达式
	   } */

	int num1, num2; // 定义两个整型变量
	cout << "请输入一个数：";
	cin >> num1; // 输入第一个数
	cout << "请输入第二个数：";
	cin >> num2; // 输入第二个数

	int result = add(num1, num2); // 调用函数，传入两个参数
	cout << "两数之和为：" << result << endl; // 输出结果

	system("pause"); // 暂停程序，等待用户输入
	return 0; // 返回值类型
}