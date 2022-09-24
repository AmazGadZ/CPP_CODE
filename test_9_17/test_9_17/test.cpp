#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//成员变量和成员函数 分开存储的

//class Person
//{
//	int m_A;//非静态成员变量 属于类的对象上
//
//	static int m_B;//静态成员变量 不属于类的对象上
//
//	void func(){}//非静态成员函数 不属于类的对象上
//
//	static void func2(){}//静态成员函数 不属于类的对象上
//};
//int Person::m_B = 0;
//
//void test01()
//{
//	Person p;
//	//空对象占用内存空间为：1
//	//C++编译器会给每个空对象也分配一个字节空间，是为了区分空对象占内存的位置
//	//每个空对象也应该有一个独一无二的内存地址
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << "size of p = " << sizeof(p) << endl;
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	return 0;
//}

//class Person
//{
//public:
//	Person(int age)
//	{
//		//this指针指向 被调用的成员函数 所属的对象
//		this->age = age;
//	}
//
//	Person& PersonAddAge(Person& p)
//	{
//		this->age += p.age;
//
//		//this指向p2的指针，而*this指向的就是p2这个对象本体
//		return *this;
//	}
//
//	int age;
//};
//
////1.解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "p1的年龄为：" << p1.age << endl;
//}
//
////2.返回对象本身用*this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//
//	cout << "p2的年龄为：" << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	return 0;
//}


//空指针调用成员函数

//class Person
//{
//public:
//
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		//报错原因是因为传入的指针是为NULL
//
//		if (this == NULL)
//		{
//			return;
//		}
//
//		cout << "age = " << m_Age << endl;
//	}
//
//	int m_Age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//
//	//p->showClassName();
//
//	p->showPersonAge();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//常函数
//class Person
//{
//public:
//
//	//this指针的本质 是指针常量	指针的指向是不可以修改的
//	//const Person* const this;
//	//在成员函数后面加const，修饰的是this指向的值，让指针指向的值也不可以修改
//	void showPerson() const
//	{
//		m_B = 100;
//		//m_A = 100;
//		//this = NULL;//this指针不可以修改指针的指向
//	}
//
//	void func()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//	mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值，加关键字mutable
//};
//
//void test01()
//{
//	Person p;
//	p.showPerson();
//}
//
////常对象
//
//void test02()
//{
//	const Person p;//在对象前加const，变为常对象
//	//p.m_A = 100;
//	p.m_B = 100;//m_B是特殊值，在常对象下也可以修改
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func();//常对象 不可以调用普通成员函数，因为普通成员函数可以修改属性
//}

//class Building
//{
//	//goddGay全局函数是 Building好朋友，可以访问Building中私有成员
//	friend void goodGay(Building* building);
//
//public:
//	Building()
//	{
//		m_SittingRoom = "客厅";
//		m_BedRoom = "卧室";
//	}
//
//public:
//	string m_SittingRoom;//客厅
//
//private:
//	string m_BedRoom;//卧室
//};
//
////全局函数
//void goodGay(Building* building)
//{
//	cout << "好基友全局函数 正在访问：" << building->m_SittingRoom << endl;
//	cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	Building building;
//	goodGay(&building);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//类作友元
//class Building;
//
//class GoodGay
//{
//public:
//	GoodGay();
//
//	void visit();//参观函数 访问Building中的属性
//
//	Building* building;
//};
//
//class Building
//{
//	//GoodGay类是本类的好朋友，可以访问本类中私有成员
//	friend class GoodGay;
//
//public:
//	Building();
//
//public:
//
//	string m_SittingRoom;//客厅
//
//private:
//
//	string m_BedRoom;//卧室
//};
//
////类外写成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	//创建建筑物对象
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "好基友类正在访问：" << building->m_SittingRoom << endl;
//
//	cout << "好基友类正在访问：" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

class Building;
//class GoodGay
//{
//public:
//
//	GoodGay();
//
//	void visit();//让visit函数可以访问Building中私有成员
//	void visit2();//让visit函数不可以访问Building中私有成员
//
//	Building* building;
//
//};
//
//class Building
//{
//	//告诉编译器 GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
//	friend void GoodGay::visit();
//	//friend class GoodGay;
//public:
//	Building();
//
//public:
//
//	string m_SittingRoom;//客厅
//
//private:
//
//	string m_BedRoom;//卧室
//};
//
////类外实现成员函数
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit()
//{
//	cout << "visit函数正在访问：" << building->m_SittingRoom << endl;
//
//	cout << "visit函数正在访问：" << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "visit2函数正在访问：" << building->m_SittingRoom << endl;
//
//	//cout << "visit2函数正在访问：" << building->m_BedRoom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//加号运算符重载

//class Person
//{
//public:
//	//1.成员函数重载+号
//	//Person operator+(Person& p)
//	//{
//	//	Person tmp;
//	//	tmp.m_A = this->m_A + p.m_A;
//	//	tmp.m_B = this->m_B + p.m_B;
//	//	return tmp;
//	//}
//
//
//	int m_A;
//	int m_B;
//};
//
////2.全局函数重载+号
//Person operator+(Person& p1, Person& p2)
//{
//	Person tmp;
//	tmp.m_A = p1.m_A + p2.m_B;
//	tmp.m_B = p1.m_A + p2.m_B;
//	return tmp;
//}
//
////函数重载的版本
//Person operator+(Person& p1, int num)
//{
//	Person tmp;
//	tmp.m_A = p1.m_A + num;
//	tmp.m_B = p1.m_B + num;
//	return tmp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//成员函数重载本质调用
//	//Person p3 = p1.operator+(p2);
//
//	//全局函数重载本质调用
//	//Person p3 = operator+(p1, p2);
//
//	Person p3 = p1 + p2;
//	//运算符重载 也可以发生函数重载
//
//	Person p4 = p1 + 100;//Person + int
//
//	cout << "p3.m_A = " << p3.m_A << endl;
//	cout << "p3.m_B = " << p3.m_B << endl;
//
//	cout << "p4.m_A = " << p4.m_A << endl;
//	cout << "p4.m_B = " << p4.m_B << endl;
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}

//左移运算符重载
//class Person
//{
//	friend ostream& operator<<(ostream& cout, Person& p);
//
//public:
//	Person(int a, int b)
//	{
//		m_A = a;
//		m_B = b;
//	}
//private:
//
//	//利用成员函数重载 左移运算符	p.operator<<(cout) 简化版本 p << cout
//	//不会利用成员函数重载<<运算符，因为无法实现cout在左侧
//	//void operator<<(cout)
//	//{
//
//	//}
//
//	int m_A;
//	int m_B;
//};
//
////只能利用全局函数重载左移运算符
//ostream& operator<<(ostream& cout, Person& p)//本质 operator<<(cout, p)  简化 cout << p
//{
//	cout << "m_A = " << p.m_A << " m_B = " << p.m_B;
//	return cout;
//}
//
//void test01()
//{
//	Person p(10, 10);
//	//p.m_A = 10;
//	//p.m_B = 10;
//
//	cout << p << " hello world" << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//重载递增运算符

//自定义整型
//class MyInteger
//{
//	friend ostream& operator<<(ostream& cout, MyInteger myint);
//public:
//	MyInteger()
//	{
//		m_Num = 0;
//	}
//
//	//重载前置++运算符  返回引用是为了一直对一个数据进行递增操作
//	MyInteger& operator++()
//	{
//		//先进行++运算
//		m_Num++;
//
//		//再将自身作返回
//		return *this;
//	}
//
//	//重载后置++运算符
//	//void operator++(int)	int代表占位参数，可以用于区分前置和后置递增
//	MyInteger operator++(int)
//	{
//		//先 记录当时结果
//		MyInteger tmp = *this;
//		//后 递增
//		m_Num++;
//		//最后将记录结果作返回
//		return tmp;
//	}
//
//private:
//	int m_Num;
//};
//
////重载<<运算符
//ostream& operator<<(ostream& cout, MyInteger myint)
//{
//	cout << myint.m_Num;
//	return cout;
//}
//
//void test01()
//{
//	MyInteger myint;
//
//	cout << ++(++myint) << endl;
//	cout << myint << endl;
//}
//
//void test02()
//{
//	MyInteger myint;
//
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	//int a = 0;
//	//cout << ++(++a) << endl;
//	//cout << a << endl;
//
//	return 0;
//}

//赋值运算符重载

//class Person
//{
//public:
//
//	Person(int age)
//	{
//		m_Age = new int(age);
//	}
//
//	~Person()
//	{
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//	}
//
//	//重载赋值运算符
//	Person& operator=(Person& p)
//	{
//		//编译器是提供浅拷贝
//		//m_Age = p.m_Age;
//
//
//		//应该先判断是否有属性在堆区，如果有，先释放干净，然后再深拷贝
//		if (m_Age != NULL)
//		{
//			delete m_Age;
//			m_Age = NULL;
//		}
//
//		//深拷贝
//		m_Age = new int(*p.m_Age);
//
//
//		//返回对象本身
//		return *this;
//	}
//
//	int* m_Age;
//};
//
//void test01()
//{
//	Person p1(18);
//
//	Person p2(20);
//
//	Person p3(30);
//
//	p3 = p2 = p1;//赋值操作
//
//	cout << "p1的年龄为：" << *p1.m_Age << endl;
//
//	cout << "p2的年龄为：" << *p2.m_Age << endl;
//
//	cout << "p3的年龄为：" << *p3.m_Age << endl;
//}
//
//int main()
//{
//	test01();
//
//	//int a = 10;
//	//int b = 20;
//	//int c = 20;
//
//	//c = b = a;
//
//	//cout << "a = " << a << endl;
//	//cout << "b = " << b << endl;
//	//cout << "c = " << c << endl;
//
//	return 0;
//}

//重载关系运算符

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_Name = name;
//		m_Age = age;
//	}
//
//	//重载==号
//	bool operator==(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	bool operator!=(Person& p)
//	{
//		if (this->m_Name == p.m_Name && this->m_Age == p.m_Age)
//		{
//			return false;
//		}
//		return true;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1和p2是相等的" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是不相等的" << endl;
//	}
//
//
//	if (p1 != p2)
//	{
//		cout << "p1和p2是不相等的" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是相等的" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//函数调用运算符重载

//打印输出类
class MyPrint
{
public:

	//重载函数调用运算符
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void MyPrint02(string test)
{
	cout << test << endl;
}

void test01()
{
	MyPrint myPrint;

	myPrint("hello world");//由于使用起来非常类似于函数调用，因此称为仿函数

	MyPrint02("hello world");
}

//仿函数非常灵活，没有固定的写法
//加法类

class MyAdd
{
public:

	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};

void test02()
{
	MyAdd myadd;
	int ret = myadd(100, 100);
	cout << "ret = " << ret << endl;

	//匿名函数对象
	cout << MyAdd()(100, 100) << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}