#include "Heap.h"
#include <stdio.h>
#include  <stdlib.h>
#include <assert.h>

//初始化
void HeapInit(HP* hp)
{
	assert(hp);
	hp->a = NULL;
	hp->size = hp->capacity = 0;
}
//销毁
void HeapDeatroy(HP* hp)
{
	assert(hp);
	free(hp->a);
	hp->size = hp->capacity = 0;
}
//判断堆是否为空
bool HeapIsEmpty(HP* hp)
{
	assert(hp);
	return hp->size == 0;
}
//判断堆是否为满
bool HeapIsFull(HP* hp) 
{
	assert(hp);
	return hp->size == hp->capacity;
}

//取堆顶元素
DataType HeapTop(HP* hp)
{
	assert(hp);
	assert(!HeapIsEmpty(hp));
	return hp->a[0];
}
//打印堆中元素
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
//交换函数
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//入堆
void HeapPush(HP* hp,DataType x)
{
	assert(hp);
	//扩容
	//Full同时包括size==0 capacity==0 的情况
	if (HeapIsFull(hp))
	{
		int newCapacity = (hp->capacity == 0) ? 4 : hp->capacity * 2;
		DataType* tmp = realloc(hp->a, sizeof(DataType) * newCapacity);
		if (tmp == NULL)//开辟失败
		{
			printf("fail!");
			exit(0);
		}
		hp->a = tmp;
		hp->capacity = newCapacity;//赋值新容量
	}
	//将新节点加入堆中
	hp->a[hp->size] = x;
	hp->size++;
	//向上调整
	AdjustUp(hp->a, hp->size - 1);//调整数组内容和待调整的位置
}
void AdjustUp(DataType*a,int child)
{
	//用公式计算父节点
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] < a[child])
		{
			//交换
			Swap(&a[parent], &a[child]);
			/*DataType* tmp = a[parent];
			a[parent] = a[child];
			a[child] = a[parent];*/

			//更换父节点和孩子节点的下标，继续比较
			child = parent;
			parent = (child - 1) / 2;
		}
		else
		{
			//此时当前路径（从根到叶子节点）满足大堆要求直接break
			break;
		}
	}
}
////交换函数
//void Swap(int* x, int* y)
//{
//	int tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//出堆
void HeapPop(HP* hp)
{
	assert(hp);
	assert(!HeapIsEmpty(hp));
	//尾与顶交换
	Swap(&hp->a[0], &hp->a[hp->size - 1]);
	//DataType* tmp = hp->a[0];
	//hp->a[0] = hp->a[hp->size - 1];
	//hp->a[hp->size - 1] = tmp;
	//删尾
	hp->size--;
	//向下调整
	AdjustDown(hp->a, 0,hp->size);//调整数组内容和待调整的位置
}
void AdjustDown(DataType*a,int parent,int size)
{
	//用公式计算左孩子的节点下标（可能没有右孩子）
	int child = parent * 2 + 1;
	while (child < size)
	{
		//变成大的那个孩子
		//判断右孩子是否存在 + 判断右孩子是否大于左孩子
		if (child + 1 < size && a[child] < a[child + 1])
		{
			++child;//切换成右孩子
		}
		if (a[child] > a[parent])
		{
			//交换
			Swap(&a[parent], &a[child]);
		/*	DataType* tmp = a[parent];
			a[parent] = a[child];
			a[child] = a[parent];*/

			//更换父节点和孩子节点的下标，继续比较
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