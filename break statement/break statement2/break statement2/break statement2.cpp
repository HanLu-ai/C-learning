#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// 2.在循环语句中用break
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break; // 当i等于5时，跳出循环
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}