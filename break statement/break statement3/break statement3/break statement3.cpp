#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// ��Ƕ��ѭ�������ʹ��break���˳��ڲ�ѭ��
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