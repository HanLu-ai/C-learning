#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// 2.��ѭ���������break
	for (int i = 0; i < 10; i++) {
		if (i == 5) {
			break; // ��i����5ʱ������ѭ��
		}
		cout << i << endl;
	}

	system("pause");
	return 0;
}