#include "Heap.h"
#include <stdio.h>
#include  <stdlib.h>
#include <assert.h>

//��ʼ��
void HeapInit(HP* hp)
{
	assert(hp);
	hp->a = NULL;
	hp->size = hp->capacity = 0;
}
//����
void HeapDeatroy(HP* hp)
{
	assert(hp);
	free(hp->a);
	hp->size = hp->capacity = 0;
}
//�ж϶��Ƿ�Ϊ��
bool HeapIsEmpty(HP* hp)
{
	assert(hp);
	return hp->size == 0;
}
//�ж϶��Ƿ�Ϊ��
bool HeapIsFull(HP* hp) 
{
	assert(hp);
	return hp->size == hp->capacity;
}

//ȡ�Ѷ�Ԫ��
DataType HeapTop(HP* hp)
{
	assert(hp);
	assert(!HeapIsEmpty(hp));
	return hp->a[0];
}
//��ӡ����Ԫ��
void HeapPrint(HP* hp)
{
	assert(hp);
	assert(!HeapIsEmpty(hp));
	for (int i = 0; i < hp->size; i++)
	{
		printf("%d ", hp->a[i]);
	}
	printf("\n");
}
//��������
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//���
void HeapPush(HP* hp,DataType x)
{
	assert(hp);
	//����
	//Fullͬʱ����size==0 capacity==0 �����
	if (HeapIsFull(hp))
	{
		int newCapacity = (hp->capacity == 0) ? 4 : hp->capacity * 2;
		DataType* tmp = realloc(hp->a, sizeof(DataType) * newCapacity);
		if (tmp == NULL)//����ʧ��
		{
			printf("fail!");
			exit(0);
		}
		hp->a = tmp;
		hp->capacity = newCapacity;//��ֵ������
	}
	//���½ڵ�������
	hp->a[hp->size] = x;
	hp->size++;
	//���ϵ���
	AdjustUp(hp->a, hp->size - 1);//�����������ݺʹ�������λ��
}
void AdjustUp(DataType*a,int child)
{
	//�ù�ʽ���㸸�ڵ�
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] < a[child])
		{
			//����
			Swap(&a[parent], &a[child]);
			/*DataType* tmp = a[parent];
			a[parent] = a[child];
			a[child] = a[parent];*/

			//�������ڵ�ͺ��ӽڵ���±꣬�����Ƚ�
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			//��ʱ��ǰ·�����Ӹ���Ҷ�ӽڵ㣩������Ҫ��ֱ��break
			break;
		}
	}
}
////��������
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//����
void HeapPop(HP* hp)
{
	assert(hp);
	assert(!HeapIsEmpty(hp));
	//β�붥����
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	//DataType* tmp = hp->a[0];
	//hp->a[0] = hp->a[hp->size - 1];
	//hp->a[hp->size - 1] = tmp;
	//ɾβ
	hp->size--;
	//���µ���
	AdjustDown(hp->a, 0,hp->size);//�����������ݺʹ�������λ��
}
void AdjustDown(DataType*a,int parent,int size)
{
	//�ù�ʽ�������ӵĽڵ��±꣨����û���Һ��ӣ�
	int child = parent * 2 + 1;
	while (child < size)
	{
		//��ɴ���Ǹ�����
		//�ж��Һ����Ƿ���� + �ж��Һ����Ƿ��������
		if (child + 1 < size && a[child] < a[child + 1])
		{
			++child;//�л����Һ���
		}
		if (a[child] > a[parent])
		{
			//����
			Swap(&a[parent], &a[child]);
		/*	DataType* tmp = a[parent];
			a[parent] = a[child];
			a[child] = a[parent];*/

			//�������ڵ�ͺ��ӽڵ���±꣬�����Ƚ�
			parent=child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
int main()
{
	HP hp;
	HeapInit(&hp);
	int a[] = { 1,5,3,8,7,6 };
	for (int i = 0; i < 6; i++)
	{
		HeapPush(&hp, a[i]);
	}
	HeapPop(&hp);
	HeapPrint(&hp);
	return 0;
}