#include <iostream>
using namespace std;
	
// ���ã����߱������������Ƽ���ε��ú�����������ʵ��������Ե�������
// �������������Զ�Σ����Ǻ����Ķ���ֻ����һ��
// ����
int max(int a, int b);
int max(int a, int b);

// ����
int max(int a, int b) {
		return a > b ? a : b;
}

int main() {
	cout << "��ӭ���繤���ҽ̳�" << endl;

	int a = 100;
	int b = 200;
	cout << max(a, b) << endl;

	system("pause");
	return 0;
}