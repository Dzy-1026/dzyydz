#pragma once
#include<iostream>
#include "worker.h"
#include<fstream>
#include<string>
#define  FILENAME "empFile.txt"
using namespace std;

class WorkManger
{
public:
	WorkManger();
	void Show_Menu();
	void exitSystem();
	void Add_Emp();
	void Show_Emp();
	//�����ļ�
	void save();
	//��־�ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;
	void init_Emp();
	void Del_Emp();
	void Mod_Emp();
	void Find_Emp();
	void Sort_Emp();
	void Clean_File();
	~WorkManger();

	int m_EmpNum;
	//ͳ������
	int get_EmpNum();
	//����ְ������ж�ְ���Ƿ����,�����ڷ���ְ����������λ�ã������ڷ���-1
	int IsExist(int id);
	Worker **m_EmpArray;
};