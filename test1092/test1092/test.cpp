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
//	//1.类模板没有自动类型推导
//	//person p1("xiyang", 18);//err
//	//2.类模板在模板参数列表中可以有默认参数
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
//	//没有编译之前不会报错，编译之后报错
//	//说明类模板的成员函数是在调用后创建的
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
//	cout << "T1的类型:" << typeid(T1).name() << endl;//模板推出的数据类型
//	cout << "T2的类型:" << typeid(T2).name() << endl;
//}
//
//template <class T>
//void print3(T& p)
//{
//	p.print();
//
//	cout << "T的数据类型：" << typeid(T).name() << endl;
//}
//int main()
//{
//	person <string, int>p("xiyang", 18);
//	// 1.指定传入的类型
//	print1(p);
//	// 2.参数模板化
//	print2(p);
//	// 3.整个类模板化
//	print3(p);
//}


//template <class T>
//class Base
//{
//	T m;
//};
//class Son :public Base  //err T没有指定类型
//
//class Son1 :public Base <int>
//{
//
//};
//
////灵活指定父类中的T类型，子类也需要变类模板
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
////构造函数的类外实现
//template <class T>
//person<T>::person(T name)
//{
//	this->name = name;
//}
////成员函数的类外实现
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