#include <iostream>
using namespace std;
int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// ��
	int a = 10;
	int b = 10;
	cout << (a && b) << endl; // ��� 1 (true)

	a = 10;
	b = 0;
	cout << (a && b) << endl; // ��� 0 (false)

	a = 0;
	b = 0;
	cout << (a && b) << endl; // ��� 0 (false)

	system("pause");
	return 0;
 }