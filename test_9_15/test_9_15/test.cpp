#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//1.单行注释

//2.多行注释
/*
	main是一个程序的入口
	每个程序都必须有这么一个函数
	有且仅有一个

*/

//int main()
//{
//	////在屏幕中输出hello world
//	//cout << "hello world" << endl;
//
//	//变量创建的语法：数据类型 变量名 = 变量初始值
//	int a = 10;
//
//	cout << "a=" << a << endl;
//
//	return 0;
//}

//常量的定义方式
//1.#define 宏常量
//2.const修饰的变量

//1.#define 宏常量
//#define Day 7

//int main()
//{
//	//Day = 14;//err, Day是常量，一旦修改就会报错
//	cout << "一周总共有" << Day << "天" << endl;
//
//
//	//2.const修饰的变量
//	const int month = 12;
//	//month = 24;//err,const修饰的变量也称为常量
//	cout << "一年总共有" << month << "个月份" << endl;
//	return 0;
//}


//int main()
//{
//	float f1 = 3.14f;
//	double d1 = 3.14;
//	cout << "f1 = " << f1 << endl;
//	cout << "d1 = " << d1 << endl;
//
//	float f2 = 3e2;//3 * 10^2
//	cout << "f2 = " << f2 << endl;
//
//	float f3 = 3e-2;
//	cout << "f3 = " << f3 << endl;
//	return 0;
//}

//int main()
//{
//	//1.C风格字符串
//	char str1[] = "hello world";
//	cout << str1 << endl;
//
//	//2.C++风格字符串
//	string str2 = "hello world";
//	cout << str2 << endl;
//  return 0;
//}

//int main()
//{
//  //bool类型0表示假，非0表示真
//	bool flag = true;
//	cout << flag << endl;
//
//	flag = false;
//	cout << flag << endl;
//
//	cout << "bool类型所占空间大小：" << sizeof(bool) << endl;
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	cout << "请给整型变量a赋值：" << endl;
//	cin >> a;
//	cout << "a = " << a << endl;
//
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int a = 0, b = 0, c = 0, tmp = 0;
//
//	for (n = 100; n < 1000; n++)
//	{
//		a = n % 10;
//		tmp = n / 10;
//		b = tmp % 10;
//		tmp = tmp / 10;
//		c = tmp % 10;
//		if (n == (a * a * a + b * b * b + c * c * c))
//			cout << n << endl;
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		int a = i % 10;
//		int tmp = i / 10;
//		int b = tmp % 10;
//		if (i % 7 == 0 || a == 7 || b == 7)
//			cout << "敲桌子" << endl;
//		else
//			cout << i << endl;
//	}
//	return 0;
//}

//int* func()
//{
//	//利用new关键字 可以将数据开辟到堆区
//	//指针 本质上也是一个局部变量，放在栈上，指针保存的数据是放在堆区
//	int* p = new int(10);
//	return p;
//}
//
//int main()
//{
//	//在堆区开辟数据
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}

////1.new的基本语法
//int* func()
//{
//	//在堆区创建整型数据
//	//new返回 该数据类型的指针
//	int* p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	//堆区的数据 由程序员管理开辟，程序员管理释放
//	//如果想释放堆区的数据，利用关键字 delete
//	delete p;
//	//cout << *p << endl;//内存已经被释放，再次访问就是非法操作，会报错
//}
//
////2.在堆区利用new开辟数据
//void test02()
//{
//	//创建10个整型数据的数组，在堆区
//	int* arr = new int[10];//10代表数组有10个元素
//
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//
//	for (int i = 0; i < 10; i++)
//	{
//		cout << arr[i] << endl;
//	}
//	//释放堆区数组
//	//释放数组的时候 要加[]才可以
//	delete[] arr;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}

//int main()
//{
//	//引用基本语法
//	//数据类型 &别名 = 原名
//
//	int a = 10;
//	//创建引用
//	int& b = a;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	b = 100;
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	//1.引用必须初始化
//	//int& b;//err,必须要初始化
//	int& b = a;
//	//2.引用在初始化后，不可以改变
//	int c = 20;
//	b = c;//赋值操作，而不是更改引用
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	return 0;
//}

////交换函数
//
////1.值传递
//void mySwap01(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////2.地址传递
//void mySwap02(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
////3.引用传递
//void mySwap03(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	//mySwap01(a, b);//值传递，形参不会修饰实参
//	//mySwap02(&a, &b);//地址传递
//	mySwap03(a, b);//引用传递
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}

////引用做函数的返回值
////1.不要返回局部变量的引用
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
////2.函数的调用可以作为左值
//int& test02()
//{
//	static int a = 10;//静态变量，存放在全局区，全局去上的数据在程序结束后，系统释放
//	return a;
//}
//
//int main()
//{
//	//int& ref = test01();//随机值
//
//	//cout << "ref = " << ref << endl;
//
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	test02() = 1000;//如果函数的返回值是个引用，这个函数调用可以作为左值
//	cout << "ref2 = " << ref2 << endl;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	//自动转换为int* const ref = &a;指针常量是指针指向不可改，也说明为什么引用不可更改
//	int& ref = a;
//	ref = 20;//内部发现ref是引用，自动帮我们转换为：*ref = 20;
//
//	cout << "a = " << a << endl;
//	cout << "ref = " << ref << endl;
//
//	return 0;
//}

////打印数据函数
//void showValue(const int& val)
//{
//	//val = 1000;
//	cout << "val = " << val << endl;
//}
//
//int main()
//{
//	//常量引用
//	//使用场景：用来修饰形参，防止误操作
//
//	//int a = 10;
//
//	////加上const之后 编译器将代码修改 int tmp = 10; const int& ref =tmp;
//	//const int& ref = 10;//引用必须引一块合法的内存空间
//	////ref = 30;//加入const之后变为只读，不可以修改
//	//cout << "ref = " << ref << endl;
//
//	int a = 100;
//	showValue(a);
//	cout << "a = " << a << endl;
//	return 0;
//}

////函数默认参数
//
////如果我们自己传入数据，就用自己的数据，如果没有，那么用默认值
////语法： 返回值类型 函数名(形参 = 默认值){}
//int func1(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//
//
////注意事项
////1.如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须要有默认值
////int func2(int a = 10, int b, int c, int d)
////{
////	return a + b + c + d;
////}
//
////2.如果函数声明有默认参数，函数实现就不能有默认参数
////声明和实现只能有一个有默认参数
//int func3(int a = 10, int b = 10);
//
//int func3(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	//cout << func1(10, 30) << endl;
//
//	cout << func3(10, 10) << endl;
//	return 0;
//}

////占位参数
////返回值类型 函数名(数据类型) {}
//
////目前阶段的占位参数 我们还用不到
////占位参数 还可以有默认参数
//void func(int a, int = 10)
//{
//	cout << "this is func" << endl;
//}
//
//int main()
//{
//	func(10);
//
//	return 0;
//}

////函数重载
////可以让函数名相同，提高复用性
//
////函数重载的满足条件
////1.同一个作用域下
////2.函数名称相同
////3.函数参数类型不同，或者个数不同，或者顺序不同
//void func()
//{
//	cout << "func 的调用" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a) 的调用" << endl;
//}
//
//void func(double a)
//{
//	cout << "func(double a) 的调用" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b) 的调用" << endl;
//}
//
//void func(double a, int b)
//{
//	cout << "func(double a, int b) 的调用" << endl;
//}
//
////注意事项
////函数的返回值不可以作为函数重载的条件
//
////int func(double a, int b)
////{
////	cout << "func(double a, int b) 的调用" << endl;
////}
//
//int main()
//{
//	//func();
//	//func(10);
//	//func(3.14);
//	//func(10, 3.14);
//	func(3.14, 10);
//
//	return 0;
//}

//函数重载的注意事项
//1.引用作为重载的条件
void func(int& a)//int& a = 10; 不合法
{
	cout << "func(int& a)调用" << endl;
}

void func(const int& a)//const int& a =10; 合法
{
	cout << "func(const int& a)调用" << endl;
}

//2.函数重载碰到默认参数
void func2(int a, int b = 10)
{
	cout << "func(int a,int b) 的调用" << endl;
}

void func2(int a)
{
	cout << "func(int a) 的调用" << endl;
}

int main()
{
	//int a = 10;
	//func(a);

	//func(10);

	//func2(10);//当函数重载碰到默认参数，出现二义性，报错，尽量避免这种情况

	return 0;
}