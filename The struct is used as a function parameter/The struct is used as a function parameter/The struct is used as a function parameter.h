#pragma once
#include <iostream>
using namespace std;

//ѧ���ṹ�嶨��
struct student {
	//��Ա�б�
	string name;  //����
	int age;      //����
	int score;    //����
};

//ֵ����
void printStudent(student stu) {
	stu.age = 28;
	cout << "�Ӻ����� ������" << stu.name << " ���䣺 " << stu.age << " ������" << stu.score << endl;
}

//��ַ����
void printStudent2(student* stu) {
	stu->age = 28;
	cout << "�Ӻ����� ������" << stu->name << " ���䣺 " << stu->age << " ������" << stu->score << endl;
}