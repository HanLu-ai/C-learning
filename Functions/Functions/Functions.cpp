#include <iostream>
using namespace std;

//��������
//�����е�num1,num2��Ϊ��ʽ����������β�
int add(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	int a = 10;
	int b = 10;
	//����add����
	int sum = add(a, b);//����ʱ��a��b��Ϊʵ�ʲ��������ʵ��
	cout << "sum = " << sum << endl;

	a = 100;
	b = 100;

	sum = add(a, b);
	cout << "sum = " << sum << endl;

	system("pause");
	return 0;
}