#include "The struct is used as a function parameter.h"

/* ���ã����ṹ����Ϊ���������д���
   ���ݷ�ʽ�����֣�
   ֵ����
   ��ַ����*/

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	student stu = { "����",18,100 };
	//ֵ����
	printStudent(stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;

	cout << endl;

	//��ַ����
	printStudent2(&stu);
	cout << "�������� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
	// �ܽ᣺��������޸��������е����ݣ���ֵ���ݣ���֮�õ�ַ����

	system("pause");
	return 0;
}