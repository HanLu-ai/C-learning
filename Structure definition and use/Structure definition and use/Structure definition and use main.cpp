#include "Structure definition and use.h"

/* �﷨��struct �ṹ���� { �ṹ���Ա�б� };
   ͨ���ṹ�崴�������ķ�ʽ�����֣�
   struct �ṹ���� ������
   struct �ṹ���� ������ = { ��Ա1ֵ,��Ա2ֵ ������}
   ����ṹ��ʱ˳�㴴������ */

struct student {
	// ��Ա�б�
	string name; // ����
	int age; // ����
	int score; // ����
} stu3; // �ṹ�����������ʽ3

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;
	// �ṹ�����������ʽ1
	struct student stu1; // struct �ؼ��ʿ���ʡ��

	stu1.name = "����";
	stu1.age = 18;
	stu1.score = 100;

	cout << "������" << stu1.name << "���䣺" << stu1.age << "������" << stu1.score << endl;

	// �ṹ�����������ʽ2
	struct student stu2 = { "����",19,60 };

	cout << "������" << stu2.name << "���䣺" << stu2.age << "������" << stu2.score << endl;

	stu3.name = "����";
	stu3.age = 18;
	stu3.score = 80;

	cout << "������" << stu3.name << "���䣺" << stu3.age << "������" << stu3.score << endl;

	// �ܽ�1������ṹ��ʱ�Ĺؼ�����struct������ʡ��
	// �ܽ�2�������ṹ�����ʱ���ؼ���struct����ʡ��
	// �ܽ�3���ṹ��������ò����� ''.''  ���ʳ�Ա

	system("pause");
	return 0;
}