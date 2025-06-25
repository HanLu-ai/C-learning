#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	//C风格字符串：char 变量名[] = "字符串值"
	char str1[] = "Hello, World!";
	cout << str1 << endl;
	//注意：C风格的字符串要用双引号括起来

	//C++风格字符串：string 变量名 = "字符串值"
	string str = "Hello, World!";
	cout << str << endl;
	//注意：C++风格字符串，需要加入头文件==#include\<string>==

	system("pause");
	return 0;
}