#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// 1.�鿴��ά������ռ�ڴ�ռ�
	// 2.��ȡ��ά�����׵�ַ

	// ��ά��������
	int arr[2][3] = { { 1,2,3 } , { 4,5,6 } };

	cout << "��ά�����С��" << sizeof(arr) << endl;
	cout << "��ά����һ�д�С��" << sizeof(arr[0]) << endl;
	cout << "��ά����Ԫ�ش�С��" << sizeof(arr[0][0]) << endl;
	cout << "��ά����������" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "��ά����������" << sizeof(arr) / sizeof(arr[0][0]) << endl;

	// ��ַ
	cout << "��ά�����׵�ַ��" << arr << endl;
	cout << "��ά�����һ�е�ַ��" << arr[0] << endl;
	cout << "��ά����ڶ��е�ַ��" << arr[1] << endl;
	cout << "��ά�����һ��Ԫ�ص�ַ��" << &arr[0][0] << endl;
	cout << "��ά����ڶ���Ԫ�ص�ַ��" << &arr[0][1] << endl;

	// �ܽ�1����ά�������������������׵�ַ
	// �ܽ�2����ά��������һ��ָ��һά�����ָ��
	// �ܽ�2���Զ�ά����������sizeofʱ�����Ի�ȡ������ά����ռ�õ��ڴ�ռ��С

	system("pause");
	return 0;
}