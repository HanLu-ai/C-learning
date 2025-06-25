#include <iostream>
using namespace std;

int main() {
	cout << "欢迎使用御风工作室教程" << endl;
	bool flag = true;
	cout << flag << endl; // Output: 1

	flag = false;
	cout << flag << endl; // Output: 0

	cout << "size of bool: " << sizeof(bool) << endl; // Output: size of bool: 1

	system("pause"); // Wait for user input before closing the console window
	return 0;
}