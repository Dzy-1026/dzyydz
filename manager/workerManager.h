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
	//保存文件
	void save();
	//标志文件是否为空
	bool m_FileIsEmpty;
	void init_Emp();
	void Del_Emp();
	void Mod_Emp();
	void Find_Emp();
	void Sort_Emp();
	void Clean_File();
	~WorkManger();

	int m_EmpNum;
	//统计人数
	int get_EmpNum();
	//按照职工编号判断职工是否存在,若存在返回职工在数组中位置，不存在返回-1
	int IsExist(int id);
	Worker **m_EmpArray;
};