#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	cout << "short类型所占内存空间为：" << sizeof(short) << endl;
	cout << "int类型所占内存空间为：" << sizeof(int) << endl;
	cout << "long类型所占内存空间为：" << sizeof(long) << endl;
	cout << "long long类型所占内存空间为：" << sizeof(long long) << endl;
	//整型结论：==short<int<=long<=long long==
	system("pause");
	return 0;
}