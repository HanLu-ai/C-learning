#include "Pointers and functions.h"

int main() {
	int a = 10;
	int b = 20;

	swap1(a, b); // ֵ���ݲ���ı�ʵ��
	swap2(&a, &b); // ��ַ���ݻ�ı�ʵ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// �ܽ᣺��������޸�ʵ�Σ�����ֵ���ݣ�������޸�ʵ�Σ����õ�ַ����

	system("pause");
	return 0;
}