#include <iostream>
using namespace std;

/* 常见的函数样式有4种
	   1.无参无返
	   2.有参无返
	   3.无参有返
	   4.有参有返 */

// 函数常见样式
// 1.无参无返
void test1() {
	// void a = 10; // 无类型不可以创建变量，因此无法分配内存
	cout << "这是test1" << endl;
	// test1(); 函数调用
}

// 2.有参无返
void test2(int a) {
	cout << "这是test2" << endl;
	cout << "参数a的值是: " << a << endl;
}

// 3.无参有返
int test3() {
	cout << "这是test3" << endl;
	return 10; // 返回一个整数
}

// 4.有参有返
int test4(int a, int b) {
	cout << "这是test4" << endl;
	cout << "参数a的值是: " << a << ", 参数b的值是: " << b << endl;
	return a + b; // 返回两个整数的和
}

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	test1(); // 调用无参无返函数
	test2(5); // 调用有参无返函数，传入参数5
	int result3 = test3(); // 调用无参有返函数，并接收返回值
	cout << "test3的返回值是: " << result3 << endl; // 输出返回值
	int result4 = test4(3, 7); // 调用有参有返函数，传入参数3和7，并接收返回值
	cout << "test4的返回值是: " << result4 << endl; // 输出返回值
	
	system("pause"); // 暂停程序，等待用户输入
	return 0; // 返回0表示程序正常结束
}