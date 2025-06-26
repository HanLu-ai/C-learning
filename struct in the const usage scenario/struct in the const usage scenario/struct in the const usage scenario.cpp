#include "struct in the const usage scenario.h"

int main() {
	cout << "欢迎使用御风工作室教程" << endl;

	student stu = { "张三",18,100 };

	printStudent(&stu);

	system("pause");

	return 0;
}