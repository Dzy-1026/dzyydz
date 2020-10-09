#include "workerManager.h"
#include "employee.h"
#include "boss.h"
#include "manager.h"
#include "worker.h"

/*void test()
{
	Worker *worker = NULL;

	worker = new Employee(1, "张三", 110);
	worker->showInfo();
	delete worker;

	worker = new Manager(2, "张三", 110);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "张三", 110);
	worker->showInfo();
	delete worker;

	system("pause");
	system("cls");
}*/

int main()
{
	WorkManger wm;
	int choice = 0;
	while (true)
	{
		wm.Show_Menu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			wm.exitSystem();
			break;
		case 1:
			wm.Add_Emp();
			break;
		case 2:
			wm.Show_Emp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_File();
			break;
		default:
			system("cls");
			break;
		}
	}
	system("pause");
	return 0;
}