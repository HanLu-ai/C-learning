#pragma once  
#include <iostream>  
#include <string>  

#define MAX 1000  

using namespace std;  

// ��ϵ�˽ṹ��  
struct Person {  
	string m_Name; // ����  
	int m_Sex = 0; // �Ա�1�У�2Ů  
	int m_Age = 0; // ����  
	string m_Phone; // �绰  
	string m_Addr; // סַ  
};  

// ͨѶ¼�ṹ��  
struct Addressbooks {  
	struct Person * personArray = 0; // ͨѶ¼�б������ϵ������  
	int m_Size = 0; // ͨѶ¼����Ա����  
};  

void showMenu();  
void addPerson(Addressbooks * abs);
void showPerson(Addressbooks* abs);
int isExist(Addressbooks* abs, string name);
void deletePerson(Addressbooks* abs);
void findPerson(Addressbooks* abs);
void modifyPerson(Addressbooks* abs);
void cleanPerson(Addressbooks* abs);