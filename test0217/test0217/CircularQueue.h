#pragma once
#include <stdlib.h>
#include <stdbool.h>
////数组环形
//typedef struct CircularQueue
//{
//	int* arry; 
//	int front;
//	int tail;
//	int size;//数组大小
//}CQueue;
////初始化
//void CQueueInit(CQueue* cq, int k);
////判断环形队列是否为空
//bool CQueueIsEmpty(CQueue* cq);
////判断环形队列是否为满
//bool CQueueIsFull(CQueue* cq);
////入队
//void CQueuePush(CQueue* cq,int x);
////出队
//void CQueuePop(CQueue* cq);
////取队头元素
//int CQueueFront(CQueue* cq);
////取队尾元素
//int CQueueBack(CQueue* cq);
////环形队列的销毁
//void CQueueDestroy(CQueue* cq);


//链表环队
typedef int DataType;
typedef struct CQueueNode
{
	DataType data;
	CQueueNode* next;
}CQueueNode;
typedef struct CQueue
{
	CQueueNode* front;
	CQueueNode* tail;
}CQueue;
//初始化
void CQueueInit(CQueue* cq, int k);
CQueueNode* CreatCQueueList(int k);
//判断环形队列是否为空
bool CQueueIsEmpty(CQueue* cq);
//判断环形队列是否为满
bool CQueueIsFull(CQueue* cq);
//入队
void CQueuePush(CQueue* cq, int x);
//出队
void CQueuePop(CQueue* cq);
//取队头元素
int CQueueFront(CQueue* cq);
//取队尾元素
int CQueueBack(CQueue* cq);
//环形队列的销毁
void CQueueDestroy(CQueue* cq);