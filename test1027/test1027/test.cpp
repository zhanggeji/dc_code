#include<iostream>
using namespace std;

////交换模板
//template <typename T>
//void MySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
////打印模板
//template<typename T>
//void MyPrint(T arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i];
//	}
//}
////排序模板
//template<typename T>
//void MySort(T arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		T max = arr[i];
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (arr[j] > arr[i])
//			{
//				MySwap(arr[j], arr[i]);
//			}
//		}
//	}
//	MyPrint(arr,sz);
//}
//
//int main()
//{
//	//字符数组测试
//	char arr1[] = "badcfeg";
//	MySort(arr1, sizeof(arr1) / sizeof(char));
//	//整形数组测试
//	int arr2[] = { 1,3,4,5,2,6,7,9 };
//	MySort(arr2, sizeof(arr2) / sizeof(int));
//}

//
////普通函数
//int add(int a, int b)
//{
//	return a + b;
//}
////函数模板
//template <typename T>
//T MyAdd(T a, T b)
//{
//	return a + b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	char c = a;
//	cout<< add(a, b) <<endl;
//	cout << add(a, c) << endl;//普通函数可以发生隐式类型转换
//	cout << MyAdd(a, b) << endl;
//	cout << MyAdd(a, c) << endl;//err 自动类型推导无法进行隐式类型转换
//	cout << MyAdd<int>(a, c) << endl;//显示显示指定类型可以进行隐式类型转换
//}

//
//void print(int a)
//{
//	cout << "普通函数调用" << endl;
//}
//template <typename T>
//void print(T a)
//{
//	cout << "函数模板调用" << endl;
//}
//template <typename T>
//void print(T a, T b)
//{
//	cout << "重载调用" << endl;
//}
//int main()
//{
//	int a = 10;
//	//1.同名普通函数与函数模板，优先调用普通函数。
//	print(a);//输出：普通函数调用
//
//	//2.可以通过空模板参数列表来强制调用函数模板。
//	print<>(a);//输出：函数模板调用
//
//	//3.如果函数模板可以产生更好的匹配,优先调用函数模板
//	char c = a;
//	print(c);//输出：函数模板调用
//
//	//4.函数模板可以函数重载
//	print(a, 1);//输出：重载调用
//}
//
//class person
//{
//public:
//
//	person(string name,int age)
//	{
//		this->age = age;
//		this->name = name;
//	}
//	string name;
//	int age;
//};
//
//template <class T>
//bool test(T a, T b)
//{
//	if (a == b)
//		return true;
//	else
//		return false;
//}
////特定的类型提供具体化的模板
////具体化优先于常规模板
//template<>bool test(person p1, person p2)
//{
//	if (p1.age == p2.age && p1.name == p2.name)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	person p1("张三", 10);
//	person p2("张三", 10);
//	if (test(p1, p2))
//		cout << "a==b" << endl;
//	else
//		cout << "a!=b" << endl;
//}