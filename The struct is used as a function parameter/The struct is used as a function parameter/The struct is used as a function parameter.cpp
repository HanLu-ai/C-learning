#include "The struct is used as a function parameter.h"

/* 作用：将结构体作为参数向函数中传递
   传递方式有两种：
   值传递
   地址传递*/

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	student stu = { "张三",18,100 };
	//值传递
	printStudent(stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;

	cout << endl;

	//地址传递
	printStudent2(&stu);
	cout << "主函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
	// 总结：如果不想修改主函数中的数据，用值传递，反之用地址传递

	system("pause");
	return 0;
}