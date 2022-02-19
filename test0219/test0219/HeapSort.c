#include <stdio.h>
//交换函数
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//向上调整
void AdjustUp(int* a, int child)
{
	//用公式计算父节点
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] < a[child])
		{
			//交换
			Swap(&a[parent], &a[child]);

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
//向下调整
void AdjustDown(int* a, int parent, int size)
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
			//更换父节点和孩子节点的下标，继续比较
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void Print(int *a,int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
void HeapSort(int *a,int size)
{
	//方法一：向上调整法建立大堆
	for (int i = 1; i < size; i++)
	{
		AdjustUp(a, i);
	}
	Print(a, size);
	//方法二：向下调整法建立大堆
	for (int i = (size - 1 - 1) / 2; i > 0; i--)
	{
		AdjustDown(a, i, size);
	}
	Print(a, size);
	for (int i = size - 1; i > 0; i--)
	{
		//堆顶（此时堆中最大元素）与堆尾元素互换位置
		Swap(&a[0], &a[i]);
		//堆顶元素向下调整
		AdjustDown(a, 0, i);
	}
	Print(a, size);
}
int main()
{
	int a[] = { 56,12,45,10,9,25 };
	int size = sizeof(a) / sizeof(int);
	HeapSort(a, size);
	return 0;
}
