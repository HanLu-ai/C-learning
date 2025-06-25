#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// 在嵌套循环语句中使用break，退出内层循环
	for (int i = 0; i < 10; i++) {
		for (int j = 0; i < 10; i++) {
			if (j == 5) {
				break;
			}
			cout << "*" << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}