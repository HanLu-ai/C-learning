#pragma once
#include <iostream>
using namespace std;

// ѧ���ṹ�嶨��
struct student {
	// ��Ա�б�
	string name; // ����
	int age; // ����
	int score; // ����
};

// ��ʦ�ṹ�嶨��
struct teacher {
	// ��Ա�б�
	int id; // ְ�����
	string name; // ��ʦ����
	int age; // ��ʦ����
	struct student stu; // �ӽṹ�� ѧ��
};