#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;

	// ��һ�������м�¼����ֻС������أ��磺int arr[5] = {300,350,200,400,250};�ҳ�����ӡ���ص�С�����ء�

	int arr[5] = { 300,350,200,400,250};

	if (arr[0] > arr[1] && arr[0] > arr[2] && arr[0] > arr[3] && arr[0] > arr[4]) {
		cout << "��һֻ������" << endl;
	} else if (arr[1] > arr[0] && arr[1] > arr[2] && arr[1] > arr[3] && arr[1] > arr[4]) {
		cout << "�ڶ�ֻ������" << endl;
	} else if (arr[2] > arr[0] && arr[2] > arr[1] && arr[2] > arr[3] && arr[2] > arr[4]) {
		cout << "����ֻ������" << endl;
	} else if (arr[3] > arr[0] && arr[3] > arr[1] && arr[3] > arr[2] && arr[3] > arr[4]) {
		cout << "����ֻ������" << endl;
	} else {
		cout << "����ֻ������" << endl;
	}
	
	system("pause");
	return 0;
}