#include <stdio.h>
//��������
void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
//���ϵ���
void AdjustUp(int* a, int child)
{
	//�ù�ʽ���㸸�ڵ�
	int parent = (child - 1) / 2;
	while (child > 0)
	{
		if (a[parent] < a[child])
		{
			//����
			Swap(&a[parent], &a[child]);

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
//���µ���
void AdjustDown(int* a, int parent, int size)
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
			//�������ڵ�ͺ��ӽڵ���±꣬�����Ƚ�
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
	//����һ�����ϵ������������
	for (int i = 1; i < size; i++)
	{
		AdjustUp(a, i);
	}
	Print(a, size);
	//�����������µ������������
	for (int i = (size - 1 - 1) / 2; i > 0; i--)
	{
		AdjustDown(a, i, size);
	}
	Print(a, size);
	for (int i = size - 1; i > 0; i--)
	{
		//�Ѷ�����ʱ�������Ԫ�أ����βԪ�ػ���λ��
		Swap(&a[0], &a[i]);
		//�Ѷ�Ԫ�����µ���
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
