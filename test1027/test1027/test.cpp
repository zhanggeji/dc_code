#include<iostream>
using namespace std;

////����ģ��
//template <typename T>
//void MySwap(T& a, T& b)
//{
//	T temp = a;
//	a = b;
//	b = temp;
//}
////��ӡģ��
//template<typename T>
//void MyPrint(T arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout << arr[i];
//	}
//}
////����ģ��
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
//	//�ַ��������
//	char arr1[] = "badcfeg";
//	MySort(arr1, sizeof(arr1) / sizeof(char));
//	//�����������
//	int arr2[] = { 1,3,4,5,2,6,7,9 };
//	MySort(arr2, sizeof(arr2) / sizeof(int));
//}

//
////��ͨ����
//int add(int a, int b)
//{
//	return a + b;
//}
////����ģ��
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
//	cout << add(a, c) << endl;//��ͨ�������Է�����ʽ����ת��
//	cout << MyAdd(a, b) << endl;
//	cout << MyAdd(a, c) << endl;//err �Զ������Ƶ��޷�������ʽ����ת��
//	cout << MyAdd<int>(a, c) << endl;//��ʾ��ʾָ�����Ϳ��Խ�����ʽ����ת��
//}

//
//void print(int a)
//{
//	cout << "��ͨ��������" << endl;
//}
//template <typename T>
//void print(T a)
//{
//	cout << "����ģ�����" << endl;
//}
//template <typename T>
//void print(T a, T b)
//{
//	cout << "���ص���" << endl;
//}
//int main()
//{
//	int a = 10;
//	//1.ͬ����ͨ�����뺯��ģ�壬���ȵ�����ͨ������
//	print(a);//�������ͨ��������
//
//	//2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ�塣
//	print<>(a);//���������ģ�����
//
//	//3.�������ģ����Բ������õ�ƥ��,���ȵ��ú���ģ��
//	char c = a;
//	print(c);//���������ģ�����
//
//	//4.����ģ����Ժ�������
//	print(a, 1);//��������ص���
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
////�ض��������ṩ���廯��ģ��
////���廯�����ڳ���ģ��
//template<>bool test(person p1, person p2)
//{
//	if (p1.age == p2.age && p1.name == p2.name)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	person p1("����", 10);
//	person p2("����", 10);
//	if (test(p1, p2))
//		cout << "a==b" << endl;
//	else
//		cout << "a!=b" << endl;
//}