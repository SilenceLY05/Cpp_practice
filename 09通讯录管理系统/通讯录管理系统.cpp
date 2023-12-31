//封装函数显示该界面 如void showMenu()
//在main函数中调用封装好的函数
#include<iostream>
using namespace std;
#include <string>
#define MAX 1000

struct Person
{
	string m_Name;//名字
	int m_Sex;//性别：1.男  2.女
	int m_Age;//年龄
	string m_Phone;//电话
	string m_Addr;//住址
};

//通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX];//通讯录中保存的联系人数组
	int m_Size;//通讯录中人员个数

};

//1、添加联系人
void addPerson(Addressbooks * abs)
{
	//判断通讯录是否已满，若满了就不在添加
	if (abs->m_Size == MAX)
	{
		cout << "联系人已满，无法添加新联系人!" << endl;
		return;
	}
	else
	{
		//添加联系人

		//姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;

		//性别
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;

		while (true)
		{
			//如果输入的是1或2可以退出循环，如果输入有误重新输入
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		
		//年龄
		cout << "请输入联系人年龄！" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[abs->m_Size].m_Age = age;
		//电话
		cout << "请输入联系人电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[abs->m_Size].m_Phone = phone;
		//住址
		cout << "请输入联系人地址：" << endl;
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;
		
		//更新通讯录中的人数
		abs->m_Size++;

		cout << "添加成功!" << endl;

		system("pause");
		system("cls");   //清屏操作
	}
}

//显示所有联系人信息
void showPerson(Addressbooks* abs)
{
	//判断通讯录中人数是否为0，如果为0  提示记录为空 如果不为0 显示联系人信息
	if (abs->m_Size == 0)
	{
		cout << "当前通讯录中没有联系人" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_Size; i++)
		{
			cout << "姓名：" << abs->personArray[i].m_Name << "\t";
			cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" :"女" ) << "\t";
			cout << "年龄：" << abs->personArray[i].m_Age << "\t";
			cout << "电话：" << abs->personArray[i].m_Phone << "\t";
			cout << "地址：" << abs->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");
}

//菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出联系人  *****" << endl;
	cout << "***************************" << endl;
}


//检测联系人是否存在，如果存在返回联系人所在数组中的具体位置，若不存在返回-1
int isExist(Addressbooks * abs, string name)  //参数1  通讯录  参数2   对比姓名
{
	for (int i = 0; i < abs->m_Size; i++)
	{
		//找到用户姓名
		if (abs->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1; //如果没找到用户返回-1
}

//删除指定的联系人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入您要删除的联系人" << endl;
	string name;
	cin >> name;

	//ret == -1  未查到   ret!= -1 查到
	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//查找到人，要进行删除操作
		for (int i = ret ; i<abs->m_Size;i++)
		{
			//数据前移
			abs->personArray[i] = abs->personArray[i + 1];

		}
		abs->m_Size--; //更新通讯录中的人员数
		cout << "删除成功!" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//查找联系人
void findPerson(Addressbooks* abs)
{
	cout << "请输入您要查找的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);
	
	if(ret != -1)
	{
		cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
		cout << "性别：" << abs->personArray[ret].m_Sex << "\t";
		cout << "年龄：" << abs->personArray[ret].m_Age << "\t";
		cout << "电话：" << abs->personArray[ret].m_Phone << "\t";
		cout << "地址：" << abs->personArray[ret].m_Addr << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

  //修改联系人
void modifyPerson(Addressbooks* abs)
{
	cout << "输入你想修改的联系人" << endl;
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1)
	{
		//修改姓名
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->personArray[ret].m_Name = name;

		//修改性别
		cout << "请输入性别：" << endl;
		cout << "1---男" << endl;
		cout << "2---女" << endl;
		int sex = 0;

		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		

		//修改年龄
		cout << "请输入年龄：" << endl;
		int age = 0;
		cin >> age;
		abs->personArray[ret].m_Age = age;

		//修改电话
		cout << "请输入电话：" << endl;
		string phone;
		cin >> phone;
		abs->personArray[ret].m_Phone = phone;

		//修改地址
		cout << "请输入地址" << endl;
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "修改成功！" << endl;

	}
	else
	{
		cout << "查无此人" << endl;
	}
	system("pause");
	system("cls");
}

//清空联系人
void cleanPerson(Addressbooks* abs)
{
	cout << "1---确定" << endl;
	cout << "2---取消" << endl;
	int answer = 0;

	while (true)
	{
		cin >> answer;
		if (answer == 1)
		{
			abs->m_Size = 0;
			cout << "通讯录已被清空" << endl;
			break;
		}
		else if (answer == 2)
		{
			break;
		}
		cout << "输入有误，请重新输入" << endl;
	}
	
	system("pause");
	system("cls");
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	int select = 0;//创建用户选择输入的变量

	while (true)
	{
		//菜单的调用
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1: //添加联系人
			addPerson(&abs); //利用地址传递，可以修改实参
			break;
		case 2: //显示联系人
			showPerson(&abs);
			break;
		case 3: //删除联系人
		/*{
			cout << "请输入删除联系人姓名" << endl;
			string name;
			cin >> name;

			if (isExist(&abs, name) == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "找到此人" << endl;
			}
		}*/
			deletePerson(&abs);
			break;
		case 4: //查找联系人
			findPerson(&abs);
			break;
		case 5: //修改联系人
			modifyPerson(&abs);
			break;
		case 6: //清空联系人
			cleanPerson(&abs);
			break;
		case 0: //退出联系人
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;

		}
	}
	

	system("pause");
	return 0;
}