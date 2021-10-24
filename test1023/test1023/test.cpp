#include<iostream>
#include<string.h>
#include <fstream>
using namespace std;
typedef int Status;
//��ĸ�ṹ��
typedef  struct
{
	char data;//��ĸ
	int count;//���ִ���
}AlphaBet;
//��������
typedef struct
{
	char info;//��ĸ
	int weight;//Ȩ��
	int parent, lch, rch;//˫�ף����ӣ��Һ���
}HfNode, * HffmanTree;

//��txt��ʽ���ı����ݣ���������ĸ��Ŀ
Status fileread(AlphaBet* AB)
{
	int BigSum = 0;
	int SmallSun = 0;
	int Sum = 0;
	//����������
	fstream fileread;
	//26����ĸ�ṹ���ʼ�������ִ�Сд��
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
	//��[1,i-1]��Node������СȨֵNode���±�
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
//������������
void CreateHuffMTree(AlphaBet* AB, HffmanTree& HT, int n)
{
	int s1, s2;//Ȩֵ��С�������±�
	int m = 2 * n - 1;//Node����
	HT = new HfNode[m + 1];//���Ͽ���m+1��Node
	//��ʼ����������
	for (int i = 1; i <= m; i++)
	{
		HT[i].parent = 0;
		HT[i].lch = 0;
		HT[i].rch = 0;
	}
	//��ĸ�ṹ��Ȩ��+��ĸ���ݽ�����������
	for (int i = 1; i <= n; i++)
	{
		HT[i].info = AB[i].data;
		HT[i].weight = AB[i].count;
	}
	//��������������ԭ���ǣ�
	//���ҳ�[1,n]��Ȩֵ��С������Node
	//n+1���ҳ�����Node�ϲ�֮�����Node
	//������Node��ʣ�µ�Node��Ȩֵ���бȽ�
	//ֱ��ֻʣһ��Node�����һ��Ҳ���Ǹ���
	for (int i = n + 1; i <= m; i++)
	{
		Selet(HT, i, s1, s2);//�ҳ�Ȩֵ��С������Node���±�
		HT[i].lch = s1;//��Node�����Һ��ӵ�����
		HT[i].rch = s2;
		HT[i].weight = HT[s1].weight + HT[s2].weight;//���Һ���Ȩֵ���
	}
}
int main()
{

	AlphaBet AB[27];
	HffmanTree HT;
	fileread(AB);
	CreateHuffMTree(AB, HT, 26);

}