#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	int num = 100;
	int a, b, c = 0;

	do {
		a = num / 100;
		b = (num % 100) / 10;
		c = num % 10;

		if (a * a * a + b* b * b + c * c * c == num) {
			cout << num << endl;
		}
		num++;
	} while (num < 1000);

	system("pause");
	return 0;
}