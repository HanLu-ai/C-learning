#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// ѡ��ṹ-����if���
	// ����һ�������������������600�֣���Ϊ����һ����ѧ��������Ļ�ϴ�ӡ
	int score = 0;
	cout << "������һ��������:" << endl;
	cin >> score;
	cout << "������ķ���Ϊ��" << score << endl;

	// if���
	// ע�������if�ж������棬��Ҫ�ӷֺ�
	if (score > 600) {
		cout << "�ҿ�����һ����ѧ������" << endl;
	}

	system("pause");
	return 0;
}