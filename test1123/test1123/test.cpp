#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class MyCompare
{
public:
	//��������������Ԫν��
	bool operator()(int num1,int num2)
	{
		return num1 > num2;
	}
};
int main()
{
	vector<int> v;
	v.push_back(1);
	v.push_back(3);
	v.push_back(2);
	v.push_back(5);
	//Ĭ��sort��С����
	cout << "sort����Ĭ�������" << endl;
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<<" ";
	}
	cout << endl;
	//�Ӵ�С
	cout << "sort����Ӵ�С�����" << endl;
	sort(v.begin(), v.end(), MyCompare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}