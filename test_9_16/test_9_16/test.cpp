#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

//const double PI = 3.14;
//
////���һ��Բ�࣬��Բ���ܳ�
////Բ���ܳ��Ĺ�ʽ: 2 * PI * �뾶
//
////class �������һ���࣬���������ŵľ���������
//class Circle
//{
//	//����Ȩ��
//	//����Ȩ��
//public:
//
//	//����
//	//�뾶
//	int m_r;
//
//	//��Ϊ
//	//��ȡԲ���ܳ�
//	double calculateZC()
//	{
//		return 2 * PI * m_r;
//	}
//};
//
//int main()
//{
//	//ͨ��Բ�� ���������Բ������
//	//ʵ���� ��ͨ��һ���� ����һ������Ĺ��̣�
//	Circle c1;
//	//��Բ���� �����Խ��и�ֵ
//	c1.m_r = 10;
//
//	//2 * PI * 10 = 62.8
//	cout << "Բ���ܳ�Ϊ�� " << c1.calculateZC() << endl;
//	return 0;
//}

//���һ��ѧ���࣬������������ѧ��
//���Ը�������ѧ�Ÿ�ֵ��������ʾѧ����������ѧ��

//���ѧ����
//class Student
//{
//public://����Ȩ��
//
//	//���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
//	//���� ��Ա���� ��Ա����
//	//��Ϊ ��Ա���� ��Ա����
//
//	//����
//	string m_Name;//����
//	int m_Id;//ѧ��
//
//	//��Ϊ
//	//��ʾ������ѧ��
//	void showStudent()
//	{
//		cout << "������" << m_Name << " ѧ�ţ�" << m_Id << endl;
//	}
//
//	//��������ֵ
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//
//	//��ѧ�Ÿ�ֵ
//	void setId(int id)
//	{
//		m_Id = id;
//	}
//	
//};
//
//int main()
//{
//	//����һ������ѧ�� ʵ��������
//	Student s1;
//	//��s1���� �������Ը�ֵ����
//	//s1.m_Name = "����";
//	s1.setName("����");
//	//s1.m_Id = 1;
//	s1.setId(1);
//	//��ʾѧ����Ϣ
//	s1.showStudent();
//
//	Student s2;
//	s2.m_Name = "����";
//	s2.m_Id = 2;
//	s2.showStudent();
//	return 0;
//}

//����Ȩ��
//����
//����Ȩ��	public		��Ա ���ڿ��Է��� ������Է���
//����Ȩ��	protected	��Ա ���ڿ��Է��� ���ⲻ���Է��� ���ӿ��Է��ʸ����еı�������
//˽��Ȩ��	private		��Ա ���ڿ��Է��� ���ⲻ���Է��� ���Ӳ����Է��ʸ��׵�˽������

//class Person
//{
//public:
//	//����Ȩ��
//	string m_Name;//����
//
//protected:
//	//����Ȩ��
//	string m_Car;//����
//
//private:
//	//˽��Ȩ��
//	int m_Password;//���п�����
//
//public:
//	void func()
//	{
//		m_Name = "����";
//		m_Car = "������";
//		m_Password = 123456;
//	}
//};
//
//int main()
//{
//	//ʵ�����������
//	Person p1;
//
//	p1.m_Name = "����";
//	//p1.m_Car = "����";//����Ȩ�����ݣ���������ʲ���
//	//p1.m_Password = 123;//˽��Ȩ�����ݣ�������ʲ���
//	p1.func();
//	return 0;
//}

//class C1
//{
//	int m_A;//Ĭ��Ȩ��	�� ˽��
//};
//
//struct C2
//{
//	int m_A;//Ĭ��Ȩ��	�� ����
//};
//
//int main()
//{
//	//struct �� class ����
//	//struct Ĭ��Ȩ���� ���� public
//	//class  Ĭ��Ȩ���� ˽�� private
//	C1 c1;
//	//c1.m_A = 100;//��class��Ĭ��Ȩ��	˽�У�������ⲻ���Է���
//
//	C2 c2;
//	c2.m_A = 100;//��structĬ�ϵ�Ȩ��Ϊ��������˿��Է���
//
//	return 0;
//}

//��Ա��������Ϊ˽��
//1.�����Լ����ƶ�дȨ��
//2.����д���Լ�����ݵ���Ч��

//�������
//class Person
//{
//public:
//	//��������
//	void setName(string name)
//	{
//		m_Name = name;
//	}
//	//��ȡ����
//	string getName()
//	{
//		return m_Name;
//	}
//
//	//��ȡ���� �ɶ���д ������޸ģ�����ķ�Χ������0 ~ 150֮�䣩
//	int getAge()
//	{
//		//m_Age = 0;//��ʼ��Ϊ0��
//		return m_Age;
//	}
//
//	//��������
//	void setAge(int age)
//	{
//		if (age < 0 || age>150)
//		{
//			m_Age = 0;
//			cout << "�������������" << endl;
//			return;
//		}
//		m_Age = age;
//	}
//
//	//�������� ֻд
//	void setLover(string lover)
//	{
//		m_Lover = lover;
//	}
//
//private:
//	//���� �ɶ���д
//	string m_Name;
//	//���� ֻ��
//	int m_Age;
//	//���� ֻд
//	string m_Lover;
//};
//
//int main()
//{
//	Person p;
//	p.setName("����");
//	cout << "����Ϊ��" << p.getName() << endl;
//
//	//p.m_Age = 18;
//	p.setAge(18);
//	cout << "����Ϊ��" << p.getAge() << endl;
//
//	p.setLover("����");
//	//cout << "����Ϊ�� " << p.m_Lover << endl;//�ǲ����Է��ʵ�
//	return 0;
//}

//�����������
//1.������������
//2.�������
//3.�����Ϊ ��ȡ��������������
//4.�ֱ�����ȫ�ֺ����ͳ�Ա���� �ж������������Ƿ����

//class Cube
//{
//public:
//	//���ó�
//	void setL(int l)
//	{
//		m_L = l;
//	}
//	//��ȡ��
//	int getL()
//	{
//		return m_L;
//	}
//	//���ÿ�
//	void setW(int w)
//	{
//		m_W = w;
//	}
//	//��ȡ��
//	int getW()
//	{
//		return m_W;
//	}
//	//���ø�
//	void setH(int h)
//	{
//		m_H = h;
//	}
//	//��ȡ��
//	int getH()
//	{
//		return m_H;
//	}
//	//��ȡ���������
//	int calculateS()
//	{
//		return 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
//	}
//	//��ȡ���������
//	int calculateV()
//	{
//		return m_L * m_W * m_H;
//	}
//	//���ó�Ա�����ж������������Ƿ����
//	bool isSameByClass(Cube& c)
//	{
//		if (m_L == c.getL() && m_W == c.getW() && m_H == c.getH())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_L;//��
//	int m_W;//��
//	int m_H;//��
//};
//
////����ȫ�ֺ����ж� �����������Ƿ����
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
//	//�������������
//	Cube c1;
//	c1.setL(10);
//	c1.setW(10);
//	c1.setH(10);
//
//	//600
//	cout << "c1�����Ϊ��" << c1.calculateS() << endl;
//	//1000
//	cout << "c1�����Ϊ��" << c1.calculateV() << endl;
//
//	//�����ڶ���������
//	Cube c2;
//	c2.setL(10);
//	c2.setW(10);
//	c2.setH(10);
//	
//	//����ȫ�ֺ����ж�
//	bool ret = isSame(c1, c2);
//	if (ret)
//	{
//		cout << "c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "c1��c2�ǲ���ȵ�" << endl;
//	}
//
//	//���ó�Ա�����ж�
//	ret = c1.isSameByClass(c2);
//	if (ret)
//	{
//		cout << "��Ա�����жϣ�c1��c2����ȵ�" << endl;
//	}
//	else
//	{
//		cout << "��Ա�����жϣ�c1��c2�ǲ���ȵ�" << endl;
//	}
//	return 0;
//}

//���Բ��ϵ����

//����
//class Point
//{
//public:
//	//����x
//	void setX(int x)
//	{
//		m_X = x;
//	}
//	//��ȡx
//	int getX()
//	{
//		return m_X;
//	}
//	//����y
//	void setY(int y)
//	{
//		m_Y = y;
//	}
//	//��ȡy
//	int getY()
//	{
//		return m_Y;
//	}
//private:
//	int m_X;
//	int m_Y;
//};

//Բ��
//class Circle
//{
//public:
//	//���ð뾶
//	void setR(int r)
//	{
//		m_R = r;
//	}
//	//��ȡ�뾶
//	int getR()
//	{
//		return m_R;
//	}
//	//����Բ��
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//	//��ȡԲ��
//	Point getCenter()
//	{
//		return m_Center;
//	}
//private:
//	int m_R;//�뾶
//
//	//�����п�������һ������Ϊ�����еĳ�Ա
//	Point m_Center;//Բ��
//};

//�жϵ��Բ�Ĺ�ϵ
//void isInCircle(Circle& c, Point& p)
//{
//	//��������֮����� ƽ��
//	int distance =
//		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
//		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
//	//����뾶��ƽ��
//	int rDistance = c.getR() * c.getR();
//	
//	//�жϹ�ϵ
//	if (distance == rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rDistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//
//int main()
//{
//	//����Բ
//	Circle c;
//	c.setR(10);
//	Point center;
//	center.setX(10);
//	center.setY(0);
//	c.setCenter(center);
//
//	//������
//	Point p;
//	p.setX(10);
//	p.setY(9);
//
//	//�жϹ�ϵ
//	isInCircle(c, p);
//
//	return 0;
//}

//����ĳ�ʼ��������
//class Person
//{
//public:
//	//1.���캯�� ���г�ʼ������
//	//û�з���ֵ ����дvoid
//	//������ ��������ͬ
//	//���캯�������в��������Է�������
//	//���������ʱ�򣬹��캯�����Զ����ã�����ֻ����һ��
//	Person()
//	{
//		cout << "Person���캯���ĵ���" << endl;
//	}
//
//	//2.�������� ��������Ĳ���
//	//û�з���ֵ ��дvoid
//	//��������������ͬ ������ǰ��~
//	//���������������в����������Է�������
//	//����������ǰ ���Զ�������������������ֻ��diaoyongyici
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//};
//
//
////������������Ǳ����е�ʵ�֣���������Լ����ṩ�����������ṩһ����ʵ�ֵĹ��������
//void test01()
//{
//	Person p;//��ջ�ϵ����ݣ�test01ִ����Ϻ��ͷ��������
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

//1.���캯���ķ��༰����
//����
//���ղ�������	�޲ι��죨Ĭ�Ϲ��죩���вι���
//�������ͷ���	��ͨ����Ϳ�������
//class Person
//{
//public:
//	//���캯��
//	Person()
//	{
//		cout << "Person���޲ι��캯������" << endl;
//	}
//	Person(int a)
//	{
//		age = a;
//		cout << "Person���вι��캯������" << endl;
//	}
//	//�������캯��
//	Person(const Person& p)
//	{
//		//������������ϵ��������ԣ�������������
//		age = p.age;
//		cout << "Person�Ŀ������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//
//	int age;
//};
//
////����
//void test01()
//{
//	//1.���ŷ�
//	//Person p1;//Ĭ�Ϲ��캯���ĵ���
//	//Person p2(10);//�вι��캯��
//	//Person p3(p2);//�������캯��
//
//	//ע������
//	//����Ĭ�Ϲ��纯��ʱ�򣬲�Ҫ��()
//	//��Ϊ�������д��룬����������Ϊ��һ��������������������Ϊ�ڴ�������
//	//Person p1();
//	
//	//cout << "p2������Ϊ��" << p2.age << endl;
//	//cout << "p3������Ϊ��" << p3.age << endl;
//	
//	//2.��ʽ��
//	//Person p1;
//	//Person p2 = Person(10);//�вι���
//	//Person p3 = Person(p2);//��������
//
//	//Person(10);//��������	�ص㣺��ǰ��ִ�н�����ϵͳ���������յ���������
//	//cout << "aaaaa" << endl;
//
//	//ע������2
//	//��Ҫ���ÿ������캯�� ��ʼ����������	����������ΪPerson(p3) === Person p3;��������
//	//Person(p3);
//
//	//3.��ʽת����
//	Person p4 = 10;//�൱��д�� Person p4 = person(10);	�вι���
//	Person p5 = p4;//��������
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//�������캯������ʱ��

//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age)
//	{
//		m_Age = age;
//		cout << "Person�вι��캯������" << endl;
//	}
//
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person�������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//	int m_Age;
//};
//
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//
//	cout << "p2������Ϊ��" << p2.m_Age << endl;
//}
//
////2.ֵ���ݵķ�ʽ������������ֵ
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
////3.ֵ��ʽ���ؾֲ�����
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

//���캯���ĵ��ù���
//1.����һ���࣬C++���������ÿ���඼�������3������
//Ĭ�Ϲ���	����ʵ�֣�
//��������	����ʵ�֣�
//��������	��ֵ������

//2.�������д���вι��캯�����������Ͳ����ṩĬ�Ϲ��죬����Ȼ�ṩ��������
//�������д�˿������캯�����������Ͳ����ṩ������ͨ���캯��
//class Person
//{
//public:
//	//Person()
//	//{
//	//	cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	//}
//
//	//Person(int age)
//	//{
//	//	m_Age = age;
//	//	cout << "Person���вι��캯������" << endl;
//	//}
//
//	Person(const Person& p)
//	{
//		m_Age = p.m_Age;
//		cout << "Person�Ŀ������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
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
////	cout << "p2������Ϊ��" << p2.m_Age << endl;
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

//�����ǳ����

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//
//	Person(int age, int height)
//	{
//		m_Age = age;
//		m_Height = new int(height);
//		cout << "Person���вι��캯������" << endl;
//	}
//
//	//�Լ�ʵ�ֿ������캯�������ǳ��������������
//	Person(const Person& p)
//	{
//		cout << "Person�������캯������" << endl;
//		m_Age = p.m_Age;
//		//m_Height = p.m_Height;//������Ĭ��ʵ�־������д���
//		//�������
//
//		m_Height = new int(*p.m_Height);
//	}
//
//	~Person()
//	{
//		//�������룬�����������������ͷŲ���
//		if (m_Height != NULL)
//		{
//			delete m_Height;
//			m_Height = NULL;
//		}
//		cout << "Person��������������" << endl;
//	}
//
//	int m_Age;//����
//	int* m_Height;//���
//};
//
//void test01()
//{
//	Person p1(18, 160);
//
//	cout << "p1������Ϊ��" << p1.m_Age << " ���Ϊ��" << *p1.m_Height << endl;
//
//	Person p2(p1);
//
//	cout << "p2������Ϊ��" << p2.m_Age << " ���Ϊ��" << *p2.m_Height << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//��ʼ���б�
//class Person
//{
//public:
//
//	//��ͳ��ʼ������
//	//Person(int a, int b, int c)
//	//{
//	//	m_A = a;
//	//	m_B = b;
//	//	m_C = c;
//	//}
//
//	//��ʼ���б��ʼ������
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

//�������Ϊ���Ա

//�ֻ���
//class Phone
//{
//public:
//	Phone(string pName)
//	{
//		m_PName = pName;
//		cout << "Phone�Ĺ��캯������" << endl;
//	}
//
//	~Phone()
//	{
//		cout << "Phone��������������" << endl;
//	}
//
//	//�ֻ�Ʒ������
//	string m_PName;
//};
//
////����
//class Person
//{
//public:
//
//	//Phone m_phone = pName; ��ʽת����
//	Person(string name, string pName) :m_Name(name), m_Phone(pName)
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//
//	//����
//	string m_Name;
//	//�ֻ�
//	Phone m_Phone;
//};
//
////�������������Ϊ�����Ա������ʱ���ȹ�������������ٹ�������������˳���빹���෴
//
//void test01()
//{
//	Person p("����", "ƻ��");
//
//	cout << p.m_Name << "���ţ�" << p.m_Phone.m_PName << endl;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}

//��̬��Ա����
//class Person
//{
//public:
//
//	//1.���ж��󶼹���ͬһ������
//	//2.����׶ξͷ����ڴ�
//	//3.���������������ʼ������
//	static int m_A;
//
//	//��̬��Ա����Ҳ���з���Ȩ�޵�
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
//	//��̬��Ա���� ������ĳ�������ϣ����ж��󶼹���ͬһ������
//	//��˾�̬��Ա���������ַ��ʷ�ʽ
//
//	//1.ͨ��������з���
//	//Person p;
//	//cout << p.m_A << endl;
//
//	//2.ͨ���������з���
//	cout << Person::m_A << endl;
//
//	//cout << Person::m_B << endl;//������ʲ���˽�о�̬��Ա����
//}
//
//int main()
//{
//	//test01();
//	test02();
//
//	return 0;
//}

//��̬��Ա����
//���ж�����ͬһ������
//��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

class Person
{
public:

	static void func()
	{
		m_A = 100;//��̬��Ա���� ���Է��� ��̬��Ա����
		//m_B = 200;//��̬��Ա���� �����Է��� �Ǿ�̬��Ա�������޷����ֵ������ĸ������m_B����
		cout << "static void func����" << endl;
	}

	static int m_A;//��̬��Ա����
	int m_B;//�Ǿ�̬��Ա����

	//��̬��Ա����Ҳ���з���Ȩ�޵�
private:
	static void func2()
	{
		cout << "static void func2����" << endl;
	}
};

int Person::m_A = 0;

//�����ַ��ʷ�ʽ
void test01()
{
	//1.ͨ���������
	Person p;
	p.func();

	//2.ͨ����������
	Person::func();

	//Person::func2();//������ʲ���˽�о�̬��Ա����
}

int main()
{
	test01();

	return 0;
}