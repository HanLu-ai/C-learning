#include <iostream>
#include <ctime>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// ������������
	srand((unsigned)time(0));

	// 1.ϵͳ���������
	int num = rand() % 100 + 1; // ����1��100֮��������
	
	// 2.��ҽ��в²�
	int val = 0;
	while (1) {
		cout << "��������²�����֣�1-100��: ";
		cin >> val;

		// 3.�жϲ²���
		if (val < num) {
			cout << "��С�ˣ�������²�" << endl;
		} else if (val > num) {
			cout << "�´��ˣ�������²�" << endl;
		} else {
			cout << "��ϲ�㣬�¶��ˣ�" << endl;
			break; // �¶��ˣ��˳�ѭ��
		}
	}

	system("pause"); // ��ͣ���򣬵ȴ��û�����
	return 0; // ����0��ʾ������������
}