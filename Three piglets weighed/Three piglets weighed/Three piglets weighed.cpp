#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	int a, b, c = 0;
	cout << "������A������أ�";
	cin >> a;

	cout << "������B������أ�";
	cin >> b;

	cout << "������C������أ�";
	cin >> c;

	if (a > b && a > c) {
		cout << "A�������ص�������Ϊ��" << a << endl;
	}

	else if (b > a && b > c) {
		cout << "B�������ص�������Ϊ��" << b << endl;
	}

	else {
		cout << "C�������ص�������Ϊ��" << c << endl;
	}

	system("pause");
	return 0;
}