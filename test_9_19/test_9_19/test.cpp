#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//��̬

////������
//class Animal
//{
//public:
//	//�麯��
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
////è��
//class Cat :public Animal
//{
//public:
//	//��д ��������ֵ���� ������ �����б� ��ȫ��ͬ
//	virtual void speak()
//	{
//		cout << "Сè��˵��" << endl;
//	}
//};
//
////����
//class Dog :public Animal
//{
//public:
//	void speak()
//	{
//		cout << "С����˵��" << endl;
//	}
//};
//
////ִ��˵���ĺ���
////��ַ��� �ڱ���׶�ȷ��������ַ
////�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//
////��̬��̬��������
////1.�м̳й�ϵ
////2.������д�������麯��
//
////��̬��̬ʹ��
////�����ָ��������� ָ���������
//
//void doSpeak(Animal& animal)//Animal& animal = cat;
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "size of Animal = " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//�ֱ�������ͨд���Ͷ�̬����ʵ�ּ�����

////��ͨд��
//class Calculator
//{
//public:
//
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_Num1 + m_Num2;
//		}
//		else if (oper == "-")
//		{
//			return m_Num1 - m_Num2;
//		}
//		else if (oper == "*")
//		{
//			return m_Num1 * m_Num2;
//		}
//		//�������չ�µĹ��ܣ������޸�Դ��
//		//����ʵ������ �ᳫ ����ԭ��
//		//����ԭ�򣺶���չ���п��ţ����޸Ľ��йر�
//
//	}
//	int m_Num1;//������1
//	int m_Num2;//������2
//};
//
//void test01()
//{
//	//��������������
//	Calculator c;
//	c.m_Num1 = 10;
//	c.m_Num2 = 10;
//
//	cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
//
//	cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
//
//	cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;
//}
//
////���ö�̬ʵ�ּ�����
////��̬�ô�
////1.��֯�ṹ����
////2.�ɶ���ǿ
////3.����ǰ�ںͺ�����չ�Լ�ά���Ը�
//
////ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//
//	virtual int getResult()
//	{
//		return 0;
//	}
//
//	int m_Num1;
//	int m_Num2;
//};
//
////�ӷ���������
//class AddCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 + m_Num2;
//	}
//};
//
////����������
//class SubCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 - m_Num2;
//	}
//};
//
////�˷�������
//class MulCalculator :public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_Num1 * m_Num2;
//	}
//};
//
//void test02()
//{
//	//��̬ʹ������
//	//����ָ���������ָ���������
//
//	//�ӷ�����
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//
//	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
//	//�����ǵ�����
//	delete abc;
//
//	//��������
//	abc = new SubCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//
//	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
//
//	//�˷�����
//	abc = new MulCalculator;
//	abc->m_Num1 = 100;
//	abc->m_Num2 = 100;
//
//	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}


//���麯���ͳ�����
//class Base
//{
//public:
//
//	//���麯��
//	//ֻҪ��һ�����麯����������Ϊ������
//	//�������ص㣺
//	//1.�޷�ʵ��������
//	//2.����������� ����Ҫ��д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void func()
//	{
//		cout << "func��������" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b;//���������޷�ʵ��������
//	//new Base;//���������޷�ʵ��������
//
//	//Son s;//���������д�����еĴ��麯���������޷�ʵ��������
//
//	Base* base = new Son;
//	base->func();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//��̬����2 ������Ʒ
//class AbstractDrinking
//{
//public:
//
//	//��ˮ
//	virtual void Boil() = 0;
//
//	//����
//	virtual void Brew() = 0;
//
//	//���뱭��
//	virtual void PourInCup() = 0;
//
//	//���븨��
//	virtual void PutSomething() = 0;
//
//	//������Ʒ
//	void makeDrink()
//	{
//		Boil();
//		Brew();
//		PourInCup();
//		PutSomething();
//	}
//};
//
////��������
//class Coffee :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////������ˮ
//class Tea :public AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void Boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//
//	//����
//	virtual void Brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//���뱭��
//	virtual void PourInCup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//���븨��
//	virtual void PutSomething()
//	{
//		cout << "�������" << endl;
//	}
//};
//
////��������
//void doWork(AbstractDrinking* abs)//AbstractDrinking* abs = new Coffee
//{
//	abs->makeDrink();
//	delete abs;//�ͷ�
//}
//
//void test01()
//{
//	//��������
//	doWork(new Coffee);
//
//	cout << "-------------------------" << endl;
//	//������Ҷ
//	doWork(new Tea);
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}


//�������ʹ�������

//class Animal
//{
//public:
//	
//	Animal()
//	{
//		cout << "Animal���캯������" << endl;
//	}
//
//	//�������������Խ�� ����ָ���ͷ��������ʱ���ɾ�������
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal������������" << endl;
//	//}
//
//	//�������� ��Ҫ����Ҳ��Ҫʵ��
//	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
//	virtual ~Animal() = 0;
//
//	//���麯��
//	virtual void speak() = 0;
//};
//
//Animal::~Animal()
//{
//	cout << "Animal����������������" << endl;
//}
//
//
//class Cat :public Animal
//{
//public:
//
//	Cat(string name)
//	{
//		cout << "Cat���캯������" << endl;
//		m_Name = new string(name);
//	}
//
//	virtual void speak()
//	{
//		cout << *m_Name << "Сè��˵��" << endl;
//	}
//
//	~Cat()
//	{
//		if (m_Name != NULL)
//		{
//			cout << "Cat������������" << endl;
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//
//	string* m_Name;
//};
//
//void test01()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//����ָ��������ʱ�� �����������������������������������ж������ԣ�������ڴ�й©
//	delete animal;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//����ͬ�����
//����CPU��
//class CPU
//{
//public:
//	//����ļ��㺯��
//	virtual void calculate() = 0;
//};
//
////�����Կ���
//class VideoCard
//{
//public:
//	//�������ʾ����
//	virtual void display() = 0;
//};
//
////�����ڴ�����
//class Memory
//{
//public:
//	//����Ĵ洢����
//	virtual void storage() = 0;
//};
//
////������
//class Computer
//{
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem)
//	{
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//
//	//�ṩ�����ĺ���
//	void work()
//	{
//		//������������������ýӿ�
//		m_cpu->calculate();
//
//		m_vc->display();
//
//		m_mem->storage();
//	}
//
//	//�ṩ�������� �ͷ�3���������
//	~Computer()
//	{
//
//		//�ͷ�CPU���
//		if (m_cpu != NULL)
//		{
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		//�ͷ��Կ����
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//
//		//�ͷ��ڴ������
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//
//private:
//
//	CPU* m_cpu;//CPU�����ָ��
//	VideoCard* m_vc;//�Կ����ָ��
//	Memory* m_mem;//�ڴ������ָ��
//};
//
////���峧��
////Intel����
//class IntelCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Intel��CPU��ʼ������" << endl;
//	}
//
//};
//
//class IntelVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Intel���Կ���ʼ��ʾ��" << endl;
//	}
//
//};
//
//class IntelMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Intel���ڴ�����ʼ�洢��" << endl;
//	}
//
//};
//
////AMD����
//class AMDCPU :public CPU
//{
//public:
//	virtual void calculate()
//	{
//		cout << "AMD��CPU��ʼ������" << endl;
//	}
//
//};
//
//class AMDVideoCard :public VideoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "AMD���Կ���ʼ��ʾ��" << endl;
//	}
//
//};
//
//class AMDMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "AMD���ڴ�����ʼ�洢��" << endl;
//	}
//
//};
//
//void test01()
//{
//	//��һ̨�������
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//
//	cout << "��һ̨���Կ�ʼ������" << endl;
//	//������һ̨����
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "-------------------------" << endl;
//	cout << "�ڶ�̨���Կ�ʼ������" << endl;
//	//�ڶ�̨������װ
//	Computer* computer2 = new Computer(new AMDCPU, new AMDVideoCard, new AMDMemory);
//	computer2->work();
//	delete computer2;
//
//	cout << "-------------------------" << endl;
//	cout << "����̨���Կ�ʼ������" << endl;
//	//����̨������װ
//	Computer* computer3 = new Computer(new AMDCPU, new IntelVideoCard, new AMDMemory);
//	computer3->work();
//	delete computer3;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�ı��ļ� д�ļ�

//void test01()
//{
//	//1.����ͷ�ļ� fstream
//
//	//2.����������
//	ofstream ofs;
//
//	//3.ָ���򿪷�ʽ
//	ofs.open("test.txt", ios::out);
//
//	//4.д����
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺18" << endl;
//
//	//5.�ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�ı��ļ� ���ļ�
//void test01()
//{
//	//1.����ͷ�ļ�
//
//	//2.����������
//	ifstream ifs;
//
//	//3.���ļ� �����ж��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4.������
//
//	//��һ��
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//�ڶ���
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	//string buf;
//
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//������
//	char c;
//	while ((c = ifs.get()) != EOF)//EOF end of file
//	{
//		cout << c;
//	}
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


//�������ļ� д�ļ�
//class Person
//{
//public:
//
//	char m_Name[64];//����
//	int m_Age;//����
//};
//
//void test01()
//{
//	//1.����ͷ�ļ�
//	// 
//	//2.����������
//	ofstream ofs("person.txt", ios::out | ios::binary);
//
//	//3.���ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	//4.д�ļ�
//	Person p = { "����",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//5.�ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}


class Person
{
public:

	char m_Name[64];//����
	int m_Age;//����
};
//�������ļ� ���ļ�
void test01()
{
	//1.����ͷ�ļ�

	//2.����������
	ifstream ifs;
	
	//3.���ļ� �ж��ļ��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::in | ios::binary);

	if(!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4.���ļ�
	Person p;

	ifs.read((char*)&p, sizeof(Person));

	cout << "������" << p.m_Name << " ���䣺" << p.m_Age << endl;

	//5.�ر��ļ�
	ifs.close();
}

int main()
{
	test01();
	return 0;
}