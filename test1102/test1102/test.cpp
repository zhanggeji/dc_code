//#include<iostream>
//#include<string>
//using namespace std;
//string& operator+=(const char* str); //����+=������
//string& operator+=(const char c); //����+=������
//string& operator+=(const string& str); //����+=������
//string& append(const char* s); //���ַ���s���ӵ���ǰ�ַ�����β
//string& append(const char* s, int n); //���ַ���s��ǰn���ַ����ӵ���ǰ�ַ�����β
//string& append(const string& s); //ͬoperator+=(const string& str)
//string& append(const string& s, int pos, int n);//�ַ���s�д�pos��ʼ��n���ַ����ӵ��ַ�����β
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
	find ����������
	int find(const string& str, int pos = 0) const; //����str��һ�γ���λ��,��pos��ʼ����
	int find(const char* s, int pos = 0) const; //����s��һ�γ���λ��,��pos��ʼ����
	int find(const char* s, int pos, int n) const; //������ҵ�һ��λ��
	int find(const char c, int pos = 0) const; //�����ַ�c��һ�γ���λ��
	rfind ����������
	int rfind(const string& str, int pos = npos) const; //����str���һ��λ��,��pos��ʼ����
	int rfind(const char* s, int pos = npos) const; //����s���һ�γ���λ��,��pos��ʼ����
	int rfind(const char* s, int pos, int n) const; //��pos����s��ǰn���ַ����һ��λ��
	int rfind(const char c, int pos = 0) const; //�����ַ�c���һ�γ���λ��
	�滻
	string& replace(int pos, int n, const string& str); //�滻��pos��ʼn���ַ�Ϊ�ַ���str
	string& replace(int pos, int n,const char* s); //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
	*/
	//string s1 = "hello!";

	//string s2 = "nihao,hello,haha";

	////1.int find(const char c, int pos = 0) const;
	//int ret = s2.find('a');//�ҵ������±꣨��0��ʼ����δ�ҵ�����-1
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