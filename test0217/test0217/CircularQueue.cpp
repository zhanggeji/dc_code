#include "CircularQueue.h"
#include <assert.h>
#include <stdio.h>
////初始化
//void CQueueInit(CQueue* cq, int k)
//{
//	assert(cq);
//	cq->arry = (int*)malloc(sizeof(int) * (k+1));
//	cq->front = cq->tail = 0;
//	cq->size = k;
//
//}
////判断环形队列是否为空
//bool CQueueIsEmpty(CQueue* cq)
//{
//	assert(cq);
//	return cq->front == cq->tail;
//}
////判断环形队列是否为满
//bool CQueueIsFull(CQueue* cq)
//{
//	assert(cq);
//	return (cq->tail + 1) % (cq->size + 1) == cq->front;
//}
////入队
//void CQueuePush(CQueue* cq, int x)
//{
//	if (CQueueIsFull(cq))
//	{
//		printf("队满！");
//		exit(0);
//	}
//	cq->arry[cq->tail] = x;
//	cq->tail = (cq->tail + 1) % (cq->size + 1);
//}
////出队
//void CQueuePop(CQueue* cq)
//{
//	if (CQueueIsEmpty(cq))
//	{
//		printf("队空！");
//		exit(0);
//	}
//	cq->front = (cq->front + 1) % (cq->size + 1);
//}
////取队头元素
//int CQueueFront(CQueue* cq)
//{
//	if (CQueueIsEmpty(cq))
//	{
//		printf("队空！");
//		exit(0);
//	}
//	return cq->arry[cq->front];
//}
////取队尾元素
//int CQueueBack(CQueue* cq)
//{
//	if (CQueueIsEmpty(cq))
//	{
//		printf("队空！");
//		exit(0);
//	}
//	int tail_i = (cq->tail + cq->size) % (cq->size + 1);
//	return cq->arry[tail_i];
//}
////环形队列的销毁
//void CQueueDestroy(CQueue* cq)
//{
//	assert(cq);
//	free(cq->arry);
//	free(cq);
//}
//int main()
//{
//	CQueue c;
//	CQueueInit(&c,4);
//	CQueuePush(&c, 1);
//	CQueuePush(&c, 2);
//	CQueuePush(&c, 3);
//	CQueuePush(&c, 4);
//	printf("%d\n", CQueueBack(&c));
//	CQueuePop(&c);
//	printf("%d\n", CQueueFront(&c));
//}

//初始化
void CQueueInit(CQueue* cq, int k)
{
	assert(cq);
	CQueueNode* plist = CreatCQueueList(k + 1);
	cq->front = cq->tail = plist;
}
//创建k个结点的链表
CQueueNode* CreatCQueueList(int k)
{
	CQueueNode* phead = NULL;
	CQueueNode* tail = phead;
	while (k)
	{
		CQueueNode* newNode = (CQueueNode*)malloc(sizeof(CQueueNode));
		newNode->next = NULL;
		if (phead == NULL)
		{
			phead = tail =newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		--k;
	}
	tail->next = phead;
	return phead;
}

//判断环形队列是否为空
bool CQueueIsEmpty(CQueue* cq)
{
	assert(cq);
	return cq->front == cq->tail;
}
//判断环形队列是否为满
bool CQueueIsFull(CQueue* cq)
{
	assert(cq);
	return cq->front == cq->tail->next;
}
//入队
void CQueuePush(CQueue* cq, int x)
{
	assert(cq);
	if (CQueueIsFull(cq))
	{
		printf("队满！");
		exit(0);
	}
	cq->tail->data = x;
	cq->tail = cq->tail->next;
}
//出队
void CQueuePop(CQueue* cq)
{
	assert(cq);
	if (CQueueIsEmpty(cq))
	{
		printf("队空！");
		exit(0);
	}
	cq->front = cq->front->next;
}
//取队头元素
int CQueueFront(CQueue* cq)
{
	assert(cq);
	if (CQueueIsEmpty(cq))
	{
		printf("队空！");
		exit(0);
	}
	return cq->front->data;
}
//取队尾元素
int CQueueBack(CQueue* cq)
{
	assert(cq);
	if (CQueueIsEmpty(cq))
	{
		printf("队空！");
		exit(0);
	}
	CQueueNode* cur = cq->front;
	while (cur)
	{
		if (cur->next == cq->tail)
			break;
		cur = cur->next;
	}
	return cur->data;
}
//环形队列的销毁
void CQueueDestroy(CQueue* cq)
{
	assert(cq);
	CQueueNode* cur = cq->front;
	while (cur)
	{
		CQueueNode* next = cur->next;
		free(cur);
		cur = next;
	}
	free(cq);
}
int main()
{
	CQueue c;
	CQueueInit(&c,4);
	CQueuePush(&c, 2);
	CQueuePush(&c, 2);
	CQueuePush(&c, 3);
	CQueuePush(&c, 4);


	printf("%d\n", CQueueFront(&c));
	printf("%d\n", CQueueBack(&c));
	

}