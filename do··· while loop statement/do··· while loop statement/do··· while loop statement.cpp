#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// do{ѭ�����} while(ѭ������);

	// ��while����������==do...while����ִ��һ��ѭ�����==�����ж�ѭ������
	int num = 0;

	do {
		cout << num << endl;
		num++;
	} while (num < 10);

	system("pause");
	return 0;
}