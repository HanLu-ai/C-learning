#include "func.h"

int main() {
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	int len = sizeof(arr) / sizeof(int);

	bubbleSort(arr, len);

	printArray(arr, len);

	// 总结：当数组名传入到函数作为参数时，被退化为指向首元素的指针

	system("pause");
	return 0;
}