#include <iostream>
using namespace std;

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	/* ���ã�ִ�ж�������֧���
	
	  �﷨��
	  switch(���ʽ) {
	  case ���1��ִ�����;break;
	  case ���2��ִ�����;break;
	  ������
	  default:ִ�����;break;
	  } */

	// �����Ӱ����
	// 10 ~ 9   ����
	// 8 ~ 7    ����
	// 6 ~ 5    һ��
	// 5������  ��Ƭ

	int score = 0;
	cout << "�����Ӱ���" << endl;
	cin >> score;

	switch (score) {
		case 10:
		case 9:
			cout << "����" << endl;
			break;
		case 8:
		case 7:
			cout << "����" << endl;
			break;
		case 6:
		case 5:
			cout << "һ��" << endl;
			break;
		default:
			cout << "��Ƭ" << endl;
			break;
	}
	// ע��1��switch����б��ʽ����ֻ�������ͻ����ַ���
	// ע��2��case����ֻ���ǳ������ʽ�������Ǳ���
	// ע��3��case��������Ƕ�������������֮����ð�ŷָ�
	// ע��4��case�������û��break��䣬�����ᵼ��ִ�е���һ��case
	// ע��5��default������û�У�Ҳ�����ж��
	// �ܽ᣺��if���ȣ����ڶ������ж�ʱ��switch�Ľṹ������ִ��Ч�ʸߣ�ȱ����switch�������ж�����

	system("pause");
	return 0;
}