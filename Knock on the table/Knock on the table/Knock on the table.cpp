#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	for (int i = 1; i <= 100; i++) {
		if (i % 7 == 0 || i % 10 == 7 || (i / 10) % 10 == 7) {
			cout << "敲桌子" << endl;
		}
		else {
			cout << i << endl;
		}
	}

	system("pause");
	return 0;
}