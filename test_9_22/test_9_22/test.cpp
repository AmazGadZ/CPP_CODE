#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <deque>
#include <algorithm>//��׼�㷨ͷ�ļ�
#include <vector>
#include <ctime>
#include <stack>
#include <queue>
#include <list>
#include <set>

//deque���캯��

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		//*it = 100;//�����е����ݲ������޸���
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


//deque������ֵ����

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
//	//operator= ��ֵ
//	deque<int>d2;
//	d2 = d1;
//	printDeque(d2);
//
//	//assign ��ֵ
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


//deque������С����

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
//		cout << "d1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "d1��Ϊ��" << endl;
//		cout << "d1�Ĵ�СΪ��" << d1.size() << endl;
//		//deque����û����������
//	}
//
//	//����ָ����С
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


//deque���������ɾ��

//void printDeque(const deque<int>& d)
//{
//	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////���˲���
//void test01()
//{
//	deque<int>d1;
//
//	//β��
//	d1.push_back(10);
//	d1.push_back(20);
//
//	//ͷ��
//	d1.push_front(100);
//	d1.push_front(200);
//	
//	//200 100 10 20
//	printDeque(d1);
//
//	//βɾ
//	d1.pop_back();
//	//200 100 10
//	printDeque(d1);
//
//	//ͷɾ
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
//	//insert����
//	d1.insert(d1.begin(), 1000);
//	//1000 200 100 10 20
//	printDeque(d1);
//
//	d1.insert(d1.begin(), 2, 10000);
//	//10000 10000 1000 200 100 10 20
//	printDeque(d1);
//
//	//�����������
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
//	//ɾ��
//	deque<int>::iterator it = d1.begin();
//	it++;
//	d1.erase(it);
//	//200 10 20
//	printDeque(d1);
//
//	//�����䷽ʽɾ��
//	//d1.erase(d1.begin(), d1.end());
//	//���
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


//deque�������ݴ�ȡ

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
//	//ͨ��[]��ʽ����Ԫ��
//	//300 200 100 10 20 30
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d[i] << " ";
//	}
//	cout << endl;
//
//	//ͨ��at��ʽ����Ԫ��
//	for (int i = 0; i < d.size(); i++)
//	{
//		cout << d.at(i) << " ";
//	}
//	cout << endl;
//
//	cout << "��һ��Ԫ��Ϊ��" << d.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << d.back() << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//deque��������

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
//	//����	Ĭ��������� ��С���� ����
//	//����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
//	//vector����Ҳ�������� sort��������
//	sort(d.begin(), d.end());
//	cout << "�����" << endl;
//	printDeque(d);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��5��ѡ�֣�ѡ��ABCDE��10����ί�ֱ��ÿһ��ѡ�ִ�֣�ȥ����߷֣�ȥ����ͷ֣�ȡƽ����

//class Person
//{
//public:
//	Person(string name, int score)
//	{
//		this->m_Name = name;
//		this->m_Score = score;
//	}
//
//	string m_Name;//����
//	int m_Score;//ƽ����
//};
//
//void createPerson(vector<Person>& v)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0; i < 5; i++)
//	{
//		string name = "ѡ��";
//		name += nameSeed[i];
//
//		int score = 0;
//
//		Person p(name, score);
//
//		//��������Person���� ���뵽������
//		v.push_back(p);
//	}
//}
//
////���
//void setScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//����ί�ķ��� ���뵽deque������
//		deque<int>d;
//		for (int i = 0; i < 10; i++)
//		{
//			int score = rand() % 41 + 60;//60~100
//			d.push_back(score);
//		}
//
//		//cout << "ѡ�֣�" << it->m_Name << " ��֣�" << endl;
//		//for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		//{
//		//	cout << *dit << " ";
//		//}
//		//cout << endl;
//
//		//����
//		sort(d.begin(), d.end());
//
//		//ȥ����ߺ���ͷ�
//		d.pop_back();
//		d.pop_front();
//
//		//ȡƽ����
//		int sum = 0;
//		for (deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//		{
//			sum += *dit;//�ۼ�ÿ����ί�ķ���
//		}
//
//		int avg = sum / d.size();
//
//		//��ƽ���� ��ֵ��ѡ������
//		it->m_Score = avg;
//	}
//}
//
//void showScore(vector<Person>& v)
//{
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "������" << it->m_Name << " ƽ���֣�" << it->m_Score << endl;
//	}
//}
//
//int main()
//{
//	//���������
//	srand((unsigned int)time(NULL));
//
//	//1.����5��ѡ��
//	vector<Person>v;//���ѡ�ֵ�����
//	createPerson(v);
//
//	//����
//	//for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << "������" << (*it).m_Name << " ������" << (*it).m_Score << endl;
//	//}
//
//	//2.��5��ѡ�ִ��
//	setScore(v);
//
//	//3.��ʾ���÷�
//	showScore(v);
//
//	return 0;
//}


//ջstack����

//void test01()
//{
//	//�ص㣺�����Ƚ�������ݽṹ
//	stack<int>s;
//
//	//��ջ
//	s.push(10);
//	s.push(20);
//	s.push(30);
//	s.push(40);
//
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//
//	//ֻҪջ��Ϊ�գ��鿴ջ��������ִ�г�ջ����
//	while (!s.empty())
//	{
//		//�鿴ջ��Ԫ��
//		cout << "ջ��Ԫ��Ϊ��" << s.top() << endl;
//
//		//��ջ
//		s.pop();
//	}
//
//	cout << "ջ�Ĵ�С��" << s.size() << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//����Queue
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
//	//��������
//	queue<Person>q;
//
//	//׼������
//	Person p1("��ɮ", 30);
//	Person p2("�����", 1000);
//	Person p3("��˽�", 900);
//	Person p4("ɳɮ", 800);
//
//	//���
//	q.push(p1);
//	q.push(p2);
//	q.push(p3);
//	q.push(p4);
//
//	cout << "���д�СΪ��" << q.size() << endl;
//
//	//�ж�ֻҪ���в�Ϊ�գ��鿴��ͷ���鿴��β������
//	while (!q.empty())
//	{
//		//�鿴��ͷ
//		cout << "��ͷԪ�� --- ������" << q.front().m_Name << " ���䣺" << q.front().m_Age << endl;
//
//		//�鿴��β
//		cout << "��βԪ�� --- ������" << q.back().m_Name << " ���䣺" << q.back().m_Age << endl;
//
//		//����
//		q.pop();
//	}
//
//	cout << "���д�СΪ��" << q.size() << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list�������캯��

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
//	//����list����
//	list<int>L1;
//
//	//�������
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//��������
//	printList(L1);
//
//	//���䷽ʽ����
//	list<int>L2(L1.begin(), L1.end());
//	printList(L2);
//
//	//��������
//	list<int>L3(L2);
//	printList(L3);
//
//	//n��elem
//	list<int>L4(10, 1000);
//	printList(L4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list������ֵ�ͽ���

//void printList(const list<int>& L)
//{
//	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////��ֵ
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
//	L2 = L1;//operator= ��ֵ
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
////����
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
//	cout << "����ǰ��" << endl;
//	printList(L1);
//	printList(L2);
//
//	L1.swap(L2);
//	cout << "������" << endl;
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


//list������С����

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
//	//�ж������Ƿ�Ϊ��
//	if (L1.empty())
//	{
//		cout << "L1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "L1��Ϊ��" << endl;
//		cout << "L1��Ԫ�ظ���Ϊ��" << L1.size() << endl;
//	}
//
//	//����ָ����С
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


//list���������ɾ��

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
//	//β��
//	L.push_back(10);
//	L.push_back(20);
//	L.push_back(30);
//
//	//ͷ��
//	L.push_front(100);
//	L.push_front(200);
//	L.push_front(300);
//
//	//300 200 100 10 20 30
//	printList(L);
//
//	//βɾ
//	L.pop_back();
//	//300 200 100 10 20
//	printList(L);
//
//	//ͷɾ
//	L.pop_front();
//	//200 100 10 20
//	printList(L);
//
//	//insert����
//	list<int>::iterator it = L.begin();
//	L.insert(++it, 1000);
//	//200 1000 100 10 20
//	printList(L);
//
//	//ɾ��
//	it = L.begin();
//	L.erase(++it);
//	//200 100 10 20
//	printList(L);
//
//	//�Ƴ�
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	L.push_back(10000);
//	printList(L);
//	L.remove(10000);
//	printList(L);
//
//	//���
//	L.clear();
//	printList(L);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list����	���ݴ�ȡ

//void test01()
//{
//	list<int>L1;
//	L1.push_back(10);
//	L1.push_back(20);
//	L1.push_back(30);
//	L1.push_back(40);
//
//	//L1[0]	��������[]����list�����е�Ԫ��
//
//	//L1.at(0)	��������at��ʽ����list�����е�Ԫ��
//
//	//ԭ����list������������ʹ�����������Կռ�洢���ݣ�������Ҳ�ǲ�֧��������ʵ�
//	
//	cout << "��һ��Ԫ��Ϊ��" << L1.front() << endl;
//	cout << "���һ��Ԫ��Ϊ��" << L1.back() << endl;
//
//	//��֤�������ǲ�֧��������ʵ�
//	list<int>::iterator it = L1.begin();
//	it++;//֧��˫��
//	it--;
//	//it = it + 1;//��֧���������
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//list������ת������

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
//	//��ת
//	list<int>L1;
//
//	L1.push_back(20);
//	L1.push_back(10);
//	L1.push_back(50);
//	L1.push_back(40);
//	L1.push_back(30);
//
//	cout << "��תǰ��" << endl;
//	printList(L1);
//
//	//��ת��
//	L1.reverse();
//	cout << "��ת��" << endl;
//	printList(L1);
//}
//
//bool myCompare(int v1, int v2)
//{
//	//����	���õ�һ���� > �ڶ�����
//	return v1 > v2;
//}
//
////����
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
//	//����
//	cout << "����ǰ��" << endl;
//	printList(L1);
//
//	//���в�֧��������ʵ��������������������ñ�׼�㷨
//	//��֧��������ʵ��������������ڲ����ṩ��ӦһЩ�㷨
//	
//	//sort(L1.begin(), L1.end());//err
//
//	L1.sort();//Ĭ��������� ��С���� ����
//	cout << "�����" << endl;
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


//list���� ������ �����Զ����������� ������

//������������������������ͬ������߽��н���

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
//	string m_Name;//����
//	int m_Age;//����
//	int m_Height;//���
//};
//
////ָ���������
//bool comparePerson(Person& p1, Person& p2)
//{
//	//��������	����
//	if (p1.m_Age == p2.m_Age)
//	{
//		//������ͬ ������߽���
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
//	list<Person>L;//��������
//
//	//׼������
//	Person p1("����", 35, 175);
//	Person p2("�ܲ�", 45, 180);
//	Person p3("��Ȩ", 40, 170);
//	Person p4("����", 25, 190);
//	Person p5("�ŷ�", 35, 160);
//	Person p6("����", 35, 200);
//
//	//��������
//	L.push_back(p1);
//	L.push_back(p2);
//	L.push_back(p3);
//	L.push_back(p4);
//	L.push_back(p5);
//	L.push_back(p6);
//
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "������" << (*it).m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Height << endl;
//	}
//
//	//����
//	cout << "-------------------------------" << endl;
//	cout << "�����" << endl;
//
//	L.sort(comparePerson);
//	for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
//	{
//		cout << "������" << (*it).m_Name << " ���䣺" << it->m_Age << " ��ߣ�" << it->m_Height << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//set��������͸�ֵ

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
//	//�������� ֻ��insert��ʽ
//	s1.insert(10);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(30);
//
//	//��������
//	//set�����ص㣺����Ԫ�ز���ʱ���Զ�������
//	//set��������������ظ�ֵ
//	printSet(s1);
//
//	//��������
//	set<int>s2(s1);
//	printSet(s2);
//
//	//��ֵ
//	set<int>s3;
//	s3 = s2;
//	printSet(s3);
//}
//int main()
//{
//	test01();
//	return 0;
//}


//set���� ��С�ͽ���

//void printSet(set<int>& s)
//{
//	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////��С
//void test01()
//{
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//	//��ӡ����
//	printSet(s1);
//
//	//�ж��Ƿ�Ϊ��
//	if (s1.empty())
//	{
//		cout << "s1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "s1��Ϊ��" << endl;
//		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
//	}
//}
//
////����
//void test02()
//{
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(30);
//	s1.insert(40);
//
//	set<int>s2;
//
//	//��������
//	s2.insert(100);
//	s2.insert(200);
//	s2.insert(300);
//	s2.insert(400);
//
//	cout << "����ǰ��" << endl;
//	printSet(s1);
//	printSet(s2);
//
//	cout << "������" << endl;
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


//set���� �����ɾ��

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
//	//����
//	s1.insert(30);
//	s1.insert(10);
//	s1.insert(20);
//	s1.insert(40);
//
//	//����
//	printSet(s1);
//
//	//ɾ��
//	s1.erase(s1.begin());
//	printSet(s1);
//
//	//ɾ�����ذ汾
//	s1.erase(30);
//	printSet(s1);
//
//	//���
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


//set���� ���Һ�ͳ��

//void test01()
//{
//	//����
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//
//	set<int>::iterator pos = s1.find(30);
//
//	if (pos != s1.end())
//	{
//		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
//	}
//	else
//	{
//		cout << "δ�ҵ�Ԫ��" << endl;
//	}
//}
//
////ͳ��
//void test02()
//{
//	set<int>s1;
//
//	//��������
//	s1.insert(10);
//	s1.insert(30);
//	s1.insert(20);
//	s1.insert(40);
//	s1.insert(30);
//	s1.insert(30);
//
//	//ͳ��30�ĸ���
//	int num = s1.count(30);
//	//����set���� ͳ�ƽ�� Ҫô��0 Ҫô��1
//	cout << "num = " << num << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//set���� �� multiset����������
//void test01()
//{
//	set<int>s;
//
//	pair<set<int>::iterator, bool> ret = s.insert(10);
//
//	if (ret.second)
//	{
//		cout << "��һ�β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "��һ�β���ʧ��" << endl;
//	}
//
//	ret = s.insert(10);
//	if (ret.second)
//	{
//		cout << "�ڶ��β���ɹ�" << endl;
//	}
//	else
//	{
//		cout << "�ڶ��β���ʧ��" << endl;
//	}
//
//	multiset<int>ms;
//	//��������ظ�ֵ
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


//pair����Ĵ���
//void test01()
//{
//	//��һ�ַ�ʽ
//	pair<string, int>p("Tom", 20);
//
//	cout << "������" << p.first << " ���䣺" << p.second << endl;
//
//	//�ڶ��ַ�ʽ
//	pair<string, int>p2 = make_pair("Jerry", 30);
//	cout << "������" << p2.first << " ���䣺" << p2.second << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//set��������

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
//	//ָ���������Ϊ�Ӵ�С
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


//set�������򣬴���Զ�����������

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
		//�������� ����
		return p1.m_Age > p2.m_Age;
	}
};

void test01()
{
	//�Զ����������� ����ָ���������
	set<Person, comparePerson>s;

	//����Person����
	Person p1("����", 24);
	Person p2("����", 28);
	Person p3("�ŷ�", 25);
	Person p4("����", 21);

	s.insert(p1);
	s.insert(p2);
	s.insert(p3);
	s.insert(p4);

	for (set<Person, comparePerson>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
	}
}

int main()
{
	test01();
	return 0;
}