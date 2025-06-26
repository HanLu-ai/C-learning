// main函数文件
#include "swap.h"

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	/* 作用：让代码结构更加清晰
	   函数分文件编写一般有4个步骤
	   1.创建后缀名为.h的头文件
	   2.创建后缀名为.cpp的源文件
	   3.在头文件中写函数的声明
	   3.在源文件中写函数的定义 */
	int a = 100;
	int b = 200;
	swap(a, b);

	system("pause");
	return 0;
}