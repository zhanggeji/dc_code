#include<iostream>
#include<string>
using namespace std;
////string�Ĺ��캯��
//int main()
//{
//	//1.Ĭ�Ϲ��� string()
//	string s1;
//	//2.�вι��� string(const char* s);
//	const char* str = "Hello";
//	string s2(str);
//	//3.�������� string(const string& str);
//	string s3(s2);
//	//4.�����һ�ֹ��� string(int n, char c);
//	string s4(10, 'a');
//}
//
//string& operator=(const char* s); //char*�����ַ��� ��ֵ����ǰ���ַ���
//string& operator=(const string& s); //���ַ���s������ǰ���ַ���
//string& operator=(char c); //�ַ���ֵ����ǰ���ַ���
//string& assign(const char* s); //���ַ���s������ǰ���ַ���
//string& assign(const char* s, int n); //���ַ���s��ǰn���ַ�������ǰ���ַ���
//string& assign(const string& s); //���ַ���s������ǰ�ַ���
//string& assign(int n, char c); //��n���ַ�c������ǰ�ַ���

//int main()
//{
//	//1.string& operator=(char c)
//	string s1;
//	s1 = 'a';
//	//2.string& operator=(const char* s)
//	const char* str = "hello";
//	string s2;
//	s2= str;
//	//3.string& operator=(const string& s)
//	string s3;
//	s3 = s2;
//	//4.string& assign(const char* s)
//	string s4;
//	s4.assign(str);
//	//5.string& assign(const char* s, int n)
//	string s5;
//	s5.assign(str, 3);
//	//6.string& assign(const string& s)
//	string s6;
//	s6.assign(s2);
//	//7.string& assign(int n, char c)
//	string s7;
//	s7.assign(5, 'a');
//}