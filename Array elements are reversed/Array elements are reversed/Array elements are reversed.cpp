#include <iostream>
using namespace std;

int main() {
    cout << "欢迎使用御风工作室教程" << endl;

    // 请声明一个5个元素的数组，并且将元素逆置.
    
    // 声明并初始化数组
    int arr[5] = { 1, 3, 2, 5, 4 };

    // 打印原始数组
    cout << "原始数组: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 逆置数组
    for (int i = 0; i < 5 / 2; i++) {
        // 交换首尾元素
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }

    // 打印逆置后的数组
    cout << "逆置后数组: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

	system("pause");
    return 0;
}