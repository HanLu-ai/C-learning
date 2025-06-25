#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	int a = 10;
	int b = 20;

	cout << (a == b) << endl; // 0
	cout << (a != b) << endl; // 1
	cout << (a < b) << endl;  // 1
	cout << (a > b) << endl;  // 0
	cout << (a <= b) << endl; // 1
	cout << (a >= b) << endl; // 0

	// 注意：C和C++语言的比较运算中，==“真”值为1，“假”值为0。

	system("pause"); // Wait for user input before closing
	return 0;
}