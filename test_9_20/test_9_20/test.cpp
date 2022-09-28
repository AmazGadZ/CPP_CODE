#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//函数模板

////交换两个整形函数
//void swapInt(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////交换两个浮点型函数
//void swapDouble(double& a, double& b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//
////函数模板
//template<typename T>//声明一个模板，告诉编译器后面打码中紧跟着的T不要报错，T是一个通用数据类型
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//swapInt(a, b);
//	//利用函数模板交换
//	//两种方式使用函数模板
//	
//	//1.自动类型推导
//	//mySwap(a, b);
//
//	//2.显式指定类型
//	mySwap<int>(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	//double c = 1.1;
//	//double d = 2.2;
//
//	//swapDouble(c, d);
//	//cout << "c = " << c << endl;
//	//cout << "d = " << d << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//函数模板注意事项
 
//template<class T>//typename可以替换成class
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
////1.自动类型推导，必须推导出一致的数据类型T才可以使用
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	//mySwap(a, b);//正确
//	//mySwap(a, c);//错误，推导不出一致的T类型
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2.模板必须要确定出T的数据类型，才可以使用
//template<typename T>
//void func()
//{
//	cout << "func调用" << endl;
//}
//
//void test02()
//{
//	//func();//err
//	func<int>();
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//实现通用 对数组进行排序的函数
//规则 从大到小
//算法 选择
//测试 char数组、int数组

////交换函数模板
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
////排序算法
//template<typename T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//认定最大值的下标
//		for (int j = i + 1; j < len; j++)
//		{
//			//认定的最大值 比 遍历出的数值要小，说明j下标的元素才是真正的最大值
//			if (arr[max] < arr[j])
//			{
//				max = j;//更新最大值下标
//			}
//		}
//		if (max != i)
//		{
//			//交换max和i元素
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////提供打印数组模板
//template<typename T>
//void printArray(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//测试char数组
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//测试int数组
//	int intArr[] = { 7,5,1,3,9,2,4,6,8 };
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArray(intArr, num);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//普通函数与函数模板区别

//1.普通函数调用可以发生隐式类型转换
//2.函数模板 用自动类型推导，不可以发生隐式类型转换
//3.函数模板 用显式指定类型，可以发生隐式类型转换

////普通函数
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////函数模板
//template<typename T>
//T myAdd02(T a, T b)
//{
//	return a + b;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';// a - 97  c - 99
//	cout << myAdd01(a, c) << endl;
//
//	//自动类型推导	不会发生隐式类型转换
//	//cout << myAdd02(a, c) << endl;
//
//	//显式指定类型	会发生隐式类型转换
//	cout << myAdd02<int>(a, c) << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//普通函数与函数模板调用规则
//1.如果函数模板和普通函数都可以调用，优先调用普通函数
//2.可以通过空模板参数列表 强制调用 函数模板
//3.函数模板也可以发生函数重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板

//void myPrint(int a, int b)
//{
//	cout << "调用的普通函数" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "调用的模板" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b, T c)
//{
//	cout << "调用重载的模板" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//myPrint(a, b);
//
//	//通过空模板参数列表，强制调用函数模板
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 100);
//
//	//如果函数模板产生更好的匹配，优先调用函数模板
//	char c1 = 'a';
//	char c2 = 'b';
//
//	myPrint(c1, c2);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//模板局限性
//模板并不是万能的，有些特定数据类型，需要用具体化方式做特殊实现

//class Person
//{
//public:
//
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	//姓名
//	string m_Name;
//	//年龄
//	int m_Age;
//};
//
////对比两个数据是否相等函数
//template<typename T>
//bool myCompare(T& a, T& b)
//{
//	if (a == b)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
////利用具体化Person的版本实现代码，具体化优先调用
//template<> bool myCompare(Person& p1, Person& p2)
//{
//	if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	bool ret = myCompare(a, b);
//
//	if (ret)
//	{
//		cout << "a == b" << endl;
//	}
//	else
//	{
//		cout << "a != b" << endl;
//	}
//}
//
//void test02()
//{
//	Person p1("Tom", 10);
//	Person p2("Tom", 11);
//
//	bool ret = myCompare(p1, p2);
//	if (ret)
//	{
//		cout << "p1 == p2" << endl;
//	}
//	else
//	{
//		cout << "p1 != p2" << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//类模板
//template<typename NameType,typename AgeType>
//class Person
//{
//public:
//	Person(NameType name,AgeType age)
//	{
//		this->m_name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name：" << this->m_name << " age：" << this->m_Age << endl;
//	}
//
//	NameType m_name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	Person<string, int> p1("孙悟空", 999);
//	p1.showPerson();
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//类模板与函数模板区别
//template<typename NameType, typename AgeType = int>
//class Person
//{
//public:
//	Person(NameType name, AgeType age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "name：" << this->m_Name << " age：" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.类模板没有自动类型推导方式
//void test01()
//{
//	//Person p("孙悟空", 1000);//错误，无法用自动类型推导
//
//	Person<string, int> p("孙悟空", 1000);//正确，只能用显式指定类型
//
//	p.showPerson();
//}
//
////2.类模板在模板参数列表中可以有默认参数
//void test02()
//{
//	Person<string> p("猪八戒", 999);
//
//	p.showPerson();
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}


//类模板中成员函数创建时机
//类模板中成员函数在调用时才去创建

//class Person1
//{
//public:
//	void showPerson1()
//	{
//		cout << "Person1 show" << endl;
//	}
//};
//
//class Person2
//{
//public:
//	void showPerson2()
//	{
//		cout << "Person2 show" << endl;
//	}
//};
//
//template<typename T>
//class Myclass
//{
//public:
//
//	T obj;
//
//	//类模板中的成员函数
//	void func1()
//	{
//		obj.showPerson1();
//	}
//
//	void func2()
//	{
//		obj.showPerson2();
//	}
//};
//
//void test01()
//{
//	Myclass<Person2> m;
//	//m.func1();
//	m.func2();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//类模板对象做函数参数

//template<typename T1, typename T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	void showPerson()
//	{
//		cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.指定传入类型
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("孙悟空", 100);
//	printPerson1(p);
//}
//
////2.参数模板化
//template<typename T1, typename T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1 的类型为：" << typeid(T1).name() << endl;
//	cout << "T2 的类型为：" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("猪八戒", 90);
//	printPerson2(p);
//}
//
////3.整个类模板化
//template<typename T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//	cout << "T的数据类型为：" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p("唐僧", 30);
//	printPerson3(p);
//}
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}


//类模板与继承

//template<typename T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base//错误，必须要知道父类中的T类型，才能继承给子类
//class Son :public Base<int>
//{
//
//};
//
//void test01()
//{
//	Son s1;
//}
//
////如果想灵活指定父类中T类型，子类也需要变类模板
//template<typename T1, typename T2>
//class Son2 :public Base<T2>
//{
//public:
//
//	Son2()
//	{
//		cout << "T1的类型为：" << typeid(T1).name() << endl;
//		cout << "T2的类型为：" << typeid(T2).name() << endl;
//	}
//
//	T1 obj;
//};
//
//void test02()
//{
//	Son2<int, char>S2;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//类模板成员函数类外实现
//template<typename T1,typename T2>
//class Person
//{
//public:
//
//	Person(T1 name, T2 age);
//	//{
//	//	this->m_Name = name;
//	//	this->m_Age = age
//	//}
//
//	void showPerson();
//	//{
//	//	cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
//	//}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////构造函数类外实现
//template<typename T1,typename T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////成员函数类外实现
//template<typename T1, typename T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
//}
//
//void test01()
//{
//	Person<string, int> p("Tom", 20);
//	p.showPerson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//类模板分文件编写问题及解决

//template<typename T1,typename T2>
//class Person
//{
//public:
//	Person(T1 name, T2 age);
//
//	void showPerson();
//
//	T1 m_Name;
//	T2 m_Age;
//};

//template<typename T1,typename T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
//template<typename T1, typename T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "姓名：" << this->m_Name << " 年龄 " << this->m_Age << endl;
//}

//第一种解决方式，直接包含 源文件
//#include "Person.cpp"

//第二种解决方式，将.h和.cpp中的内容写到一起，将后缀名改为.hpp文件
//#include "Person.hpp"
//
//void test01()
//{
//	Person<string, int> p("Jerry", 18);
//	p.showPerson();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//通过全局函数 打印Person信息

////提前让编译器知道Person类存在
//template<typename T1, typename T2>
//class Person;
//
////类外实现
//template<typename T1, typename T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "类外实现 -- 姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
//}
//
//
//template<typename T1,typename T2>
//class Person
//{
//	//全局函数 类内实现
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;
//	}
//
//	//全局函数 类外实现
//	//加空模板参数列表
//	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在
//	friend void printPerson2<>(Person<T1, T2> p);
//
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//private:
//	T1 m_Name;
//	T2 m_Age;
//};
//
//
////1.全局函数在类内实现
//void test01()
//{
//	Person<string, int> p("Tom", 20);
//
//	printPerson(p);
//}
//
////2.全局函数在类外实现
//void test02()
//{
//	Person<string, int> p("Jerry", 20);
//
//	printPerson2(p);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


#include "MyArrat.hpp"

void printIntArray(MyArray<int>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << arr[i] << endl;
	}
}

void test01()
{
	MyArray<int> arr1(5);

	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出为：" << endl;
	printIntArray(arr1);

	cout << "arr1的容量为：" << arr1.getCapacity() << endl;
	cout << "arr1的大小为：" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);

	cout << "arr2的打印输出为：" << endl;
	printIntArray(arr2);

	//尾删
	arr2.Pop_Back();
	cout << "arr2尾删后" << endl;
	cout << "arr2的容量为：" << arr2.getCapacity() << endl;
	cout << "arr2的大小为：" << arr2.getSize() << endl;

	//MyArray<int>arr3(100);
	//arr3 = arr1;
}


//测试自定义数据类型
class Person
{
public:

	Person()
	{

	}

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << " 年龄：" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person> arr(10);

	Person p1("孙悟空", 999);
	Person p2("韩信", 30);
	Person p3("妲己", 20);
	Person p4("赵云", 25);
	Person p5("安琪拉", 27);

	//将数据插入到数组中
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//打印数组
	printPersonArray(arr);

	//输出容量
	cout << "arr容量为：" << arr.getCapacity() << endl;
	//输出大小
	cout << "arr大小为：" << arr.getSize() << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}