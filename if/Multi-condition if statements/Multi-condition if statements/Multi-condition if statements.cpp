#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	int score;
	cout << "�����뿼�Է�����" << endl;
	cin >> score;

	if (score > 600) {
		cout << "�ҿ�����һ����ѧ" << endl;
	}
	else if (score > 500) {
		cout << "�ҿ����˶�����ѧ" << endl;
	}
	else if (score > 400) {
		cout << "�ҿ�����������ѧ" << endl;
	}
	else {
		cout << "��û�п��ϴ�ѧ" << endl;
	}

	system("pause");
	return 0;
}