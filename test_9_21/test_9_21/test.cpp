#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

//vector�������������������

//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//������һ��vector����������
//	vector<int> v;
//
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ͨ�����������������е�����
//	//vector<int>::iterator itBegin = v.begin();//��ʼ������ ָ�������е�һ��Ԫ��
//	//vector<int>::iterator itEnd = v.end();//���������� ָ�����������һ��Ԫ����һ��λ��
//
//	////��һ�ֱ�����ʽ
//	//while (itBegin != itEnd)
//	//{
//	//	cout << *itBegin << endl;
//	//	itBegin++;
//	//}
//
//	//�ڶ��ֱ�����ʽ
//	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	//{
//	//	cout << *it << endl;
//	//}
//
//	//�����ֱ�����ʽ ����STL�ṩ�����㷨
//	for_each(v.begin(), v.end(), myPrint);
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector�����д���Զ�����������
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
//	//���������������
//	v.push_back(p1);
//	v.push_back(p2);
//	v.push_back(p3);
//	v.push_back(p4);
//	v.push_back(p5);
//
//	//��������������
//	for (vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//cout << "������" << (*it).m_Name << " ���䣺" << (*it).m_Age << endl;
//		cout << "������" << it->m_Name << " ���䣺" << it->m_Age << endl;
//	}
//}
//
////����Զ����������� ָ��
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
//	//���������������
//	v.push_back(&p1);
//	v.push_back(&p2);
//	v.push_back(&p3);
//	v.push_back(&p4);
//	v.push_back(&p5);
//
//	//��������
//	for (vector<Person*>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << "::������" << (*it)->m_Name << " ���䣺" << (*it)->m_Age << endl;
//	}
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//����Ƕ������
//void test01()
//{
//	vector<vector<int>> v;
//
//	//����С����
//	vector<int> v1;
//	vector<int> v2;
//	vector<int> v3;
//	vector<int> v4;
//
//	//��С�������������
//	for (int i = 0; i < 4; i++)
//	{
//		v1.push_back(i + 1);
//		v2.push_back(i + 2);
//		v3.push_back(i + 3);
//		v4.push_back(i + 4);
//	}
//
//	//��С�������뵽��������
//	v.push_back(v1);
//	v.push_back(v2);
//	v.push_back(v3);
//	v.push_back(v4);
//
//	//ͨ�������������������ݱ���һ��
//	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		//(*it) ---- ���� vector<int>
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


//string�Ĺ��캯��
//void test01()
//{
//	string s1;//Ĭ�Ϲ���
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


//string��ֵ����

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
//	str5.assign("hello C++", 5);//���ַ���ǰ5���ַ�������ǰ�ַ���
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


//string�ַ���ƴ��

//void test01()
//{
//	string str1 = "��";
//	str1 += "������Ϸ";
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
//	//str3.append(str2, 0, 3);//ֻ��ȡ��LOL
//	str3.append(str2, 4, 3);//ֻ��ȡ DNF,    ����2  ���ĸ�λ�ÿ�ʼ��ȡ������3  ��ȡ�ַ�����
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


//�ַ������Һ��滻

////1.����
//void test01()
//{
//	string str1 = "abcdefgde";
//
//	int pos = str1.find("de");
//
//	if (pos == -1)
//	{
//		cout << "δ�ҵ��ַ���" << endl;
//	}
//	else
//	{
//		cout << "�ҵ��ַ�����pos = " << pos << endl;
//	}
//
//
//	//rfind �� find ����
//	//rfind�����������	find�������Ҳ���
//	pos = str1.rfind("de");
//
//	cout << "pos = " << pos << endl;
//}
//
////2.�滻
//void test02()
//{
//	string str1 = "abcdefg";
//
//	//�� 1��λ���� 3���ַ� �滻Ϊ"1111"
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


//�ַ����Ƚ�

//void test01()
//{
//	string str1 = "hello";
//	string str2 = "xello";
//
//	if (str1.compare(str2) == 0)
//	{
//		cout << "str1 ���� str2" << endl;
//	}
//	else if (str1.compare(str2) > 0)
//	{
//		cout << "str1 ���� str2" << endl;
//	}
//	else
//	{
//		cout << "str1 С�� str2" << endl;
//	}
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string �ַ���ȡ
//void test01()
//{
//	string str = "hello";
//
//	//cout << "str = " << str << endl;
//
//	//1.ͨ�� [] ���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str[i] << " ";
//	}
//	cout << endl;
//
//	//2.ͨ��at��ʽ���ʵ����ַ�
//	for (int i = 0; i < str.size(); i++)
//	{
//		cout << str.at(i) << " ";
//	}
//	cout << endl;
//
//	//�޸ĵ����ַ�
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


//�ַ��� �����ɾ��
//void test01()
//{
//	string str = "hello";
//
//	//����
//	str.insert(1, "111");
//	//h111ello
//	cout << "str = " << str << endl;
//
//	//ɾ��
//	str.erase(1, 3);
//	cout << "str = " << str << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//string���Ӵ�

//void test01()
//{
//	string str = "abcdef";
//
//	string subStr = str.substr(1, 3);
//
//	cout << "subStr = " << subStr << endl;
//}
//
////ʵ�ò���
//void test02()
//{
//	string email = "zhangsan@sina.com";
//
//	//���ʼ���ַ�� ��ȡ �û�����Ϣ
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


//vector��������

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
//	vector<int> v1;//Ĭ�Ϲ��� �޲ι���
//
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	printVector(v1);
//
//	//ͨ�����䷽ʽ���й���
//	vector<int>v2(v1.begin(), v1.end());
//	printVector(v2);
//
//	//n��elem��ʽ����
//	vector<int>v3(10, 100);
//	printVector(v3);
//
//	//��������
//	vector<int>v4(v3);
//	printVector(v4);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector��ֵ

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
//	//��ֵ	operator=
//	vector<int>v2;
//	v2 = v1;
//	printVector(v2);
//
//	//assign
//	vector<int>v3;
//	v3.assign(v1.begin(), v1.end());
//	printVector(v3);
//
//	//n��elem ��ʽ��ֵ
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


//vector�����������ʹ�С����

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
//	if (v1.empty())//Ϊ�� ��������Ϊ��
//	{
//		cout << "v1Ϊ��" << endl;
//	}
//	else
//	{
//		cout << "v1��Ϊ��" << endl;
//		cout << "v1������Ϊ��" << v1.capacity() << endl;
//		cout << "v1�Ĵ�СΪ��" << v1.size() << endl;
//	}
//
//	//����ָ����С
//	v1.resize(15, 100);//�������ذ汾������ָ��Ĭ�����ֵ������2
//	printVector(v1);//�������ָ���ı�ԭ�����ˣ�Ĭ����0����µ�λ��
//
//	v1.resize(5);
//	printVector(v1);//��������ƶ��ı�ԭ�����ˣ��������ֻ�ɾ����
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector�����ɾ��

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
//	//β��
//	v1.push_back(10);
//	v1.push_back(20);
//	v1.push_back(30);
//	v1.push_back(40);
//	v1.push_back(50);
//
//	//����
//	printVector(v1);
//
//	//βɾ
//	v1.pop_back();
//	printVector(v1);
//
//	//����	��һ�������ǵ�����
//	v1.insert(v1.begin(), 100);
//	printVector(v1);
//
//	v1.insert(v1.begin(), 2, 1000);
//	printVector(v1);
//
//	//ɾ��	����Ҳ�ǵ�����
//	v1.erase(v1.begin());
//	printVector(v1);
//
//	//���
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


//vector���� ���ݴ�ȡ

//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//
//	//����[]��ʽ����������Ԫ��
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1[i] << " ";
//	}
//	cout << endl;
//
//	//����at��ʽ����Ԫ��
//	for (int i = 0; i < v1.size(); i++)
//	{
//		cout << v1.at(i) << " ";
//	}
//	cout << endl;
//
//	//��ȡ��һ��Ԫ��
//	cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;
//
//	//��ȡ���һ��Ԫ��
//	cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//vector��������

//void printVector(vector<int>& v)
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////1.����ʹ��
//void test01()
//{
//	vector<int>v1;
//	for (int i = 0; i < 10; i++)
//	{
//		v1.push_back(i);
//	}
//	cout << "����ǰ��" << endl;
//	printVector(v1);
//
//	vector<int>v2;
//	for (int i = 10; i > 0; i--)
//	{
//		v2.push_back(i);
//	}
//	printVector(v2);
//
//	cout << "������" << endl;
//	v1.swap(v2);
//	printVector(v1);
//	printVector(v2);
//}
//
////2.ʵ����;
////����swap���������ڴ�ռ�
//void test02()
//{
//	vector<int>v;
//	for (int i = 0; i < 100000; i++)
//	{
//		v.push_back(i);
//	}
//
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	v.resize(3);//����ָ����С
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//
//	//����swap�����ڴ�
//	vector<int>(v).swap(v);//vector<int>(v) - ��������
//	cout << "v������Ϊ��" << v.capacity() << endl;
//	cout << "v�Ĵ�СΪ��" << v.size() << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//vector���� Ԥ���ռ�
void test01()
{
	vector<int>v;

	//����reserveԤ���ռ�
	v.reserve(100000);

	int num = 0;//ͳ�ƿ��ٴ���
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