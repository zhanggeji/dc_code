#include<iostream>
#include<string>
using namespace std;

//template <class NameType, class AgeType=int>
//class person
//{
//public:
//	person(NameType name,AgeType age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	NameType name;
//	AgeType age;
//};
//int main()
//{
//	//1.��ģ��û���Զ������Ƶ�
//	//person p1("xiyang", 18);//err
//	//2.��ģ����ģ������б��п�����Ĭ�ϲ���
//	person <string>p3("xiyang", 1.1);
//	cout << p3.age;
//}

//class person1
//{
//public:
//	void test1()
//	{
//		cout << "test1()" << endl;
//	}
//};
//class person2
//{
//public:
//	void test2()
//	{
//		cout << "test2()" << endl;
//	}
//};
//template <class T>
//class MyClass
//{
//public:
//	T t;
//	void test()
//	{
//		t.test1();
//		t.test2();
//	}
//};
//int main()
//{
//	MyClass<person1> mc;
//	//û�б���֮ǰ���ᱨ������֮�󱨴�
//	//˵����ģ��ĳ�Ա�������ڵ��ú󴴽���
//}
//template <class NameType,class AgeType>
//class person
//{
//public:
//	person(NameType name,AgeType age)
//	{
//		this->name = name;
//		this->age = age;
//	}
//	void print()
//	{
//		cout << this->name  << this->age;
//	}
//	NameType name;
//	AgeType age;
//};
//
//void print1(person <string, int>& p)
//{
//	p.print();
//}
//
//template <class T1,class T2>
//void print2(person <T1 , T2>&p)
//{
//	p.print();
//
//	cout << "T1������:" << typeid(T1).name() << endl;//ģ���Ƴ�����������
//	cout << "T2������:" << typeid(T2).name() << endl;
//}
//
//template <class T>
//void print3(T& p)
//{
//	p.print();
//
//	cout << "T���������ͣ�" << typeid(T).name() << endl;
//}
//int main()
//{
//	person <string, int>p("xiyang", 18);
//	// 1.ָ�����������
//	print1(p);
//	// 2.����ģ�廯
//	print2(p);
//	// 3.������ģ�廯
//	print3(p);
//}


//template <class T>
//class Base
//{
//	T m;
//};
//class Son :public Base  //err Tû��ָ������
//
//class Son1 :public Base <int>
//{
//
//};
//
////���ָ�������е�T���ͣ�����Ҳ��Ҫ����ģ��
//template <class T>
//class Son2 :public Base<T>
//{
//
//};
//template <class T>
//class person
//{
//public:
//	person(T name);
//	void print();
//	T name;
//};
////���캯��������ʵ��
//template <class T>
//person<T>::person(T name)
//{
//	this->name = name;
//}
////��Ա����������ʵ��
//template <class T>
//void person<T>::print()
//{
//	cout << this->name << endl;
//}

int main()
{
	person<string>p1("xiy1");
	p1.print();
}