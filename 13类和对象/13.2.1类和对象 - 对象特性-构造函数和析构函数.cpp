#include<iostream>
using namespace std;

////对象的初始化和清理
////构造函数 进行初始化操作
//class person
//{
//	//1.1构造函数
//	//没有返回值 也没有void
//	//函数名和类名相同
//	//构造函数可以有参数，可以发生重载
//	//创建对象的时候，构造函数可以自动调用而且只调用一次
//public:
//	person()
//	{
//		cout << "person 构造函数的调用" << endl;
//	}
//	~person()
//	{
//		cout << "person 析构函数的调用" << endl;
//	}
//
//};
//
//    //析构函数 进行清理操作
//    //没有返回值 不写void
//    //函数名和类名也是相同的，在名称前加~
//    //析构函数不可以有参数的 不可以发生重载
//    //对象在销毁前会自动调用析构函数，而且只会调用一次
//
////构造和析构都是必须有的实现，如果我们不提供，编译器会提供一个空实现的构造和析构
//void test01()
//{
//	person p;//在栈上的数据 test01执行完毕后就会释放这个对象
//}
//
//
//int main()
//{
//	//test01();
//
//	person p;
//
//	system("pause");
//	return 0;
//}