#pragma once
//typedef char DataType;
//struct TreeNode
//{
//	int parent;
//	DataType data;
//};
//typedef char DataType;
//struct TreeNode
//{
//	DataType data;
//	TreeNode* fristChild;
//	TreeNode* nextBrother;
//};
#include <stdbool.h>
typedef int DataType;
typedef struct Heap
{
	DataType* a;
	int size;//放入数组元素的个数
	int capacity;//总容量
}HP;
//初始化
void HeapInit(HP* hp);
//销毁
void HeapDeatroy(HP* hp);
//判断堆是否为空
bool HeapIsEmpty(HP* hp);
//判断堆是否为满
bool HeapIsFull(HP* hp);
//取堆顶元素
DataType HeapTop(HP* hp);
//打印堆中元素
void HeapPrint(HP* hp);
//入堆
void HeapPush(HP* hp, DataType x);
void AdjustUp(DataType* a, int pos);
//出堆
void HeapPop(HP* hp);
void AdjustDown(DataType* a, int parent, int size);
