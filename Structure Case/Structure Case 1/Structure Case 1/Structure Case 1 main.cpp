#include "Structure Case 1.h"

/* ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ� */

int main() {

	cout << "��ӭʹ�����繤���ҽ̳�" << endl;

	srand((unsigned int)time(NULL)); //��������� ͷ�ļ� #include <ctime>

	Teacher tArray[3]; //��ʦ����

	int len = sizeof(tArray) / sizeof(Teacher);

	allocateSpace(tArray, len); //��������

	printTeachers(tArray, len); //��ӡ����

	system("pause");

	return 0;
}