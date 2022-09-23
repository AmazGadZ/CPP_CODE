#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

//const double PI = 3.14;
//
////设计一个圆类，求圆的周长
////圆求周长的公式: 2 * PI * 半径
//
////class 代表设计一个类，类后面紧跟着的就是类名称
//class Circle
//{
//	//访问权限
//	//公共权限
//public:
//
//	//属性
//	//半径
//	int m_r;
//
//	//行为
//	//获取圆的周长
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//通过圆类 创建具体的圆（对象）
//	//实例化 （通过一个类 创建一个对象的过程）
//	Circle c1;
//	//给圆对象 的属性进行赋值
//	c1.m_r = 10;
//
//	//2 * PI * 10 = 62.8
//	cout << "圆的周长为： " << c1.calculateZC() << endl;
//	return 0;
//}

//设计一个学生类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示学生的姓名和学号

//设计学生类
//class Student
//{
//public://公共权限
//
//	//类中的属性和行为 我们统一称为 成员
//	//属性 成员属性 成员变量
//	//行为 成员函数 成员方法
//
//	//属性
//	string m_Name;//姓名
//	int m_Id;//学号
//
//	//行为
//	//显示姓名和学号
//	void showStudent()
//	{
//		cout << "姓名：" << m_Name << " 学号：" << m_Id << endl;
//	}
//
//	//给姓名赋值
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//
//	//给学号赋值
//	void setId(int id)
//	{
//		m_Id = id;
//	}
//	
//};
//
//int main()
//{
//	//创建一个具体学生 实例化对象
//	Student s1;
//	//给s1对象 进行属性赋值操作
//	//s1.m_Name = "张三";
//	s1.setName("张三");
//	//s1.m_Id = 1;
//	s1.setId(1);
//	//显示学生信息
//	s1.showStudent();
//
//	Student s2;
//	s2.m_Name = "李四";
//	s2.m_Id = 2;
//	s2.showStudent();
//	return 0;
//}

//访问权限
//三种
//公共权限	public		成员 类内可以访问 类外可以访问
//保护权限	protected	成员 类内可以访问 类外不可以访问 儿子可以访问父亲中的保护内容
//私有权限	private		成员 类内可以访问 类外不可以访问 儿子不可以访问父亲的私有内容

//class Person
//{
//public:
//	//公共权限
//	string m_Name;//姓名
//
//protected:
//	//保护权限
//	string m_Car;//汽车
//
//private:
//	//私有权限
//	int m_Password;//银行卡密码
//
//public:
//	void func()
//	{
//		m_Name = "张三";
//		m_Car = "拖拉机";
//		m_Password = 123456;
//	}
//};
//
//int main()
//{
//	//实例化具体对象
//	Person p1;
//
//	p1.m_Name = "李四";
//	//p1.m_Car = "奔驰";//保护权限内容，在类外访问不到
//	//p1.m_Password = 123;//私有权限内容，类外访问不到
//	p1.func();
//	return 0;
//}

//class C1
//{
//	int m_A;//默认权限	是 私有
//};
//
//struct C2
//{
//	int m_A;//默认权限	是 公共
//};
//
//int main()
//{
//	//struct 和 class 区别
//	//struct 默认权限是 公共 public
//	//class  默认权限是 私有 private
//	C1 c1;
//	//c1.m_A = 100;//在class里默认权限	私有，因此类外不可以访问
//
//	C2 c2;
//	c2.m_A = 100;//在struct默认的权限为公共，因此可以访问
//
//	return 0;
//}

//成员属性设置为私有
//1.可以自己控制读写权限
//2.对于写可以检测数据的有效性

//设计人类
//class Person
//{
//public:
//	//设置姓名
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//获取姓名
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//获取年龄 可读可写 如果想修改（年龄的范围必须是0 ~ 150之间）
//	int getAge()
//	{
//		//m_Age = 0;//初始化为0岁
//		return m_Age;
//	}
//
//	//设置年龄
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			m_Age = 0;
//			cout << "你这个老妖精！" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//设置情人 只写
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	//姓名 可读可写
//	string m_Name;
//	//年龄 只读
//	int m_Age;
//	//情人 只写
//	string m_Lover;
//};
//
//int main()
//{
//	Person p;
//	p.setName("张三");
//	cout << "姓名为：" << p.getName() << endl;
//
//	//p.m_Age = 18;
//	p.setAge(18);
//	cout << "年龄为：" << p.getAge() << endl;
//
//	p.setLover("李四");
//	//cout << "情人为： " << p.m_Lover << endl;//是不可以访问的
//	return 0;
//}

//立方体类设计
//1.创建立方体类
//2.设计属性
//3.设计行为 获取立方体面积和体积
//4.分别利用全局函数和成员函数 判断两个立方体是否相等

//class Cube
//{
//public:
//	//设置长
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//获取长
//	int getL()
//	{
//		return m_L;
//	}
//	//设置宽
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//获取宽
//	int getW()
//	{
//		return m_W;
//	}
//	//设置高
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//获取高
//	int getH()
//	{
//		return m_H;
//	}
//	//获取立方体面积
//	int calculateS()
//	{
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	//获取立方体体积
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//	//利用成员函数判断两个立方体是否相等
//	bool isSameByClass(Cube& c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;//长
//	int m_W;//宽
//	int m_H;//高
//};
//
////利用全局函数判断 两个立方体是否相等
//bool isSame(Cube& c1, Cube& c2)
//{
//	if (c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH())
//	{
//		return true;
//	}
//
//	return false;
//}
//
//int main()
//{
//	//创建立方体对象
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	//600
//	cout << "c1的面积为：" << c1.calculateS() << endl;
//	//1000
//	cout << "c1的体积为：" << c1.calculateV() << endl;
//
//	//创建第二个立方体
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	
//	//利用全局函数判断
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "c1和c2是不相等的" << endl;
//	}
//
//	//利用成员函数判断
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "成员函数判断：c1和c2是相等的" << endl;
//	}
//	else
//	{
//		cout << "成员函数判断：c1和c2是不相等的" << endl;
//	}
//	return 0;
//}

//点和圆关系案例

//点类
//class Point
//{
//public:
//	//设置x
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//获取x
//	int getX()
//	{
//		return m_X;
//	}
//	//设置y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//获取y
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

//圆类
//class Circle
//{
//public:
//	//设置半径
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//获取半径
//	int getR()
//	{
//		return m_R;
//	}
//	//设置圆心
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//获取圆心
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//半径
//
//	//在类中可以让另一个类作为本类中的成员
//	Point m_Center;//圆心
//};

//判断点和圆的关系
//void isInCircle(Circle& c, Point& p)
//{
//	//计算两点之间距离 平方
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	//计算半径的平方
//	int rDistance = c.getR() * c.getR();
//	
//	//判断关系
//	if (distance == rDistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main()
//{
//	//创建圆
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	//创建点
//	Point p;
//	p.setX(10);
//	p.setY(9);
//
//	//判断关系
//	isInCircle(c, p);
//
//	return 0;
//}

//对象的初始化和清理
//class Person
//{
//public:
//	//1.构造函数 进行初始化操作
//	//没有返回值 不用写void
//	//函数名 与类名相同
//	//构造函数可以有参数，可以发生重载
//	//创建对象的时候，构造函数会自动调用，而且只调用一次
//	Person()
//	{
//		cout << "Person构造函数的调用" << endl;
//	}
//
//	//2.析构函数 进行清理的操作
//	//没有返回值 不写void
//	//函数名和类名相同 在名称前加~
//	//析构函数不可以有参数，不可以发生重载
//	//对象在销毁前 会自动调用析构函数，而且只会diaoyongyici
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//};
//
//
////构造和析构都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
//void test01()
//{
//	Person p;//在栈上的数据，test01执行完毕后，释放这个对象
//}
//
//int main()
//{
//	test01();
//
//	//Person p;
//
//	return 0;
//}

//1.构造函数的分类及调用
//分类
//按照参数分类	无参构造（默认构造）和有参构造
//按照类型分类	普通构造和拷贝构造
//class Person
//{
//public:
//	//构造函数
//	Person()
//	{
//		cout << "Person的无参构造函数调用" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person的有参构造函数调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person& p)
//	{
//		//将传入的人身上的所有属性，拷贝到我身上
//		age = p.age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int age;
//};
//
////调用
//void test01()
//{
//	//1.括号法
//	//Person p1;//默认构造函数的调用
//	//Person p2(10);//有参构造函数
//	//Person p3(p2);//拷贝构造函数
//
//	//注意事项
//	//调用默认过早函数时候，不要加()
//	//因为下面这行代码，编译器会认为是一个函数的声明，不会认为在创建对象
//	//Person p1();
//	
//	//cout << "p2的年龄为：" << p2.age << endl;
//	//cout << "p3的年龄为：" << p3.age << endl;
//	
//	//2.显式法
//	//Person p1;
//	//Person p2 = Person(10);//有参构造
//	//Person p3 = Person(p2);//拷贝构造
//
//	//Person(10);//匿名对象	特点：当前行执行结束后，系统会立即回收掉匿名对象
//	//cout << "aaaaa" << endl;
//
//	//注意事项2
//	//不要利用拷贝构造函数 初始化匿名对象	编译器会认为Person(p3) === Person p3;对象声明
//	//Person(p3);
//
//	//3.隐式转换法
//	Person p4 = 10;//相当于写了 Person p4 = person(10);	有参构造
//	Person p5 = p4;//拷贝构造
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//拷贝构造函数调用时机

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person默认构造函数调用" << endl;
//	}
//
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person有参构造函数调用" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
////1.使用一个已经创建完毕的对象来初始化一个新对象
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2的年龄为：" << p2.m_Age << endl;
//}
//
////2.值传递的方式给函数参数传值
//void doWork(Person p)
//{
//
//}
//
//void test02()
//{
//	Person p;
//	doWork(p);
//
//}
//
////3.值方式返回局部对象
//Person doWork2()
//{
//	Person p1;
//	cout << (int*)&p1 << endl;
//	return p1;
//}
//
//void test03()
//{
//	Person p = doWork2();
//	cout << (int*)&p << endl;
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//
//	return 0;
//}

//构造函数的调用规则
//1.创建一个类，C++编译器会给每个类都添加至少3个函数
//默认构造	（空实现）
//析构函数	（空实现）
//拷贝构造	（值拷贝）

//2.如果我们写了有参构造函数，编译器就不再提供默认构造，但依然提供拷贝构造
//如果我们写了拷贝构造函数，编译器就不再提供其他普通构造函数
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person的默认构造函数调用" << endl;
//	//}
//
//	//Person(int age)
//	//{
//	//	m_Age = age;
//	//	cout << "Person的有参构造函数调用" << endl;
//	//}
//
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person的拷贝构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int m_Age;
//};
//
////void test01()
////{
////	Person p;
////	p.m_Age = 18;
////
////	Person p2(p);
////
////	cout << "p2的年龄为：" << p2.m_Age << endl;
////
////}
//
//void test02()
//{
//	//Person p;
//
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}

//深拷贝与浅拷贝

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person的默认构造函数调用" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person的有参构造函数调用" << endl;
//	}
//
//	//自己实现拷贝构造函数，解决浅拷贝带来的问题
//	Person(const Person& p)
//	{
//		cout << "Person拷贝构造函数调用" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;//编译器默认实现就是这行代码
//		//深拷贝操作
//
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//析构代码，将堆区开辟数据做释放操作
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	int m_Age;//年龄
//	int* m_Height;//身高
//};
//
//void test01()
//{
//	Person p1(18, 160);
//
//	cout << "p1的年龄为：" << p1.m_Age << " 身高为：" << *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p2的年龄为：" << p2.m_Age << " 身高为：" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//初始化列表
//class Person
//{
//public:
//
//	//传统初始化操作
//	//Person(int a, int b, int c)
//	//{
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//初始化列表初始化属性
//	Person(int a, int b, int c) :m_A(a), m_B(b), m_C(c)
//	{
//
//	}
//
//	int m_A;
//	int m_B;
//	int m_C;
//};
//
//void test01()
//{
//	//Person p(10, 20, 30);
//
//	Person p(30, 20, 10);
//	cout << "m_A = " << p.m_A << endl;
//	cout << "m_B = " << p.m_B << endl;
//	cout << "m_C = " << p.m_C << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//类对象作为类成员

//手机类
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone的构造函数调用" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//
//	//手机品牌名称
//	string m_PName;
//};
//
////人类
//class Person
//{
//public:
//
//	//Phone m_phone = pName; 隐式转换法
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	//姓名
//	string m_Name;
//	//手机
//	Phone m_Phone;
//};
//
////当其它类对象作为本类成员，构造时候先构造其它类对象，再构造自身，析构的顺序与构造相反
//
//void test01()
//{
//	Person p("张三", "苹果");
//
//	cout << p.m_Name << "拿着：" << p.m_Phone.m_PName << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//静态成员变量
//class Person
//{
//public:
//
//	//1.所有对象都共享同一份数据
//	//2.编译阶段就分配内存
//	//3.类内声明，类外初始化操作
//	static int m_A;
//
//	//静态成员变量也是有访问权限的
//private:
//	static int m_B;
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
//void test01()
//{
//	Person p;
//	//100
//	cout << p.m_A << endl;
//
//	Person p2;
//	p2.m_A = 200;
//
//	//200
//	cout << p.m_A << endl;
//}
//
//void test02()
//{
//	//静态成员变量 不属于某个对象上，所有对象都共享同一份数据
//	//因此静态成员变量有两种访问方式
//
//	//1.通过对象进行访问
//	//Person p;
//	//cout << p.m_A << endl;
//
//	//2.通过类名进行访问
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl;//类外访问不到私有静态成员变量
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}

//静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量

class Person
{
public:

	static void func()
	{
		m_A = 100;//静态成员函数 可以访问 静态成员变量
		//m_B = 200;//静态成员函数 不可以访问 非静态成员变量，无法区分到底是哪个对象的m_B属性
		cout << "static void func调用" << endl;
	}

	static int m_A;//静态成员变量
	int m_B;//非静态成员变量

	//静态成员函数也是有访问权限的
private:
	static void func2()
	{
		cout << "static void func2调用" << endl;
	}
};

int Person::m_A = 0;

//有两种访问方式
void test01()
{
	//1.通过对象访问
	Person p;
	p.func();

	//2.通过类名访问
	Person::func();

	//Person::func2();//类外访问不到私有静态成员函数
}

int main()
{
	test01();

	return 0;
}