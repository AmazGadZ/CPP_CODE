#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//��ͨʵ��ҳ��

////Javaҳ��
//class Java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class CPP
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};


//�̳�ʵ��ҳ��

////����ҳ����
//class BasePage
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ���¼��ע��...������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ...�������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java��Python��C++��...�����������б�" << endl;
//	}
//};
//
//
////�̳еĺô��������ظ�����
////�﷨��class ���� : �̳з�ʽ ����
////���� Ҳ��Ϊ ������
////���� Ҳ��Ϊ ����
//
////Javaҳ��
//class Java :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
//
////C++ҳ��
//class CPP :public BasePage
//{
//public:
//	void content()
//	{
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//void test01()
//{
//	cout << "Java������Ƶҳ������" << endl;
//	Java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "------------------------" << endl;
//	cout << "Python������Ƶҳ������" << endl;
//	Python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "------------------------" << endl;
//	cout << "C++������Ƶҳ������" << endl;
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


//�̳з�ʽ

////�����̳�
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
//		m_A = 10;//�����еĹ���Ȩ�޳�Ա ����������Ȼ�ǹ���Ȩ��
//		m_B = 10;//�����еı���Ȩ�޳�Ա ����������Ȼ�Ǳ���Ȩ��
//		//m_C = 10;//�����е�˽��Ȩ�޳�Ա ������ʲ���
//	}
//};
//
//void test01()
//{
//	Son1 s1;
//	s1.m_A = 100;
//	//s1.m_B = 100;//����Son1�У�m_B�Ǳ���Ȩ�� ������ʲ���
//}
//
////�����̳�
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
//		m_A = 100;//�����й�����Ա���������б�Ϊ����Ȩ��
//		m_B = 100;//�����б�����Ա���������б�Ϊ����Ȩ��
//		//m_C = 100;//������˽�г�Ա ������ʲ���
//	}
//};
//
//void test02()
//{
//	Son2 s1;
//	//s1.m_A = 1000;//��Son2�� m_A��Ϊ����Ȩ�ޣ����������ʲ���
//	//s1.m_B = 1000;//��Son2�� m_B����Ȩ�� �����Է���
//}
//
////˽��Ȩ��
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
//		m_A = 100;//�����й�����Ա �������б�Ϊ ˽�г�Ա
//		m_B = 100;//�����б�����Ա �������б�Ϊ ˽�г�Ա
//		//m_C = 100;//������˽�г�Ա��������ʲ���
//	}
//};
//
//class GrandSon3 :public Son3
//{
//public:
//	void func()
//	{
//		//m_A = 1000;//����Son3�� m_A��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ���ʲ���
//		//m_B = 1000;//����Son3�� m_A��Ϊ˽�У���ʹ�Ƕ��ӣ�Ҳ���ʲ���
//	}
//};
//
//void test03()
//{
//	Son3 s1;
//	//s1.m_A = 1000;//����Son3�� ��Ϊ ˽�г�Ա ������ʲ���
//	//s1.m_B = 1000;//����Son3�� ��Ϊ ˽�г�Ա ������ʲ���
//}


//�̳��еĶ���ģ��

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
////���ÿ�����Ա������ʾ���߲鿴����ģ��
////��ת�̷� G:
////��ת�ļ�·�� cd ����·����
////�鿴����
////cl /d1 reportSingleClassLayout���� �ļ���
//
//void test01()
//{
//	//16
//	//���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
//	//������˽�г�Ա���� �Ǳ��������������ˣ�����Ƿ��ʲ���������ȷʵ���̳���ȥ��
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�̳��еĹ����������˳��
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base���캯��" << endl;
//	}
//
//	~Base()
//	{
//		cout << "Base��������" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son���캯��" << endl;
//	}
//
//	~Son()
//	{
//		cout << "Son��������" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;
//
//	//�̳��еĹ��������˳�����£�
//	//�ȹ��츸�࣬�ٹ������࣬������˳���빹���˳���෴
//	Son s;
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//�̳���ͬ����Ա����ʽ
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
//		cout << "Base - func()����" << endl;
//	}
//
//	void func(int a)
//	{
//		cout << "Base - func(int a)����" << endl;
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
//		cout << "Son - func()����" << endl;
//	}
//
//	int m_A;
//};
//
////ͬ����Ա���Դ���
//void test01()
//{
//	Son s;
//	cout << "Son �� m_A = " << s.m_A << endl;
//	//���ͨ��������� ���ʵ�������ͬ����Ա����Ҫ��������
//	cout << "Base �� m_A = " << s.Base::m_A << endl;
//}
//
////ͬ����Ա��������
//void test02()
//{
//	Son s;
//
//	s.func();//ֱ�ӵ��� �����������е�ͬ����Ա
//
//	//��ε��õ�������ͬ����Ա������
//	s.Base::func();
//
//	//��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
//	//�������ʵ������б����ص�ͬ����Ա��������Ҫ��������
//	s.Base::func(100);
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//�̳��е�ͬ����̬��Ա����ʽ

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
////ͬ����̬��Ա����
//void test01()
//{
//	//1.ͨ���������
//	cout << "ͨ��������ʣ�" << endl;
//	Son s;
//	cout << "Son �� m_A = " << s.m_A << endl;
//	cout << "Base �� m_A = " << s.Base::m_A << endl;
//
//	//2.ͨ����������
//	cout << "ͨ���������ʣ�" << endl;
//	cout << "Son �� m_A = " << Son::m_A << endl;
//	//��һ��::����ͨ��������ʽ����	�ڶ���::������ʸ�����������
//	cout << "Base �� m_A = " << Son::Base::m_A << endl;
//}
//
////ͬ����̬��Ա����
//void test02()
//{
//	//1.ͨ���������
//	cout << "ͨ���������" << endl;
//	Son s;
//	s.func();
//	s.Base::func();
//
//	//2.ͨ����������
//	cout << "ͨ����������" << endl;
//	Son::func();
//	Son::Base::func();
//
//	//������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ������
//	//�������ʸ����б�����ͬ����Ա����Ҫ��������
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


//��̳��﷨

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
////���� ��Ҫ�̳�Base1��Base2
////�﷨��class ���� :�̳з�ʽ ����1�� �̳з�ʽ ����2
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
//	//�������г���ͬ����Ա����Ҫ������������
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


//������

class Animal
{
public:
	int m_Age;
};

//������̳� ������μ̳е�����
//�̳�֮ǰ ���Ϲؼ��� virtual ��Ϊ��̳�
//Animal���Ϊ �����
//����
class Sheep :virtual public Animal
{

};

//����
class Tuo :virtual public Animal
{

};

//������
class SheepTuo :public Sheep, public Tuo
{

};

void test01()
{
	SheepTuo st;

	st.Sheep::m_Age = 18;
	st.Tuo::m_Age = 28;
	//�����μ̳У�����������ӵ����ͬ���ݣ���Ҫ��������������
	cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
	cout << "st.Tuo::m_Age = " << st.Tuo::m_Age << endl;
	cout << "st.m_Age = " << st.m_Age << endl;

	//�����������֪�� ֻҪ��һ�ݾͿ��ԣ����μ̳е������������ݣ���Դ�˷�
}

int main()
{
	test01();

	return 0;
}