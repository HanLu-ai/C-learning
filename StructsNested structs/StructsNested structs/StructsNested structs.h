#pragma once
#include <iostream>
using namespace std;

// 学生结构体定义
struct student {
	// 成员列表
	string name; // 姓名
	int age; // 年龄
	int score; // 分数
};

// 教师结构体定义
struct teacher {
	// 成员列表
	int id; // 职工编号
	string name; // 教师姓名
	int age; // 教师年龄
	struct student stu; // 子结构体 学生
};