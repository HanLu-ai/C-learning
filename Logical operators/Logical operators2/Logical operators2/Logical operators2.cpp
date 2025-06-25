#include <iostream>
using namespace std;
int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// 与
	int a = 10;
	int b = 10;
	cout << (a && b) << endl; // 输出 1 (true)

	a = 10;
	b = 0;
	cout << (a && b) << endl; // 输出 0 (false)

	a = 0;
	b = 0;
	cout << (a && b) << endl; // 输出 0 (false)

	system("pause");
	return 0;
 }