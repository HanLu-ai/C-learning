#include <iostream>

using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	/*作用：通过三目运算符实现简单的判断
	
	  语法：表达式1 ? 表达式2 : 表达式3

	  解释：
	  如果表达式1的值为真，执行表达式2，并返回表达式2的结果
	  如果表达式1的值为假，执行表达式3，并返回表达式3的结果*/

	int a = 10;
	int b = 20;
	int c = 0;

	c = a > b ? a : b; // 如果a大于b，则c等于a，否则c等于b
	cout << "c= " << c << endl;

	// C++中三目运算符返回的是变量，可以继续赋值

	(a > b ? a : b) = 100; // 如果a大于b，则将100赋值给a，否则赋值给b

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;

	system("pause"); // 暂停程序，等待用户输入
	return 0;
}