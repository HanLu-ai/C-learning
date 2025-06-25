#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	//取模
	int a1 = 10;
	int b1 = 3;
	cout << 10 % 3 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << a2 % b2 << endl;
	//cout << a3 % b3 << endl; //取模运算时，除数也不能为0

	//两个小数不能取模
	double d1 = 3.14;
	double d2 = 1.1;
	//cout << d1 % d2 << endl;

	system("pause");
	return 0;
}