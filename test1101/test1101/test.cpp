#include<iostream>
#include<string>
using namespace std;
////string的构造函数
//int main()
//{
//	//1.默认构造 string()
//	string s1;
//	//2.有参构造 string(const char* s);
//	const char* str = "Hello";
//	string s2(str);
//	//3.拷贝构造 string(const string& str);
//	string s3(s2);
//	//4.特殊的一种构造 string(int n, char c);
//	string s4(10, 'a');
//}
//
//string& operator=(const char* s); //char*类型字符串 赋值给当前的字符串
//string& operator=(const string& s); //把字符串s赋给当前的字符串
//string& operator=(char c); //字符赋值给当前的字符串
//string& assign(const char* s); //把字符串s赋给当前的字符串
//string& assign(const char* s, int n); //把字符串s的前n个字符赋给当前的字符串
//string& assign(const string& s); //把字符串s赋给当前字符串
//string& assign(int n, char c); //用n个字符c赋给当前字符串

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