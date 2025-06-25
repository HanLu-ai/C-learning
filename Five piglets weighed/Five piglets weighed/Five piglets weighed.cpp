#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;

	// 在一个数组中记录了五只小猪的体重，如：int arr[5] = {300,350,200,400,250};找出并打印最重的小猪体重。

	int arr[5] = { 300,350,200,400,250};

	if (arr[0] > arr[1] && arr[0] > arr[2] && arr[0] > arr[3] && arr[0] > arr[4]) {
		cout << "第一只猪最重" << endl;
	} else if (arr[1] > arr[0] && arr[1] > arr[2] && arr[1] > arr[3] && arr[1] > arr[4]) {
		cout << "第二只猪最重" << endl;
	} else if (arr[2] > arr[0] && arr[2] > arr[1] && arr[2] > arr[3] && arr[2] > arr[4]) {
		cout << "第三只猪最重" << endl;
	} else if (arr[3] > arr[0] && arr[3] > arr[1] && arr[3] > arr[2] && arr[3] > arr[4]) {
		cout << "第四只猪最重" << endl;
	} else {
		cout << "第五只猪最重" << endl;
	}
	
	system("pause");
	return 0;
}