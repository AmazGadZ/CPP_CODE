#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;


//����ģ��

////�����������κ���
//void swapInt(int& a, int& b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////�������������ͺ���
//void swapDouble(double& a, double& b)
//{
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//
////����ģ��
//template<typename T>//����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����T��һ��ͨ����������
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
//	//���ú���ģ�彻��
//	//���ַ�ʽʹ�ú���ģ��
//	
//	//1.�Զ������Ƶ�
//	//mySwap(a, b);
//
//	//2.��ʽָ������
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


//����ģ��ע������
 
//template<class T>//typename�����滻��class
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
////1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//
//	//mySwap(a, b);//��ȷ
//	//mySwap(a, c);//�����Ƶ�����һ�µ�T����
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}
//
////2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��
//template<typename T>
//void func()
//{
//	cout << "func����" << endl;
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


//ʵ��ͨ�� �������������ĺ���
//���� �Ӵ�С
//�㷨 ѡ��
//���� char���顢int����

////��������ģ��
//template<typename T>
//void mySwap(T& a, T& b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
////�����㷨
//template<typename T>
//void mySort(T arr[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		int max = i;//�϶����ֵ���±�
//		for (int j = i + 1; j < len; j++)
//		{
//			//�϶������ֵ �� ����������ֵҪС��˵��j�±��Ԫ�ز������������ֵ
//			if (arr[max] < arr[j])
//			{
//				max = j;//�������ֵ�±�
//			}
//		}
//		if (max != i)
//		{
//			//����max��iԪ��
//			mySwap(arr[max], arr[i]);
//		}
//	}
//}
//
////�ṩ��ӡ����ģ��
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
//	//����char����
//	char charArr[] = "badcfe";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArray(charArr, num);
//}
//
//void test02()
//{
//	//����int����
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


//��ͨ�����뺯��ģ������

//1.��ͨ�������ÿ��Է�����ʽ����ת��
//2.����ģ�� ���Զ������Ƶ��������Է�����ʽ����ת��
//3.����ģ�� ����ʽָ�����ͣ����Է�����ʽ����ת��

////��ͨ����
//int myAdd01(int a, int b)
//{
//	return a + b;
//}
//
////����ģ��
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
//	//�Զ������Ƶ�	���ᷢ����ʽ����ת��
//	//cout << myAdd02(a, c) << endl;
//
//	//��ʽָ������	�ᷢ����ʽ����ת��
//	cout << myAdd02<int>(a, c) << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//��ͨ�����뺯��ģ����ù���
//1.�������ģ�����ͨ���������Ե��ã����ȵ�����ͨ����
//2.����ͨ����ģ������б� ǿ�Ƶ��� ����ģ��
//3.����ģ��Ҳ���Է�����������
//4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��

//void myPrint(int a, int b)
//{
//	cout << "���õ���ͨ����" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b)
//{
//	cout << "���õ�ģ��" << endl;
//}
//
//template<typename T>
//void myPrint(T a, T b, T c)
//{
//	cout << "�������ص�ģ��" << endl;
//}
//
//void test01()
//{
//	int a = 10;
//	int b = 20;
//
//	//myPrint(a, b);
//
//	//ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
//	//myPrint<>(a, b);
//
//	//myPrint(a, b, 100);
//
//	//�������ģ��������õ�ƥ�䣬���ȵ��ú���ģ��
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


//ģ�������
//ģ�岢�������ܵģ���Щ�ض��������ͣ���Ҫ�þ��廯��ʽ������ʵ��

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
//	//����
//	string m_Name;
//	//����
//	int m_Age;
//};
//
////�Ա����������Ƿ���Ⱥ���
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
////���þ��廯Person�İ汾ʵ�ִ��룬���廯���ȵ���
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


//��ģ��
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
//		cout << "name��" << this->m_name << " age��" << this->m_Age << endl;
//	}
//
//	NameType m_name;
//	AgeType m_Age;
//};
//
//void test01()
//{
//	Person<string, int> p1("�����", 999);
//	p1.showPerson();
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��ģ���뺯��ģ������
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
//		cout << "name��" << this->m_Name << " age��" << this->m_Age << endl;
//	}
//
//	NameType m_Name;
//	AgeType m_Age;
//};
//
////1.��ģ��û���Զ������Ƶ���ʽ
//void test01()
//{
//	//Person p("�����", 1000);//�����޷����Զ������Ƶ�
//
//	Person<string, int> p("�����", 1000);//��ȷ��ֻ������ʽָ������
//
//	p.showPerson();
//}
//
////2.��ģ����ģ������б��п�����Ĭ�ϲ���
//void test02()
//{
//	Person<string> p("��˽�", 999);
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


//��ģ���г�Ա��������ʱ��
//��ģ���г�Ա�����ڵ���ʱ��ȥ����

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
//	//��ģ���еĳ�Ա����
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


//��ģ���������������

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
//		cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//	}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////1.ָ����������
//void printPerson1(Person<string, int>& p)
//{
//	p.showPerson();
//}
//
//void test01()
//{
//	Person<string, int>p("�����", 100);
//	printPerson1(p);
//}
//
////2.����ģ�廯
//template<typename T1, typename T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	p.showPerson();
//	cout << "T1 ������Ϊ��" << typeid(T1).name() << endl;
//	cout << "T2 ������Ϊ��" << typeid(T2).name() << endl;
//}
//
//void test02()
//{
//	Person<string, int>p("��˽�", 90);
//	printPerson2(p);
//}
//
////3.������ģ�廯
//template<typename T>
//void printPerson3(T& p)
//{
//	p.showPerson();
//	cout << "T����������Ϊ��" << typeid(T).name() << endl;
//}
//
//void test03()
//{
//	Person<string, int>p("��ɮ", 30);
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


//��ģ����̳�

//template<typename T>
//class Base
//{
//	T m;
//};
//
////class Son :public Base//���󣬱���Ҫ֪�������е�T���ͣ����ܼ̳и�����
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
////��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
//template<typename T1, typename T2>
//class Son2 :public Base<T2>
//{
//public:
//
//	Son2()
//	{
//		cout << "T1������Ϊ��" << typeid(T1).name() << endl;
//		cout << "T2������Ϊ��" << typeid(T2).name() << endl;
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


//��ģ���Ա��������ʵ��
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
//	//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
//	//}
//
//	T1 m_Name;
//	T2 m_Age;
//};
//
////���캯������ʵ��
//template<typename T1,typename T2>
//Person<T1, T2>::Person(T1 name, T2 age)
//{
//	this->m_Name = name;
//	this->m_Age = age;
//}
//
////��Ա��������ʵ��
//template<typename T1, typename T2>
//void Person<T1, T2>::showPerson()
//{
//	cout << "������" << this->m_Name << " ���䣺" << this->m_Age << endl;
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


//��ģ����ļ���д���⼰���

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
//	cout << "������" << this->m_Name << " ���� " << this->m_Age << endl;
//}

//��һ�ֽ����ʽ��ֱ�Ӱ��� Դ�ļ�
//#include "Person.cpp"

//�ڶ��ֽ����ʽ����.h��.cpp�е�����д��һ�𣬽���׺����Ϊ.hpp�ļ�
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


//ͨ��ȫ�ֺ��� ��ӡPerson��Ϣ

////��ǰ�ñ�����֪��Person�����
//template<typename T1, typename T2>
//class Person;
//
////����ʵ��
//template<typename T1, typename T2>
//void printPerson2(Person<T1, T2> p)
//{
//	cout << "����ʵ�� -- ������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//}
//
//
//template<typename T1,typename T2>
//class Person
//{
//	//ȫ�ֺ��� ����ʵ��
//	friend void printPerson(Person<T1, T2> p)
//	{
//		cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;
//	}
//
//	//ȫ�ֺ��� ����ʵ��
//	//�ӿ�ģ������б�
//	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ���
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
////1.ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int> p("Tom", 20);
//
//	printPerson(p);
//}
//
////2.ȫ�ֺ���������ʵ��
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
		//����β�巨�������в�������
		arr1.Push_Back(i);
	}
	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr1);

	cout << "arr1������Ϊ��" << arr1.getCapacity() << endl;
	cout << "arr1�Ĵ�СΪ��" << arr1.getSize() << endl;

	MyArray<int>arr2(arr1);

	cout << "arr2�Ĵ�ӡ���Ϊ��" << endl;
	printIntArray(arr2);

	//βɾ
	arr2.Pop_Back();
	cout << "arr2βɾ��" << endl;
	cout << "arr2������Ϊ��" << arr2.getCapacity() << endl;
	cout << "arr2�Ĵ�СΪ��" << arr2.getSize() << endl;

	//MyArray<int>arr3(100);
	//arr3 = arr1;
}


//�����Զ�����������
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
		cout << "������" << arr[i].m_Name << " ���䣺" << arr[i].m_Age << endl;
	}
}

void test02()
{
	MyArray<Person> arr(10);

	Person p1("�����", 999);
	Person p2("����", 30);
	Person p3("槼�", 20);
	Person p4("����", 25);
	Person p5("������", 27);

	//�����ݲ��뵽������
	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);
	arr.Push_Back(p5);

	//��ӡ����
	printPersonArray(arr);

	//�������
	cout << "arr����Ϊ��" << arr.getCapacity() << endl;
	//�����С
	cout << "arr��СΪ��" << arr.getSize() << endl;
}

int main()
{
	//test01();
	test02();
	return 0;
}