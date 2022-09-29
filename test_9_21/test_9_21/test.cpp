#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//vector容器存放内置数据类型

//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//创建了一个vector容器，数组
//	vector<int> v;
//
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//通过迭代器访问容器中的数据
//	//vector<int>::iterator itBegin = v.begin();//起始迭代器 指向容器中第一个元素
//	//vector<int>::iterator itEnd = v.end();//结束迭代器 指向容器中最后一个元素下一个位置
//
//	////第一种遍历方式
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//第二种遍历方式
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//第三种遍历方式 利用STL提供遍历算法
//	for_each(v.begin(), v.end(), myPrint);
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector容器中存放自定义数据类型
//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	string m_Name;
//	int m_Age;
//};
//
//void test01()
//{
//	vector<Person> v;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	//向容器中添加数据
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//遍历容器中数据
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "姓名：" << (*it).m_Name << " 年龄：" << (*it).m_Age << endl;
//		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
//	}
//}
//
////存放自定义数据类型 指针
//void test02()
//{
//	vector<Person*> v;
//
//	Person p1("aaa", 10);
//	Person p2("bbb", 20);
//	Person p3("ccc", 30);
//	Person p4("ddd", 40);
//	Person p5("eee", 50);
//
//	//向容器中添加数据
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//遍历容器
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "::姓名：" << (*it)->m_Name << " 年龄：" << (*it)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//容器嵌套容器
//void test01()
//{
//	vector<vector<int>> v;
//
//	//创建小容器
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	//向小容器中添加数据
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	//将小容器插入到大容器中
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//通过大容器，把所有数据遍历一遍
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it) ---- 容器 vector<int>
//		for (vector<int>::iterator vit = (*it).begin(); vit != (*it).end(); vit++)
//		{
//			cout << *vit << " ";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string的构造函数
//void test01()
//{
//	string s1;//默认构造
//
//	const char* str = "hello world";
//	string s2(str);
//
//	cout << "s2 = " << s2 << endl;
//
//	string s3(s2);
//	cout << "s3 = " << s3 << endl;
//
//	string s4(10, 'a');
//	cout << "s4 = " << s4 << endl;
//
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string赋值操作

//void test01()
//{
//	string str1;
//	str1 = "hello world";
//	cout << "str1 = " << str1 << endl;
//
//	string str2;
//	str2 = str1;
//	cout << "str2 = " << str2 << endl;
//
//	string str3;
//	str3 = 'a';
//	cout << "str3 = " << str3 << endl;
//
//	string str4;
//	str4.assign("hello C++");
//	cout << "str4 = " << str4 << endl;
//
//	string str5;
//	str5.assign("hello C++", 5);//把字符串前5个字符赋给当前字符串
//	cout << "str5 = " << str5 << endl;
//
//	string str6;
//	str6.assign(str5);
//	cout << "str6 = " << str6 << endl;
//
//	string str7;
//	str7.assign(10, 'w');
//	cout << "str7 = " << str7 << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string字符串拼接

//void test01()
//{
//	string str1 = "我";
//	str1 += "爱玩游戏";
//	cout << "str1 = " << str1 << endl;
//
//	str1 += ':';
//	cout << "str1 = " << str1 << endl;
//
//	string str2 = "LOL DNF";
//	str1 += str2;
//	cout << "str1 = " << str1 << endl;
//
//	string str3 = "I";
//	str3.append(" love ");
//	cout << "str3 = " << str3 << endl;
//
//	str3.append("game abcde", 4);
//	//I love game
//	cout << "str3 = " << str3 << endl;
//
//	//str3.append(str2);
//
//	//str3.append(str2, 0, 3);//只截取到LOL
//	str3.append(str2, 4, 3);//只截取 DNF,    参数2  从哪个位置开始截取，参数3  截取字符个数
//	cout << "str3 = " << str3 << endl;
//
//
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//字符串查找和替换

////1.查找
//void test01()
//{
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "未找到字符串" << endl;
//	}
//	else
//	{
//		cout << "找到字符串，pos = " << pos << endl;
//	}
//
//
//	//rfind 和 find 区别
//	//rfind从右往左查找	find从左往右查找
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//}
//
////2.替换
//void test02()
//{
//	string str1 = "abcdefg";
//
//	//从 1号位置起 3个字符 替换为"1111"
//	str1.replace(1, 3, "1111");
//
//	cout << "str1 = " << str1 << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//字符串比较

//void test01()
//{
//	string str1 = "hello";
//	string str2 = "xello";
//
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 等于 str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1 大于 str2" << endl;
//	}
//	else
//	{
//		cout << "str1 小于 str2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string 字符存取
//void test01()
//{
//	string str = "hello";
//
//	//cout << "str = " << str << endl;
//
//	//1.通过 [] 访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	//2.通过at方式访问单个字符
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//修改单个字符
//	str[0] = 'x';
//	//xello
//	cout << "str = " << str << endl;
//
//	str.at(1) = 'x';
//	//xxllo
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//字符串 插入和删除
//void test01()
//{
//	string str = "hello";
//
//	//插入
//	str.insert(1, "111");
//	//h111ello
//	cout << "str = " << str << endl;
//
//	//删除
//	str.erase(1, 3);
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string求子串

//void test01()
//{
//	string str = "abcdef";
//
//	string subStr = str.substr(1, 3);
//
//	cout << "subStr = " << subStr << endl;
//}
//
////实用操作
//void test02()
//{
//	string email = "zhangsan@sina.com";
//
//	//从邮件地址中 获取 用户名信息
//
//	int pos = email.find("@");//8
//	cout << pos << endl;
//
//	string usrName = email.substr(0, pos);
//
//	cout << usrName << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//vector容器构造

//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int> v1;//默认构造 无参构造
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	//通过区间方式进行构造
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n个elem方式构造
//	vector<int>v3(10, 100);
//	printVector(v3);
//
//	//拷贝构造
//	vector<int>v4(v3);
//	printVector(v4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector赋值

//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	//赋值	operator=
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	//n个elem 方式赋值
//	vector<int>v4;
//	v4.assign(10, 100);
//	printVector(v4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector容器的容量和大小操作

//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	printVector(v1);
//
//	if (v1.empty())//为真 代表容器为空
//	{
//		cout << "v1为空" << endl;
//	}
//	else
//	{
//		cout << "v1不为空" << endl;
//		cout << "v1的容量为：" << v1.capacity() << endl;
//		cout << "v1的大小为：" << v1.size() << endl;
//	}
//
//	//重新指定大小
//	v1.resize(15, 100);//利用重载版本，可以指定默认填充值，参数2
//	printVector(v1);//如果重新指定的比原来长了，默认用0填充新的位置
//
//	v1.resize(5);
//	printVector(v1);//如果重新制定的比原来短了，超出部分会删除掉
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector插入和删除

//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	vector<int>v1;
//	//尾插
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	//遍历
//	printVector(v1);
//
//	//尾删
//	v1.pop_back();
//	printVector(v1);
//
//	//插入	第一个参数是迭代器
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	//删除	参数也是迭代器
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//清空
//	//v1.erase(v1.begin(), v1.end());
//	v1.clear();
//	printVector(v1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector容器 数据存取

//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//利用[]方式访问数组中元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//利用at方式访问元素
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	//获取第一个元素
//	cout << "第一个元素为：" << v1.front() << endl;
//
//	//获取最后一个元素
//	cout << "最后一个元素为：" << v1.back() << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector容器互换

//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////1.基本使用
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "交换前：" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "交换后：" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
////2.实际用途
////巧用swap可以收缩内存空间
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	v.resize(3);//重新指定大小
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//
//	//巧用swap收缩内存
//	vector<int>(v).swap(v);//vector<int>(v) - 匿名对象
//	cout << "v的容量为：" << v.capacity() << endl;
//	cout << "v的大小为：" << v.size() << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//vector容器 预留空间
void test01()
{
	vector<int>v;

	//利用reserve预留空间
	v.reserve(100000);

	int num = 0;//统计开辟次数
	int* p = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v.push_back(i);

		if (p != &v[0])
		{
			p = &v[0];
			num++;
		}
	}

	cout << "num = " << num << endl;
}

int main()
{
	test01();
	return 0;
}