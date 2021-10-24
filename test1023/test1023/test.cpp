#include<iostream>
#include<string.h>
#include <fstream>
using namespace std;
typedef int Status;
//字母结构体
typedef  struct
{
	char data;//字母
	int count;//出现次数
}AlphaBet;
//哈夫曼树
typedef struct
{
	char info;//字母
	int weight;//权重
	int parent, lch, rch;//双亲，左孩子，右孩子
}HfNode, * HffmanTree;

//读txt格式的文本数据，并数出字母数目
Status fileread(AlphaBet* AB)
{
	int BigSum = 0;
	int SmallSun = 0;
	int Sum = 0;
	//创建流对象
	fstream fileread;
	//26个字母结构体初始化（不分大小写）
	for (int i = 1; i <= 26; i++)
	{
		AB[i].data = 97 + i - 1;
		AB[i].count = 0;
	}
	fileread.open("test.txt", ios::in);
	char c;
	while (!fileread.eof())//end of file
	{
		fileread >> c;
		int m = (int)c;
		if (m >= 97 && m <= 122)
		{
			AB[m - 96].count++;
			SmallSun++;
		}
		if (m >= 65 && m <= 90)
		{
			AB[m - 64].count++;
			BigSum++;
		}
		Sum++;
	}
	for (int i = 1; i <= 26; i++)
	{
		cout << "[" << i << "]" << AB[i].data << AB[i].count << endl;
	}
	fileread.close();
	cout << "sum=" << Sum << endl;;
	cout << "big sum=" << BigSum << endl;
	cout << "small sum=" << SmallSun << endl;
	cout << "big+small=" << BigSum + SmallSun << endl;
	return 1;
}


int Min(HffmanTree& HT, int i)
{
	int MinWeight = 300000;
	int x = i - 1;
	int m=0;
	//从[1,i-1]个Node中找最小权值Node的下标
	for(int j=1;j<=x;j++)
	{
		if (HT[j].parent == 0 && HT[j].weight < MinWeight)
		{
			m = x;
			MinWeight = HT[j].weight;
		}
	}
	HT[m].parent = i;
	return m;
}
void Selet(HffmanTree& HT, int i, int& s1, int& s2)
{
	s1 = Min(HT, i);
	s2 = Min(HT, i);
}
//建立哈夫曼树
void CreateHuffMTree(AlphaBet* AB, HffmanTree& HT, int n)
{
	int s1, s2;//权值最小的两个下标
	int m = 2 * n - 1;//Node个数
	HT = new HfNode[m + 1];//堆上开辟m+1个Node
	//初始化哈夫曼树
	for (int i = 1; i <= m; i++)
	{
		HT[i].parent = 0;
		HT[i].lch = 0;
		HT[i].rch = 0;
	}
	//字母结构体权重+字母内容交给哈夫曼树
	for (int i = 1; i <= n; i++)
	{
		HT[i].info = AB[i].data;
		HT[i].weight = AB[i].count;
	}
	//构建哈夫曼树的原理是：
	//先找出[1,n]中权值最小的两个Node
	//n+1是找出的两Node合并之后的新Node
	//再用新Node和剩下的Node的权值进行比较
	//直到只剩一个Node（最后一个也就是根）
	for (int i = n + 1; i <= m; i++)
	{
		Selet(HT, i, s1, s2);//找出权值最小的两个Node的下标
		HT[i].lch = s1;//新Node的左右孩子的设置
		HT[i].rch = s2;
		HT[i].weight = HT[s1].weight + HT[s2].weight;//左右孩子权值相加
	}
}
int main()
{

	AlphaBet AB[27];
	HffmanTree HT;
	fileread(AB);
	CreateHuffMTree(AB, HT, 26);

}