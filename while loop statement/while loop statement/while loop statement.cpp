#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// while(循环条件){循环语句}

	int num = 0;
	while (num < 10) {
		cout << "num = " << num << endl;
		num++; // 每次循环num自增1
	}

	//在执行循环语句时候，程序必须提供跳出循环的出口，否则出现死循环

	system("pause");
	return 0;
}