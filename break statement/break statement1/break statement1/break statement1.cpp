#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	//���ã���������ѡ��ṹ����ѭ���ṹ

	/*breakʹ�õ�ʱ����
	  ������switch��������У���������ֹcase������switch
	  ������ѭ������У�������������ǰ��ѭ�����
	  ������Ƕ��ѭ���У�����������ڲ�ѭ�����*/

	  // 1.��switch�����ʹ��break
	cout << "��ѡ������ս�������Ѷȣ�" << endl;
	cout << "1.��ͨ" << endl;
	cout << "2.�е�" << endl;
	cout << "3.����" << endl;

	int num = 0;
	cin >> num;

	switch (num) {
	case 1:
		cout << "��ѡ������ͨ�Ѷ�" << endl;
		break; // ����switch���
	case 2:
		cout << "��ѡ�����е��Ѷ�" << endl;
		break; // ����switch���
	case 3:
		cout << "��ѡ���������Ѷ�" << endl;
		break; // ����switch���
	}

	system("pause");
	return 0;
}