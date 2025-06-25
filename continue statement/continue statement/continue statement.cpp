#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}