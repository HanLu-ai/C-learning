#include <iostream>
#include <ctime>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	// 添加随机数种子
	srand((unsigned)time(0));

	// 1.系统生成随机数
	int num = rand() % 100 + 1; // 生成1到100之间的随机数
	
	// 2.玩家进行猜测
	int val = 0;
	while (1) {
		cout << "请输入你猜测的数字（1-100）: ";
		cin >> val;

		// 3.判断猜测结果
		if (val < num) {
			cout << "猜小了，请继续猜测" << endl;
		} else if (val > num) {
			cout << "猜大了，请继续猜测" << endl;
		} else {
			cout << "恭喜你，猜对了！" << endl;
			break; // 猜对了，退出循环
		}
	}

	system("pause"); // 暂停程序，等待用户按键
	return 0; // 返回0表示程序正常结束
}