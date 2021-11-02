//#include<iostream>
//#include<string>
//using namespace std;
//string& operator+=(const char* str); //重载+=操作符
//string& operator+=(const char c); //重载+=操作符
//string& operator+=(const string& str); //重载+=操作符
//string& append(const char* s); //把字符串s连接到当前字符串结尾
//string& append(const char* s, int n); //把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string& s); //同operator+=(const string& str)
//string& append(const string& s, int pos, int n);//字符串s中从pos开始的n个字符连接到字符串结尾
//int main()
//{
	////eg.
	//string s1 = "hello!";
	//string s2;
	//s2 = 'a';
	//const char* str = "haha";
	////1.string& operator+=(const char c)
	//string s3;
	//s3+= s2;
	////2.string& operator+=(const char* str)
	//string s4;
	//s4 += str;
	////3.string& operator+=(const string& str)
	//string s5;
	//s5 += s1;
	////4.string& append(const char* str)
	//string s6;
	//s6.append(str);
 //   //5.string& append(const char* s, int n)
	//string s7;
	//s7.append(str, 3);
	////6.string& append(const string& s)
	//string s8;
	//s8.append(s1);
	////7.string& append(const string& s, int pos, int n);
	//string s9;
	//s9.append(s1, 2, 2);


	/*
	* 
	* 
	find 从左向右找
	int find(const string& str, int pos = 0) const; //查找str第一次出现位置,从pos开始查找
	int find(const char* s, int pos = 0) const; //查找s第一次出现位置,从pos开始查找
	int find(const char* s, int pos, int n) const; //区间查找第一次位置
	int find(const char c, int pos = 0) const; //查找字符c第一次出现位置
	rfind 从右向左找
	int rfind(const string& str, int pos = npos) const; //查找str最后一次位置,从pos开始查找
	int rfind(const char* s, int pos = npos) const; //查找s最后一次出现位置,从pos开始查找
	int rfind(const char* s, int pos, int n) const; //从pos查找s的前n个字符最后一次位置
	int rfind(const char c, int pos = 0) const; //查找字符c最后一次出现位置
	替换
	string& replace(int pos, int n, const string& str); //替换从pos开始n个字符为字符串str
	string& replace(int pos, int n,const char* s); //替换从pos开始的n个字符为字符串s
	*/
	//string s1 = "hello!";

	//string s2 = "nihao,hello,haha";

	////1.int find(const char c, int pos = 0) const;
	//int ret = s2.find('a');//找到返回下标（从0开始），未找到返回-1
	////2.int find(const char* s, int pos = 0) const
	//ret = s2.find("ha");
	////3.int find(const char* s, int pos, int n) const
	//ret = s2.find("ha", 5, 6);
	////4.int find(const string& str, int pos = 0) const
	//ret = s2.find(s1);
	////5.int rfind(const char c, int pos = 0) const
	//ret = s2.rfind('a');
	////6.int rfind(const char* s, int pos = npos) const
	//ret = s2.rfind("ha", 5);
	////7.int rfind(const char* s, int pos, int n) const
	//ret = s2.rfind("ha", 5, 6);
	////8.int rfind(const string& str, int pos = npos) const
	//ret = s2.rfind(s1);
	////9.string& replace(int pos, int n,const char* s)
	//s2.replace(0, 7, s1);
	////10.string& replace(int pos, int n, const string& str)
	//s2.replace(0, 7, "haha");
//}