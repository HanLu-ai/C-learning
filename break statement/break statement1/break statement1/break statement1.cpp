#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	//作用：用于跳出选择结构或者循环结构

	/*break使用的时机：
	  出现在switch条件语句中，作用是终止case并跳出switch
	  出现在循环语句中，作用是跳出当前的循环语句
	  出现在嵌套循环中，跳出最近的内层循环语句*/

	  // 1.在switch语句中使用break
	cout << "请选择您挑战副本的难度：" << endl;
	cout << "1.普通" << endl;
	cout << "2.中等" << endl;
	cout << "3.困难" << endl;

	int num = 0;
	cin >> num;

	switch (num) {
	case 1:
		cout << "您选择了普通难度" << endl;
		break; // 跳出switch语句
	case 2:
		cout << "您选择了中等难度" << endl;
		break; // 跳出switch语句
	case 3:
		cout << "您选择了困难难度" << endl;
		break; // 跳出switch语句
	}

	system("pause");
	return 0;
}