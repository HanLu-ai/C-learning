#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	int score = 0;
	cout << "请输入考试分数：" << endl;
	cin >> score;
	if (score > 600) {
		cout << "我考上了一本大学" << endl;
	}
	else {
		cout << "我未考上一本大学" << endl;
	}

	system("pause");
	return 0;
}