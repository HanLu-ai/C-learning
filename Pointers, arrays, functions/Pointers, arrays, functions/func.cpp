#include "func.h"

// 冒泡排序函数
void bubbleSort(int* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

// 打印数组函数
void printArray(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << arr[i] << endl;
	}
}