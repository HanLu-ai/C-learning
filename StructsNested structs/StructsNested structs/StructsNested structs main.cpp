#include "StructsNested structs.h"

int main() {
	cout << "��ӭʹ�����繤���ҽ̳�" << endl;

	struct teacher t1;
	t1.id = 10000;
	t1.name = "����";
	t1.age = 40;

	t1.stu.name = "����";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "��ʦ ְ����ţ�" << t1.id << "������" << t1.name << "���䣺" << t1.age << endl;
	cout << "����ѧԱ ������" << t1.stu.name << "���䣺" << t1.stu.age << "���Է�����" << t1.stu.score << endl;
	// �ܽ᣺�ڽṹ���п��Զ�����һ���ṹ����Ϊ��Ա���������ʵ������

	system("pause");
	return 0;
}