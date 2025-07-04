#pragma once
#include <iostream>
using namespace std;

struct Student {
	string name;
	int score;
};
struct Teacher {
	string name;
	Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len) {
	string tName = "教师";
	string sName = "学生";
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++) {
		tArray[i].name = tName + nameSeed[i];

		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].name = sName + nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void printTeachers(Teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << tArray[i].name << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\t姓名：" << tArray[i].sArray[j].name << " 分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}