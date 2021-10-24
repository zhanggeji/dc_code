//BF算法
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
//	printf("下标为：%d", BF(a, b));
//	return 0;
//}
//
//#include<stdio.h> 
//#include<string.h>
//int BF(char s[], char t[])  //字符串匹配
//{
//	int i = 0, j = 0;
//	while (i < strlen(s) && j < strlen(t))
//	{
//		if (s[i] == t[j]) {        //比较两个字符串相同时 
//			i++;
//			j++;
//		}
//		else {                  //比较两个字符串不相同时 	
//			i = i - j + 1;           //i回退到原来i的下一个位置 
//			j = 0;               //j从0开始 
//		}
//	}
//	if (j == strlen(t))          //t的字符比较完毕 
//		return i - j;            //t是s的子串，返回位置               
//	else                      //t不是s的子串 
//		return -1;             //返回-1 
//}
//int main() {
//	char S[] = "abaacababcac";
//	char T[] = "ababc";
//	printf("T在S中出现的起始位置： %d\n", BF(S, T));
//}

