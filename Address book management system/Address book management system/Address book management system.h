#pragma once  
#include <iostream>  
#include <string>  

#define MAX 1000  

using namespace std;  

// 联系人结构体  
struct Person {  
	string m_Name; // 姓名  
	int m_Sex = 0; // 性别：1男，2女  
	int m_Age = 0; // 年龄  
	string m_Phone; // 电话  
	string m_Addr; // 住址  
};  

// 通讯录结构体  
struct Addressbooks {  
	struct Person * personArray = 0; // 通讯录中保存的联系人数组  
	int m_Size = 0; // 通讯录中人员个数  
};  

void showMenu();  
void addPerson(Addressbooks * abs);
void showPerson(Addressbooks* abs);
int isExist(Addressbooks* abs, string name);
void deletePerson(Addressbooks* abs);
void findPerson(Addressbooks* abs);
void modifyPerson(Addressbooks* abs);
void cleanPerson(Addressbooks* abs);