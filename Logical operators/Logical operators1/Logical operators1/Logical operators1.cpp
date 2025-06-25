#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// 非
	int a = 10;
	cout << !a << endl; // 输出 0，因为 a 非零
	cout << !!a << endl; // 输出 1，因为 !!a 转换为布尔值

	system("pause");
	return 0;
}