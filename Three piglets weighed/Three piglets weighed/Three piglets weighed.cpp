#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	int a, b, c = 0;
	cout << "请输入A猪的体重：";
	cin >> a;

	cout << "请输入B猪的体重：";
	cin >> b;

	cout << "请输入C猪的体重：";
	cin >> c;

	if (a > b && a > c) {
		cout << "A猪是最重的猪，体重为：" << a << endl;
	}

	else if (b > a && b > c) {
		cout << "B猪是最重的猪，体重为：" << b << endl;
	}

	else {
		cout << "C猪是最重的猪，体重为：" << c << endl;
	}

	system("pause");
	return 0;
}