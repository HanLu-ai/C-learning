#include "StructsNested structs.h"

int main() {
	cout << "欢迎使用御风工作室教程" << endl;

	struct teacher t1;
	t1.id = 10000;
	t1.name = "老王";
	t1.age = 40;

	t1.stu.name = "张三";
	t1.stu.age = 18;
	t1.stu.score = 100;

	cout << "教师 职工编号：" << t1.id << "姓名：" << t1.name << "年龄：" << t1.age << endl;
	cout << "辅导学员 姓名：" << t1.stu.name << "年龄：" << t1.stu.age << "考试分数：" << t1.stu.score << endl;
	// 总结：在结构体中可以定义另一个结构体作为成员，用来解决实际问题

	system("pause");
	return 0;
}