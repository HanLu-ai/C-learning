#include <iostream>
using namespace std;

/* �����ĺ�����ʽ��4��
	   1.�޲��޷�
	   2.�в��޷�
	   3.�޲��з�
	   4.�в��з� */

// ����������ʽ
// 1.�޲��޷�
void test1() {
	// void a = 10; // �����Ͳ����Դ�������������޷������ڴ�
	cout << "����test1" << endl;
	// test1(); ��������
}

// 2.�в��޷�
void test2(int a) {
	cout << "����test2" << endl;
	cout << "����a��ֵ��: " << a << endl;
}

// 3.�޲��з�
int test3() {
	cout << "����test3" << endl;
	return 10; // ����һ������
}

// 4.�в��з�
int test4(int a, int b) {
	cout << "����test4" << endl;
	cout << "����a��ֵ��: " << a << ", ����b��ֵ��: " << b << endl;
	return a + b; // �������������ĺ�
}

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	test1(); // �����޲��޷�����
	test2(5); // �����в��޷��������������5
	int result3 = test3(); // �����޲��з������������շ���ֵ
	cout << "test3�ķ���ֵ��: " << result3 << endl; // �������ֵ
	int result4 = test4(3, 7); // �����в��з��������������3��7�������շ���ֵ
	cout << "test4�ķ���ֵ��: " << result4 << endl; // �������ֵ
	
	system("pause"); // ��ͣ���򣬵ȴ��û�����
	return 0; // ����0��ʾ������������
}