//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//#include <stdlib.h>
//#define MAXVALUE 10000 /*���ȨֵΪ10000 */
//#define MAXLEAF 30 /* �����30��Ҷ�ӽ�� */
//#define MAXNODE MAXLEAF*2-1 
/* ����������޶�Ϊ1�Ľ��,�ܽ����n=n0+n2 ����n0 =30ʱ,���ݶ���������
//n0=n2+1, n2 = n0�C1=29�����Թ������������30+29 =59����� */
//#define MAXBIT 10  
//typedef struct
//{
//    int weight;
//    int parent;
//    int lchild;
//    int rchild;
//}HNodeType;
//typedef struct
//{
//    int bit[MAXBIT];  /*������ַ�����������Ŀռ�*/
//    int start;        /* ������ַ�����������Ŀ�ʼλ�� */
//}HCodeType;
//void Create_HuffMTree(HNodeType HFMTree[], int n)
//{
//    int m1, m2, x1, x2;
//    int i, j;
//    for (i = 0; i < 2 * n - 1; i++)
//    {
//        HFMTree[i].weight = 0;
//        HFMTree[i].parent = -1;
//        HFMTree[i].lchild = -1;
//        HFMTree[i].rchild = -1;
//    }
//    for (i = 0; i < n; i++)
//        scanf("%d", &HFMTree[i].weight);
//    for (i = 0; i < n - 1; i++)
//    {
//        x1 = x2 = MAXVALUE;
//        m1 = m2 = 0;
//        for (j = 0; j < n + i; j++)
//        {
//              if (HFMTree[j].parent == -1 && HFMTree[j].weight < x1)
//            {
//                x2 = x1; 
//                m2 = m1;
//                x1 = HFMTree[j].weight;
//                m1 = j;
//            }
//            else if (HFMTree[j].parent == -1 && HFMTree[j].weight < x2)
//            {
//                x2 = HFMTree[j].weight;
//                m2 = j;
//            }
//        }
//        HFMTree[m1].parent = n + i;
//        HFMTree[m2].parent = n + i;
//        HFMTree[n + i].weight = HFMTree[m1].weight+HFMTree[m2].weight;
//        HFMTree[n + i].lchild = m1;
//        HFMTree[n + i].rchild = m2;
//    }
//}
//
//void HuffmanCode(HNodeType HFMTree[], HCodeType HuffCode[], int n)
//{
//    HCodeType cd;
//    int i, j, c, p;
//    for (i = 0; i < n; i++)
//    {
//        cd.start = n - 1;
//        c = i;
//        p = HFMTree[c].parent;
//        while (p != -1)
//        {
//            if (HFMTree[p].lchild == c)
//                cd.bit[cd.start] = 0;
//            else
//                cd.bit[cd.start] = 1;
//            cd.start--;
//            c = p;
//            p = HFMTree[p].parent;
//        }
//        for (j = cd.start+1; j < n; j++)  HuffCode[i].bit[j] = cd.bit[j];
//        HuffCode[i].start = cd.start + 1;
//    }
//}
//void main()
//{
//    HNodeType HFM[MAXNODE];
//    int num;
//    int i, j;
//    HCodeType HFMCode[MAXLEAF];
//    scanf("%d", &num);
//    Create_HuffMTree(HFM, num);
//    HuffmanCode(HFM, HFMCode, num);
//    //for (i = 0; i < num; i++)
//    //{
//    //    for (j = ; j < num; j++)
//    //        printf("%d", HFMCode[i].bit[j]);
//    //    printf("\n");
//    //}
//}


//#include<iostream>
//#include<string.h>
//#include <fstream>
//using namespace std;
//typedef int Status;
////��ĸ�ṹ��
//typedef  struct
//{
//	char data;//��ĸ
//	int count;//���ִ���
//}AlphaBet;
////��������
//typedef struct
//{
//	char info;//��ĸ
//	int weight;//Ȩ��
//	int parent, lch, rch;//˫�ף����ӣ��Һ���
//}HfNode,*HffmanTree;
//
////��txt��ʽ���ı����ݣ���������ĸ��Ŀ
//Status fileread(AlphaBet* AB)
//{
//	int BigSum = 0;
//	int SmallSun = 0;
//	int Sum = 0;
//	//����������
//	fstream fileread;
//	//26����ĸ�ṹ���ʼ�������ִ�Сд��
//	for (int i = 1; i <= 26; i++)
//	{
//		AB[i].data = 97 + i - 1;
//		AB[i].count = 0;
//	}
//	fileread.open("test.txt", ios::in);
//	char c;
//	while (!fileread.eof())//end of file
//	{
//		fileread >> c;
//		int m = (int)c;
//		if (m>= 97 && m <= 122)
//		{
//			AB[m - 96].count++;
//			SmallSun++;
//		}
//		if (m >= 65&& m <= 90)
//		{
//			AB[m - 64].count++;
//			BigSum++;
//		}
//		Sum++;
//	}
//	for (int i = 1; i <= 26; i++)
//	{
//		cout << "[" << i << "]" << AB[i].data << AB[i].count << endl;
//	}
//	fileread.close();
//	cout << "sum=" << Sum << endl;;
//	cout << "big sum=" << BigSum << endl;
//	cout << "small sum=" << SmallSun << endl;
//	cout << "big+small=" << BigSum + SmallSun << endl;
//	return 1;
//}
//
//
//int Min(HffmanTree& HT, int i)
//{
//	int MinWeight = 30000;
//	int x = i - 1;
//	int m;
//	while (x)
//	{
//		if (HT[x].parent == 0 && HT[x].weight < MinWeight)
//		{
//			m = x;
//			MinWeight = HT[x].weight;
//		}
//	}
//	HT[m].parent = i;
//	return m;
//}
//void Selet(HffmanTree& HT, int i, int &s1, int &s2)
//{
//	s1=Min(HT, i);
//	s2=Min(HT, i);
//}
////������������
//void CreateHuffMTree(AlphaBet*AB,HffmanTree &HT,int n)
//{
//	int s1, s2;
//	int m = 2 * n - 1;
//	HT = new HfNode[m+1];
//	//��ʼ����������
//	for (int i = 1; i <= m; i++)
//	{
//		HT[i].parent = 0;
//		HT[i].lch = 0;
//		HT[i].rch = 0;
//	}
//	//��ĸ�ṹ��Ȩ��+��ĸ���ݽ�����������
//	for (int i = 1; i <= n; i++)
//	{
//		HT[i].info = AB[i].data;
//		HT[i].weight= AB[i].count;
//	}
//	//�ҳ�Ȩֵ��С������Ҷ��
//	for (int i = n + 1; i <= m; i++)
//	{
//		Selet(HT, i, s1, s2);//s1s2����С����Ȩ���±�
//		HT[i].lch = s1;
//		HT[i].rch = s2;
//		HT[i].weight = HT[s1].weight + HT[s2].weight;
//
//	}
//}
//int main()
//{
//	
//	AlphaBet AB[27];
//	HffmanTree HT;
//	fileread(AB);
//	CreateHuffMTree(AB, HT, 26);
//}


