#include <iostream>
using namespace std;

// ��νֵ���ݣ����Ǻ�������ʱʵ�ν���ֵ������β�
// ֵ����ʱ������βη�����������Ӱ��ʵ��

// void �� C++ �е�һ�ַ���ֵ���ͣ����ں������������У���ʾ�ú����������κ�ֵ��
// ������ֻ��Ҫ���ĳЩ�����������ӡ���޸ı�����ִ�м��㣩��������Ҫ������߷��ؽ��ʱ��ʹ�� void��

void swap(int num1, int num2) {
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	// return; // ����������ʱ�򣬲���Ҫ����ֵ�����Բ�дreturn
}

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	int a = 10;
	int b = 20;

	swap(a, b); // ����swap����������a��b��ֵ
	cout << "main�е� a = " << a << endl;
	cout << "main�е� b = " << b << endl;

	// �ܽ᣺ֵ����ʱ���β������β���ʵ�ε�

	system("pause"); // ��ͣ���򣬵ȴ��û�����
	return 0; // ����0��ʾ������������
}