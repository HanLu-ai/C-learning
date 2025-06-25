#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	/* 作用：执行多条件分支语句
	
	  语法：
	  switch(表达式) {
	  case 结果1：执行语句;break;
	  case 结果2：执行语句;break;
	  ···
	  default:执行语句;break;
	  } */

	// 请给电影评分
	// 10 ~ 9   经典
	// 8 ~ 7    不错
	// 6 ~ 5    一般
	// 5分以下  烂片

	int score = 0;
	cout << "请给电影打分" << endl;
	cin >> score;

	switch (score) {
		case 10:
		case 9:
			cout << "经典" << endl;
			break;
		case 8:
		case 7:
			cout << "不错" << endl;
			break;
		case 6:
		case 5:
			cout << "一般" << endl;
			break;
		default:
			cout << "烂片" << endl;
			break;
	}
	// 注意1：switch语句中表达式类型只能是整型或者字符型
	// 注意2：case后面只能是常量表达式，不能是变量
	// 注意3：case后面可以是多个结果，多个结果之间用冒号分隔
	// 注意4：case后面可以没有break语句，这样会导致执行到下一个case
	// 注意5：default语句可以没有，也可以有多个
	// 总结：与if语句比，对于多条件判断时，switch的结构清晰，执行效率高，缺点是switch不可以判断区间

	system("pause");
	return 0;
}