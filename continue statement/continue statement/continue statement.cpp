#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	for (int i = 0; i < 100; i++) {
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}