#include "Struct pointers.h"

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// ���ã�ͨ��ָ����ʽṹ���еĳ�Ա
	// ���ò����� `-> `����ͨ���ṹ��ָ����ʽṹ������
	struct student stu = { "����",18,100, };
	struct student* p = &stu;
	p->score = 80; // ָ��ͨ��->���������Է��ʳ�Ա
	cout << "������" << p->name << "���䣺" << p->age << "������" << p->score << endl;
	// �ܽ᣺�ṹ��ָ�����ͨ�� -> ������ �����ʽṹ���еĳ�Ա

	system("pause");
	return 0;
}