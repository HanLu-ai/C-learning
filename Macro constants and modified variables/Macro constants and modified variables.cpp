//1.宏变量
#include <iostream>
#define day 7
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	cout << "一周里总共有" << day << "天" << endl;
	//day = 8; // 报错：宏变量不能被修改

	//2.const修饰变量
	const int month = 12;
	cout << "一年里总共有" << month << "个月份" << endl;
	//month = 24; // 报错：const修饰的变量不能被修改

	system("pause");
	return 0;
}