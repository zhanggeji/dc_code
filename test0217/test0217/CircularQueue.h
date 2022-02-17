#pragma once
#include <stdlib.h>
#include <stdbool.h>
////���黷��
//typedef struct CircularQueue
//{
//	int* arry; 
//	int front;
//	int tail;
//	int size;//�����С
//}CQueue;
////��ʼ��
//void CQueueInit(CQueue* cq, int k);
////�жϻ��ζ����Ƿ�Ϊ��
//bool CQueueIsEmpty(CQueue* cq);
////�жϻ��ζ����Ƿ�Ϊ��
//bool CQueueIsFull(CQueue* cq);
////���
//void CQueuePush(CQueue* cq,int x);
////����
//void CQueuePop(CQueue* cq);
////ȡ��ͷԪ��
//int CQueueFront(CQueue* cq);
////ȡ��βԪ��
//int CQueueBack(CQueue* cq);
////���ζ��е�����
//void CQueueDestroy(CQueue* cq);


//������
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
//��ʼ��
void CQueueInit(CQueue* cq, int k);
CQueueNode* CreatCQueueList(int k);
//�жϻ��ζ����Ƿ�Ϊ��
bool CQueueIsEmpty(CQueue* cq);
//�жϻ��ζ����Ƿ�Ϊ��
bool CQueueIsFull(CQueue* cq);
//���
void CQueuePush(CQueue* cq, int x);
//����
void CQueuePop(CQueue* cq);
//ȡ��ͷԪ��
int CQueueFront(CQueue* cq);
//ȡ��βԪ��
int CQueueBack(CQueue* cq);
//���ζ��е�����
void CQueueDestroy(CQueue* cq);