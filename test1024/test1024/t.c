//BF�㷨
#include<stdio.h> 
#include<string.h>
//int BF(char x[], char y[])
//{
//	int strat_x = 0;
//	int strat_y = 0;
//	while (strat_x < strlen(x) && strat_y < strlen(y))//
//	{
//		if (x[strat_x] == y[strat_y])
//		{
//			strat_x++;
//			strat_y++;
//		}
//		else
//		{
//			strat_x = strat_x - strat_y + 1;   
//			strat_y = 0;
//		}
//	}
//	if (strat_y == strlen(y))
//	{
//		return strat_x - strat_y;
//	}
//	else
//	{
//		return -1;
//	}
//}
//int main()
//{
//	char a[] = "ababdabbabc";
//	char b[] = "abc";
//	printf("�±�Ϊ��%d", BF(a, b));
//	return 0;
//}
//
//#include<stdio.h> 
//#include<string.h>
//int BF(char s[], char t[])  //�ַ���ƥ��
//{
//	int i = 0, j = 0;
//	while (i < strlen(s) && j < strlen(t))
//	{
//		if (s[i] == t[j]) {        //�Ƚ������ַ�����ͬʱ 
//			i++;
//			j++;
//		}
//		else {                  //�Ƚ������ַ�������ͬʱ 	
//			i = i - j + 1;           //i���˵�ԭ��i����һ��λ�� 
//			j = 0;               //j��0��ʼ 
//		}
//	}
//	if (j == strlen(t))          //t���ַ��Ƚ���� 
//		return i - j;            //t��s���Ӵ�������λ��               
//	else                      //t����s���Ӵ� 
//		return -1;             //����-1 
//}
//int main() {
//	char S[] = "abaacababcac";
//	char T[] = "ababc";
//	printf("T��S�г��ֵ���ʼλ�ã� %d\n", BF(S, T));
//}

