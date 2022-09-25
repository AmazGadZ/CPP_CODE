#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//普通实现页面

////Java页面
//class Java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python页面
//class Python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////C++页面
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...（公共分类列表）" << endl;
//	}
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};


//继承实现页面

////公共页面类
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登录、注册...（公共头部）" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图...（公共底部）" << endl;
//	}
//	void left()
//	{
//		cout << "Java、Python、C++、...（公共分类列表）" << endl;
//	}
//};
//
//
////继承的好处：减少重复代码
////语法：class 子类 : 继承方式 父类
////子类 也称为 派生类
////父类 也成为 基类
//
////Java页面
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Java学科视频" << endl;
//	}
//};
//
////Python页面
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Python学科视频" << endl;
//	}
//};
//
////C++页面
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++学科视频" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java下载视频页面如下" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "------------------------" << endl;
//	cout << "Python下载视频页面如下" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "------------------------" << endl;
//	cout << "C++下载视频页面如下" << endl;
//	CPP cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//继承方式

////公共继承
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son1 :public Base1
//{
//public:
//
//	void func()
//	{
//		m_A = 10;//父类中的公共权限成员 到子类中依然是公共权限
//		m_B = 10;//父类中的保护权限成员 到子类中依然是保护权限
//		//m_C = 10;//父类中的私有权限成员 子类访问不到
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//到了Son1中，m_B是保护权限 类外访问不到
//}
//
////保护继承
//class Base1
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son2 :protected Base1
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类中公共成员，到子类中变为保护权限
//		m_B = 100;//父类中保护成员，到子类中变为保护权限
//		//m_C = 100;//父类中私有成员 子类访问不到
//	}
//};
//
//void test02()
//{
//	Son2 s1;
//	//s1.m_A = 1000;//在Son2中 m_A变为保护权限，因此类外访问不到
//	//s1.m_B = 1000;//在Son2中 m_B保护权限 不可以访问
//}
//
////私有权限
//class Base3
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son3 :private Base3
//{
//public:
//	void func()
//	{
//		m_A = 100;//父类中公共成员 到子类中变为 私有成员
//		m_B = 100;//父类中保护成员 到子类中变为 私有成员
//		//m_C = 100;//父类中私有成员，子类访问不到
//	}
//};
//
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000;//到了Son3中 m_A变为私有，即使是儿子，也访问不到
//		//m_B = 1000;//到了Son3中 m_A变为私有，即使是儿子，也访问不到
//	}
//};
//
//void test03()
//{
//	Son3 s1;
//	//s1.m_A = 1000;//到了Son3中 变为 私有成员 类外访问不到
//	//s1.m_B = 1000;//到了Son3中 变为 私有成员 类外访问不到
//}


//继承中的对象模型

//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
//class Son : public Base
//{
//public:
//
//	int m_D;
//};
//
////利用开发人员命令提示工具查看对象模型
////跳转盘符 G:
////跳转文件路径 cd 具体路径下
////查看命名
////cl /d1 reportSingleClassLayout类名 文件名
//
//void test01()
//{
//	//16
//	//父类中所有非静态成员属性都会被子类继承下去
//	//父类中私有成员属性 是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//继承中的构造和析构的顺序
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base构造函数" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base析构函数" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son构造函数" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;
//
//	//继承中的构造和析构顺序如下：
//	//先构造父类，再构造子类，析构的顺序与构造的顺序相反
//	Son s;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//继承中同名成员处理方式
//class Base
//{
//public:
//	Base()
//	{
//		m_A = 100;
//	}
//
//	void func()
//	{
//		cout << "Base - func()调用" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)调用" << endl;
//	}
//
//	int m_A;
//};
//
//class Son : public Base
//{
//public:
//
//	Son()
//	{
//		m_A = 200;
//	}
//
//	void func()
//	{
//		cout << "Son - func()调用" << endl;
//	}
//
//	int m_A;
//};
//
////同名成员属性处理
//void test01()
//{
//	Son s;
//	cout << "Son 下 m_A = " << s.m_A << endl;
//	//如果通过子类对象 访问到父类中同名成员，需要加作用域
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//}
//
////同名成员函数处理
//void test02()
//{
//	Son s;
//
//	s.func();//直接调用 调用是子类中的同名成员
//
//	//如何调用到父类中同名成员函数？
//	s.Base::func();
//
//	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//	//如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//	s.Base::func(100);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//继承中的同名静态成员处理方式

//class Base
//{
//public:
//
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Base - static void func()" << endl;
//	}
//
//	static void func(int a)
//	{
//		cout << "Base - static void func(int a)" << endl;
//	}
//};
//int Base::m_A = 100;
//
//class Son :public Base
//{
//public:
//	static int m_A;
//
//	static void func()
//	{
//		cout << "Son - static void func()" << endl;
//	}
//};
//int Son::m_A = 200;
//
////同名静态成员属性
//void test01()
//{
//	//1.通过对象访问
//	cout << "通过对象访问：" << endl;
//	Son s;
//	cout << "Son 下 m_A = " << s.m_A << endl;
//	cout << "Base 下 m_A = " << s.Base::m_A << endl;
//
//	//2.通过类名访问
//	cout << "通过类名访问：" << endl;
//	cout << "Son 下 m_A = " << Son::m_A << endl;
//	//第一个::代表通过类名方式访问	第二个::代表访问父类作用域下
//	cout << "Base 下 m_A = " << Son::Base::m_A << endl;
//}
//
////同名静态成员函数
//void test02()
//{
//	//1.通过对象访问
//	cout << "通过对象访问" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	//2.通过类名访问
//	cout << "通过类名访问" << endl;
//	Son::func();
//	Son::Base::func();
//
//	//子类出现和父类同名静态成员函数，也会隐藏父类中所有同名函数
//	//如果想访问父类中被隐藏同名成员，需要加作用域
//	Son::Base::func(100);
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}


//多继承语法

//class Base1
//{
//public:
//
//	Base1()
//	{
//		m_A = 100;
//	}
//
//	int m_A;
//};
//
//class Base2
//{
//public:
//
//	Base2()
//	{
//		m_A = 200;
//	}
//
//	int m_A;
//};
//
////子类 需要继承Base1和Base2
////语法：class 子类 :继承方式 父类1， 继承方式 父类2
//class Son :public Base1, public Base2
//{
//public:
//	Son()
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
//	Son s;
//
//	cout << "size of Son = " << sizeof(s) << endl;
//	//当父类中出现同名成员，需要加作用域区分
//	cout << "Base1::m_A = " << s.Base1::m_A << endl;
//	cout << "Base2::m_A = " << s.Base2::m_A << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//动物类

class Animal
{
public:
	int m_Age;
};

//利用虚继承 解决菱形继承的问题
//继承之前 加上关键字 virtual 变为虚继承
//Animal类称为 虚基类
//羊类
class Sheep :virtual public Animal
{

};

//驼类
class Tuo :virtual public Animal
{

};

//羊驼类
class SheepTuo :public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//当菱形继承，有两个父类拥有相同数据，需要加以作用域区分
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

	//这份数据我们知道 只要有一份就可以，菱形继承导致数据有两份，资源浪费
}

int main()
{
	test01();

	return 0;
}