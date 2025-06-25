#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// do{循环语句} while(循环条件);

	// 与while的区别在于==do...while会先执行一次循环语句==，再判断循环条件
	int num = 0;

	do {
		cout << num << endl;
		num++;
	} while (num < 10);

	system("pause");
	return 0;
}