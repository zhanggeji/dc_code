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
	int size;//��������Ԫ�صĸ���
	int capacity;//������
}HP;
//��ʼ��
void HeapInit(HP* hp);
//����
void HeapDeatroy(HP* hp);
//�ж϶��Ƿ�Ϊ��
bool HeapIsEmpty(HP* hp);
//�ж϶��Ƿ�Ϊ��
bool HeapIsFull(HP* hp);
//ȡ�Ѷ�Ԫ��
DataType HeapTop(HP* hp);
//��ӡ����Ԫ��
void HeapPrint(HP* hp);
//���
void HeapPush(HP* hp, DataType x);
void AdjustUp(DataType* a, int pos);
//����
void HeapPop(HP* hp);
void AdjustDown(DataType* a, int parent, int size);
