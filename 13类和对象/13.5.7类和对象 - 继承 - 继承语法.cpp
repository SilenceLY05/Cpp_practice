#include<iostream>
using namespace std;

//多继承语法 class 子类：继承方式 父类1，继承方式 父类2…

//class Base1
//{
//public:
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//
//};
//
//class son :public Base1,public Base2
//{
//public:
//	son()
//	{
//		m_C = 300;
//		m_D = 400;
//	}
//
//	int m_C;
//	int m_D;
//};
//
//void test01()
//{
//	son s;
//	cout << "size of son = " << sizeof(s) << endl;
//	//当父类中出现了同名的成员，需要加作用域区分
//	cout << "m_A = " << s.Base2::m_A << endl;
//}
//
//int main()
//{
//	
//	test01();
//	system("pause");
//	return 0;
//}