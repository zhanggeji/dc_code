#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class MyCompare
{
public:
	//两个参数——二元谓词
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
	//默认sort从小到大
	cout << "sort排序默认输出：" << endl;
	sort(v.begin(), v.end());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it<<" ";
	}
	cout << endl;
	//从大到小
	cout << "sort排序从大到小输出：" << endl;
	sort(v.begin(), v.end(), MyCompare());
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

}