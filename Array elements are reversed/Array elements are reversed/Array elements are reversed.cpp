#include <iostream>
using namespace std;

int main() {
    cout << "��ӭʹ�����繤���ҽ̳�" << endl;

    // ������һ��5��Ԫ�ص����飬���ҽ�Ԫ������.
    
    // ��������ʼ������
    int arr[5] = { 1, 3, 2, 5, 4 };

    // ��ӡԭʼ����
    cout << "ԭʼ����: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // ��������
    for (int i = 0; i < 5 / 2; i++) {
        // ������βԪ��
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    // ��ӡ���ú������
    cout << "���ú�����: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

	system("pause");
    return 0;
}