#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// 赋值运算符
	// =
	int a = 10; // 将10赋值给变量a
	a = 100;
	cout << "a=" << a << endl;

	// +=
	a = 10;
	a += 2; // a = a + 2
	cout << "a = " << a << endl;

	// -=
	a = 10;
	a -= 2; // a = a - 2
	cout << "a = " << a << endl;

	// *=
	a = 10;
	a *= 2; // a = a * 2
	cout << "a = " << a << endl;

	// /=
	a = 10;
	a /= 2; // a = a / 2
	cout << "a = " << a << endl;

	// %=
	a = 10;
	a %= 2; // a = a % 2
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}