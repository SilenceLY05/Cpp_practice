#include<iostream>
using namespace std;

//class person
//{
//public:
//	person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//重载赋值运算符
//	person& operator=(person& p)
//	{
//		//编译器提供的浅拷贝
//		//m_Age = p.m_Age;
//
//
//		//应该先判断是否有属性在堆区，若有应先释放干净，然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		m_Age = new int(*p.m_Age);//深拷贝操作
//
//		//返回对象本身
//		return *this;
//	}
//
//	int* m_Age;
//
//private:
//
//};
//
//void test01()
//{
//	person p1(18);
//	person p2(20);
//
//	person p3(30);
//
//	p3 = p2 = p1;//赋值运算操作
//	
//
//	cout << "p1的年龄为：  " << *p1.m_Age << endl;
//	cout << "p2的年龄为：  " << *p2.m_Age << endl;
//	cout << "p3的年龄为：  " << *p3.m_Age << endl;
//
//}
//
//int main()
//{
//
//	test01();
//	system("pause");
//	return 0;
//}