#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	int a = 10;
	int b = 20;

	cout << (a == b) << endl; // 0
	cout << (a != b) << endl; // 1
	cout << (a < b) << endl;  // 1
	cout << (a > b) << endl;  // 0
	cout << (a <= b) << endl; // 1
	cout << (a >= b) << endl; // 0

	// ע�⣺C��C++���ԵıȽ������У�==���桱ֵΪ1�����١�ֵΪ0��

	system("pause"); // Wait for user input before closing
	return 0;
}