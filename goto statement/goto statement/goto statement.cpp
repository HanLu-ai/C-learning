#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// ���ã�������������ת���

	// �﷨��goto ���;

	// ���ͣ������ǵ����ƴ��ڣ�ִ�е�goto���ʱ������ת����ǵ�λ��

	cout << "1" << endl;

	goto FLAG;

	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;

	FLAG:
	cout << "5" << endl;

	// ע�⣺�ڳ����в�����ʹ��goto��䣬������ɳ������̻���

	system("pause");
	return 0;
}