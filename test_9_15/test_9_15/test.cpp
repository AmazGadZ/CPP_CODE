#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
using namespace std;

//1.����ע��

//2.����ע��
/*
	main��һ����������
	ÿ�����򶼱�������ôһ������
	���ҽ���һ��

*/

//int main()
//{
//	////����Ļ�����hello world
//	//cout << "hello world" << endl;
//
//	//�����������﷨���������� ������ = ������ʼֵ
//	int a = 10;
//
//	cout << "a=" << a << endl;
//
//	return 0;
//}

//�����Ķ��巽ʽ
//1.#define �곣��
//2.const���εı���

//1.#define �곣��
//#define Day 7

//int main()
//{
//	//Day = 14;//err, Day�ǳ�����һ���޸ľͻᱨ��
//	cout << "һ���ܹ���" << Day << "��" << endl;
//
//
//	//2.const���εı���
//	const int month = 12;
//	//month = 24;//err,const���εı���Ҳ��Ϊ����
//	cout << "һ���ܹ���" << month << "���·�" << endl;
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
//	//1.C����ַ���
//	char str1[] = "hello world";
//	cout << str1 << endl;
//
//	//2.C++����ַ���
//	string str2 = "hello world";
//	cout << str2 << endl;
//  return 0;
//}

//int main()
//{
//  //bool����0��ʾ�٣���0��ʾ��
//	bool flag = true;
//	cout << flag << endl;
//
//	flag = false;
//	cout << flag << endl;
//
//	cout << "bool������ռ�ռ��С��" << sizeof(bool) << endl;
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	cout << "������ͱ���a��ֵ��" << endl;
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
//			cout << "������" << endl;
//		else
//			cout << i << endl;
//	}
//	return 0;
//}

//int* func()
//{
//	//����new�ؼ��� ���Խ����ݿ��ٵ�����
//	//ָ�� ������Ҳ��һ���ֲ�����������ջ�ϣ�ָ�뱣��������Ƿ��ڶ���
//	int* p = new int(10);
//	return p;
//}
//
//int main()
//{
//	//�ڶ�����������
//	int* p = func();
//	cout << *p << endl;
//	cout << *p << endl;
//	return 0;
//}

////1.new�Ļ����﷨
//int* func()
//{
//	//�ڶ���������������
//	//new���� ���������͵�ָ��
//	int* p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	//���������� �ɳ���Ա�����٣�����Ա�����ͷ�
//	//������ͷŶ��������ݣ����ùؼ��� delete
//	delete p;
//	//cout << *p << endl;//�ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
//}
//
////2.�ڶ�������new��������
//void test02()
//{
//	//����10���������ݵ����飬�ڶ���
//	int* arr = new int[10];//10����������10��Ԫ��
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
//	//�ͷŶ�������
//	//�ͷ������ʱ�� Ҫ��[]�ſ���
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
//	//���û����﷨
//	//�������� &���� = ԭ��
//
//	int a = 10;
//	//��������
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
//	//1.���ñ����ʼ��
//	//int& b;//err,����Ҫ��ʼ��
//	int& b = a;
//	//2.�����ڳ�ʼ���󣬲����Ըı�
//	int c = 20;
//	b = c;//��ֵ�����������Ǹ�������
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl;
//	return 0;
//}

////��������
//
////1.ֵ����
//void mySwap01(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
////2.��ַ����
//void mySwap02(int* a, int* b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
////3.���ô���
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
//	//mySwap01(a, b);//ֵ���ݣ��ββ�������ʵ��
//	//mySwap02(&a, &b);//��ַ����
//	mySwap03(a, b);//���ô���
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	return 0;
//}

////�����������ķ���ֵ
////1.��Ҫ���ؾֲ�����������
//int& test01()
//{
//	int a = 10;
//	return a;
//}
//
////2.�����ĵ��ÿ�����Ϊ��ֵ
//int& test02()
//{
//	static int a = 10;//��̬�����������ȫ������ȫ��ȥ�ϵ������ڳ��������ϵͳ�ͷ�
//	return a;
//}
//
//int main()
//{
//	//int& ref = test01();//���ֵ
//
//	//cout << "ref = " << ref << endl;
//
//	int& ref2 = test02();
//	cout << "ref2 = " << ref2 << endl;
//	test02() = 1000;//��������ķ���ֵ�Ǹ����ã�����������ÿ�����Ϊ��ֵ
//	cout << "ref2 = " << ref2 << endl;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	//�Զ�ת��Ϊint* const ref = &a;ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
//	int& ref = a;
//	ref = 20;//�ڲ�����ref�����ã��Զ�������ת��Ϊ��*ref = 20;
//
//	cout << "a = " << a << endl;
//	cout << "ref = " << ref << endl;
//
//	return 0;
//}

////��ӡ���ݺ���
//void showValue(const int& val)
//{
//	//val = 1000;
//	cout << "val = " << val << endl;
//}
//
//int main()
//{
//	//��������
//	//ʹ�ó��������������βΣ���ֹ�����
//
//	//int a = 10;
//
//	////����const֮�� �������������޸� int tmp = 10; const int& ref =tmp;
//	//const int& ref = 10;//���ñ�����һ��Ϸ����ڴ�ռ�
//	////ref = 30;//����const֮���Ϊֻ�����������޸�
//	//cout << "ref = " << ref << endl;
//
//	int a = 100;
//	showValue(a);
//	cout << "a = " << a << endl;
//	return 0;
//}

////����Ĭ�ϲ���
//
////��������Լ��������ݣ������Լ������ݣ����û�У���ô��Ĭ��ֵ
////�﷨�� ����ֵ���� ������(�β� = Ĭ��ֵ){}
//int func1(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}
//
//
//
////ע������
////1.���ĳ��λ���Ѿ�����Ĭ�ϲ�������ô�����λ�����󣬴����Ҷ�����Ҫ��Ĭ��ֵ
////int func2(int a = 10, int b, int c, int d)
////{
////	return a + b + c + d;
////}
//
////2.�������������Ĭ�ϲ���������ʵ�־Ͳ�����Ĭ�ϲ���
////������ʵ��ֻ����һ����Ĭ�ϲ���
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

////ռλ����
////����ֵ���� ������(��������) {}
//
////Ŀǰ�׶ε�ռλ���� ���ǻ��ò���
////ռλ���� ��������Ĭ�ϲ���
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

////��������
////�����ú�������ͬ����߸�����
//
////�������ص���������
////1.ͬһ����������
////2.����������ͬ
////3.�����������Ͳ�ͬ�����߸�����ͬ������˳��ͬ
//void func()
//{
//	cout << "func �ĵ���" << endl;
//}
//
//void func(int a)
//{
//	cout << "func(int a) �ĵ���" << endl;
//}
//
//void func(double a)
//{
//	cout << "func(double a) �ĵ���" << endl;
//}
//
//void func(int a, double b)
//{
//	cout << "func(int a, double b) �ĵ���" << endl;
//}
//
//void func(double a, int b)
//{
//	cout << "func(double a, int b) �ĵ���" << endl;
//}
//
////ע������
////�����ķ���ֵ��������Ϊ�������ص�����
//
////int func(double a, int b)
////{
////	cout << "func(double a, int b) �ĵ���" << endl;
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

//�������ص�ע������
//1.������Ϊ���ص�����
void func(int& a)//int& a = 10; ���Ϸ�
{
	cout << "func(int& a)����" << endl;
}

void func(const int& a)//const int& a =10; �Ϸ�
{
	cout << "func(const int& a)����" << endl;
}

//2.������������Ĭ�ϲ���
void func2(int a, int b = 10)
{
	cout << "func(int a,int b) �ĵ���" << endl;
}

void func2(int a)
{
	cout << "func(int a) �ĵ���" << endl;
}

int main()
{
	//int a = 10;
	//func(a);

	//func(10);

	//func2(10);//��������������Ĭ�ϲ��������ֶ����ԣ��������������������

	return 0;
}