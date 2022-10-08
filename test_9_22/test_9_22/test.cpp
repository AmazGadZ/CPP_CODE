#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>//标准算法头文件
#include <vector>
#include <ctime>
#include <stack>
#include <queue>
#include <list>
#include <set>

//deque构造函数

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;//容器中的数据不可以修改了
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	deque<int>d2(d1.begin(), d1.end());
//	printDeque(d2);
//
//	deque<int>d3(10, 100);
//	printDeque(d3);
//
//	deque<int>d4(d3);
//	printDeque(d4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque容器赋值操作

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	//operator= 赋值
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	//assign 赋值
//	deque<int>d3;
//	d3.assign(d1.begin(), d1.end());
//	printDeque(d3);
//
//	deque<int>d4;
//	d4.assign(10, 100);
//	printDeque(d4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque容器大小操作

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d1;
//	for (int i = 0; i < 10; i++)
//	{
//		d1.push_back(i);
//	}
//	printDeque(d1);
//
//	if (d1.empty())
//	{
//		cout << "d1为空" << endl;
//	}
//	else
//	{
//		cout << "d1不为空" << endl;
//		cout << "d1的大小为：" << d1.size() << endl;
//		//deque容器没有容量概念
//	}
//
//	//重新指定大小
//	d1.resize(15, 1);
//	printDeque(d1);
//
//	d1.resize(5);
//	printDeque(d1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque容器插入和删除

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////两端操作
//void test01()
//{
//	deque<int>d1;
//
//	//尾插
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//头插
//	d1.push_front(100);
//	d1.push_front(200);
//	
//	//200 100 10 20
//	printDeque(d1);
//
//	//尾删
//	d1.pop_back();
//	//200 100 10
//	printDeque(d1);
//
//	//头删
//	d1.pop_front();
//	//100 10
//	printDeque(d1);
//}
//
//void test02()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	//200 100 10 20
//	printDeque(d1);
//
//	//insert插入
//	d1.insert(d1.begin(), 1000);
//	//1000 200 100 10 20
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//	//10000 10000 1000 200 100 10 20
//	printDeque(d1);
//
//	//按照区间插入
//	deque<int>d2;
//	d2.push_back(1);
//	d2.push_back(2);
//	d2.push_back(3);
//
//	d1.insert(d1.begin(), d2.begin(), d2.end());
//	//1 2 3 10000 10000 1000 200 100 10 20
//	printDeque(d1);
//}
//
//void test03()
//{
//	deque<int>d1;
//	d1.push_back(10);
//	d1.push_back(20);
//	d1.push_front(100);
//	d1.push_front(200);
//
//	//删除
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	//200 10 20
//	printDeque(d1);
//
//	//按区间方式删除
//	//d1.erase(d1.begin(), d1.end());
//	//清空
//	d1.clear();
//	printDeque(d1);
//
//}
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}


//deque容器数据存取

//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	//通过[]方式访问元素
//	//300 200 100 10 20 30
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	//通过at方式访问元素
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "第一个元素为：" << d.front() << endl;
//	cout << "最后一个元素为：" << d.back() << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque容器排序

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	deque<int>d;
//	d.push_back(10);
//	d.push_back(20);
//	d.push_back(30);
//	d.push_front(100);
//	d.push_front(200);
//	d.push_front(300);
//
//	//300 200 100 10 20 30
//	printDeque(d);
//
//	//排序	默认排序规则 从小到大 升序
//	//对于支持随机访问的迭代器的容器，都可以利用sort算法直接对其进行排序
//	//vector容器也可以利用 sort进行排序
//	sort(d.begin(), d.end());
//	cout << "排序后：" << endl;
//	printDeque(d);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除最低分，取平均分

//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//
//	string m_Name;//姓名
//	int m_Score;//平均分
//};
//
//void createPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "选手";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//
//		//将创建的Person对象 放入到容器中
//		v.push_back(p);
//	}
//}
//
////打分
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//将评委的分数 放入到deque容器中
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;//60~100
//			d.push_back(score);
//		}
//
//		//cout << "选手：" << it->m_Name << " 打分：" << endl;
//		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		//{
//		//	cout << *dit << " ";
//		//}
//		//cout << endl;
//
//		//排序
//		sort(d.begin(), d.end());
//
//		//去除最高和最低分
//		d.pop_back();
//		d.pop_front();
//
//		//取平均分
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;//累加每个评委的分数
//		}
//
//		int avg = sum / d.size();
//
//		//将平均分 赋值给选手身上
//		it->m_Score = avg;
//	}
//}
//
//void showScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "姓名：" << it->m_Name << " 平均分：" << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	//随机数种子
//	srand((unsigned int)time(NULL));
//
//	//1.创建5名选手
//	vector<Person>v;//存放选手的容器
//	createPerson(v);
//
//	//测试
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "姓名：" << (*it).m_Name << " 分数：" << (*it).m_Score << endl;
//	//}
//
//	//2.给5名选手打分
//	setScore(v);
//
//	//3.显示最后得分
//	showScore(v);
//
//	return 0;
//}


//栈stack容器

//void test01()
//{
//	//特点：符合先进后出数据结构
//	stack<int>s;
//
//	//入栈
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	cout << "栈的大小：" << s.size() << endl;
//
//	//只要栈不为空，查看栈顶，并且执行出栈操作
//	while (!s.empty())
//	{
//		//查看栈顶元素
//		cout << "栈顶元素为：" << s.top() << endl;
//
//		//出栈
//		s.pop();
//	}
//
//	cout << "栈的大小：" << s.size() << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//队列Queue
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
//	//创建队列
//	queue<Person>q;
//
//	//准备数据
//	Person p1("唐僧", 30);
//	Person p2("孙悟空", 1000);
//	Person p3("猪八戒", 900);
//	Person p4("沙僧", 800);
//
//	//入队
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	cout << "队列大小为：" << q.size() << endl;
//
//	//判断只要队列不为空，查看队头，查看队尾，出队
//	while (!q.empty())
//	{
//		//查看队头
//		cout << "队头元素 --- 姓名：" << q.front().m_Name << " 年龄：" << q.front().m_Age << endl;
//
//		//查看队尾
//		cout << "队尾元素 --- 姓名：" << q.back().m_Name << " 年龄：" << q.back().m_Age << endl;
//
//		//出队
//		q.pop();
//	}
//
//	cout << "队列大小为：" << q.size() << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list容器构造函数

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//创建list容器
//	list<int>L1;
//
//	//添加数据
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//遍历容器
//	printList(L1);
//
//	//区间方式构造
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//拷贝构造
//	list<int>L3(L2);
//	printList(L3);
//
//	//n个elem
//	list<int>L4(10, 1000);
//	printList(L4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list容器赋值和交换

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////赋值
//void test01()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	list<int>L2;
//	L2 = L1;//operator= 赋值
//	printList(L2);
//
//	list<int>L3;
//	L3.assign(L2.begin(), L2.end());
//	printList(L2);
//
//	list<int>L4;
//	L4.assign(10, 100);
//	printList(L4);
//}
//
////交换
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	list<int>L2;
//	L2.assign(10, 100);
//
//	cout << "交换前：" << endl;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "交换后：" << endl;
//	printList(L1);
//	printList(L2);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//list容器大小操作

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	printList(L1);
//
//	//判断容器是否为空
//	if (L1.empty())
//	{
//		cout << "L1为空" << endl;
//	}
//	else
//	{
//		cout << "L1不为空" << endl;
//		cout << "L1的元素个数为：" << L1.size() << endl;
//	}
//
//	//重新指定大小
//	L1.resize(10, 10000);
//	printList(L1);
//
//	L1.resize(2);
//	printList(L1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list容器插入和删除

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	list<int>L;
//
//	//尾插
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//头插
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	//300 200 100 10 20 30
//	printList(L);
//
//	//尾删
//	L.pop_back();
//	//300 200 100 10 20
//	printList(L);
//
//	//头删
//	L.pop_front();
//	//200 100 10 20
//	printList(L);
//
//	//insert插入
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	//200 1000 100 10 20
//	printList(L);
//
//	//删除
//	it = L.begin();
//	L.erase(++it);
//	//200 100 10 20
//	printList(L);
//
//	//移除
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	printList(L);
//
//	//清空
//	L.clear();
//	printList(L);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list容器	数据存取

//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//L1[0]	不可以用[]访问list容器中的元素
//
//	//L1.at(0)	不可以用at方式访问list容器中的元素
//
//	//原因是list本质是链表，不使用连续的线性空间存储数据，迭代器也是不支持随机访问的
//	
//	cout << "第一个元素为：" << L1.front() << endl;
//	cout << "最后一个元素为：" << L1.back() << endl;
//
//	//验证迭代器是不支持随机访问的
//	list<int>::iterator it = L1.begin();
//	it++;//支持双向
//	it--;
//	//it = it + 1;//不支持随机访问
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list容器反转和排序

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	//反转
//	list<int>L1;
//
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "反转前：" << endl;
//	printList(L1);
//
//	//反转后
//	L1.reverse();
//	cout << "反转后：" << endl;
//	printList(L1);
//}
//
//bool myCompare(int v1, int v2)
//{
//	//降序	就让第一个数 > 第二个数
//	return v1 > v2;
//}
//
////排序
//void test02()
//{
//	list<int>L1;
//
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	//排序
//	cout << "排序前：" << endl;
//	printList(L1);
//
//	//所有不支持随机访问迭代器的容器，不可以用标准算法
//	//不支持随机访问迭代器的容器，内部会提供对应一些算法
//	
//	//sort(L1.begin(), L1.end());//err
//
//	L1.sort();//默认排序规则 从小到大 升序
//	cout << "排序后：" << endl;
//	printList(L1);
//
//	L1.sort(myCompare);
//	printList(L1);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//list容器 排序案例 对于自定义数据类型 做排序

//按照年龄进行升序，如果年龄相同按照身高进行降序

//class Person
//{
//public:
//	Person(string name, int age, int height)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//		this->m_Height = height;
//	}
//
//	string m_Name;//姓名
//	int m_Age;//年龄
//	int m_Height;//身高
//};
//
////指定排序规则
//bool comparePerson(Person& p1, Person& p2)
//{
//	//按照年龄	升序
//	if (p1.m_Age == p2.m_Age)
//	{
//		//年龄相同 按照身高降序
//		return p1.m_Height > p2.m_Height;
//	}
//	else
//	{
//		return p1.m_Age < p2.m_Age;
//	}
//}
//
//void test01()
//{
//	list<Person>L;//创建容器
//
//	//准备数据
//	Person p1("刘备", 35, 175);
//	Person p2("曹操", 45, 180);
//	Person p3("孙权", 40, 170);
//	Person p4("赵云", 25, 190);
//	Person p5("张飞", 35, 160);
//	Person p6("关羽", 35, 200);
//
//	//插入数据
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
//	}
//
//	//排序
//	cout << "-------------------------------" << endl;
//	cout << "排序后：" << endl;
//
//	L.sort(comparePerson);
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//set容器构造和赋值

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//
//	//插入数据 只有insert方式
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//
//	//遍历容器
//	//set容器特点：所有元素插入时候自动被排序
//	//set容器不允许插入重复值
//	printSet(s1);
//
//	//拷贝构造
//	set<int>s2(s1);
//	printSet(s2);
//
//	//赋值
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//int main()
//{
//	test01();
//	return 0;
//}


//set容器 大小和交换

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////大小
//void test01()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//	//打印容器
//	printSet(s1);
//
//	//判断是否为空
//	if (s1.empty())
//	{
//		cout << "s1为空" << endl;
//	}
//	else
//	{
//		cout << "s1不为空" << endl;
//		cout << "s1的大小为：" << s1.size() << endl;
//	}
//}
//
////交换
//void test02()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//	set<int>s2;
//
//	//插入数据
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//
//	cout << "交换前：" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "交换后：" << endl;
//	s1.swap(s2);
//	printSet(s1);
//	printSet(s2);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//set容器 插入和删除

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void test01()
//{
//	set<int>s1;
//
//	//插入
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//
//	//遍历
//	printSet(s1);
//
//	//删除
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	//删除重载版本
//	s1.erase(30);
//	printSet(s1);
//
//	//清空
//	//s1.erase(s1.begin(), s1.end());
//	s1.clear();
//	printSet(s1);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//set容器 查找和统计

//void test01()
//{
//	//查找
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "找到元素：" << *pos << endl;
//	}
//	else
//	{
//		cout << "未找到元素" << endl;
//	}
//}
//
////统计
//void test02()
//{
//	set<int>s1;
//
//	//插入数据
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(30);
//
//	//统计30的个数
//	int num = s1.count(30);
//	//对于set而言 统计结果 要么是0 要么是1
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//set容器 和 multiset容器的区别
//void test01()
//{
//	set<int>s;
//
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second)
//	{
//		cout << "第一次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第一次插入失败" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "第二次插入成功" << endl;
//	}
//	else
//	{
//		cout << "第二次插入失败" << endl;
//	}
//
//	multiset<int>ms;
//	//允许插入重复值
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//	ms.insert(10);
//
//	for (multiset<int>::iterator it = ms.begin(); it != ms.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//pair队组的创建
//void test01()
//{
//	//第一种方式
//	pair<string, int>p("Tom", 20);
//
//	cout << "姓名：" << p.first << " 年龄：" << p.second << endl;
//
//	//第二种方式
//	pair<string, int>p2 = make_pair("Jerry", 30);
//	cout << "姓名：" << p2.first << " 年龄：" << p2.second << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//set容器排序

//class Mycompare
//{
//public:
//	bool operator()(int v1,int v2) const
//	{
//		return v1 > v2;
//	}
//};
//
//void test01()
//{
//	set<int>s1;
//
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(20);
//	s1.insert(50);
//	s1.insert(30);
//
//	for (set<int>::iterator it = s1.begin(); it != s1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//	//指定排序规则为从大到小
//	set<int, Mycompare>s2;
//
//	s2.insert(10);
//	s2.insert(40);
//	s2.insert(20);
//	s2.insert(50);
//	s2.insert(30);
//
//	for (set<int, Mycompare>::iterator it = s2.begin(); it != s2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//set容器排序，存放自定义数据类型

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

class comparePerson
{
public:
	bool operator()(const Person& p1, const Person& p2) const
	{
		//按照年龄 降序
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	//自定义数据类型 都会指定排序规则
	set<Person, comparePerson>s;

	//创建Person对象
	Person p1("刘备", 24);
	Person p2("关羽", 28);
	Person p3("张飞", 25);
	Person p4("赵云", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
	}
}

int main()
{
	test01();
	return 0;
}