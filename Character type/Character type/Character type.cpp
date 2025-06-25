#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	/*作用：字符型变量用于显示单个字符
	
	  语法：char ch = 'a';

	  注意1：在显示字符型变量时，用单引号将字符括起来，不要用双引号

	  注意2：单引号内只能有一个字符，不可以是字符串

	  C和C++中字符型变量只占用==1个字节==

	  字符型变量并不是把字符本身放到内存中存储，
	  而是将对应的ASCII编码放入到存储单元*/

	char ch = 'a'; // 定义一个字符型变量ch，并赋值为'a'
	cout << ch << endl; // 输出字符型变量ch的值
	cout << sizeof(ch) << endl; // 输出字符型变量ch所占的字节数

	//ch = "abcde"; //错误：不可以用双引号
	//ch = 'abcde'; //错误：单引号内只能引用一个字符

	cout << (int)ch << endl; // 输出字符型变量ch对应的ASCII编码值
	ch = 97; // 将ASCII编码97赋值给字符型变量ch
	cout << ch << endl; // 输出字符型变量ch的值

	system("pause"); // 暂停程序，等待用户输入
	return 0; // 返回0，表示程序正常结束
}