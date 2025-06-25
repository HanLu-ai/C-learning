#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	int score;
	cout << "请输入考试分数：" << endl;
	cin >> score;

	if (score > 600) {
		cout << "我考上了一本大学" << endl;
	}
	else if (score > 500) {
		cout << "我考上了二本大学" << endl;
	}
	else if (score > 400) {
		cout << "我考上了三本大学" << endl;
	}
	else {
		cout << "我没有考上大学" << endl;
	}

	system("pause");
	return 0;
}