
#include<stdio.h>
// 无头+单向+非循环链表
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;//数据域
	struct SListNode* next;//指针域 //结构体自引用
}SListNode;
//创建一个新结点，返回新结点地址
SListNode* BuySLTNode(SLTDataType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));//向新结点申请空间
	if (node == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	node->data = x;//将数据赋值到新结点的数据域
	node->next = NULL;//将新结点的指针域置空
	return node;//返回新结点地址
}
void SListPushFront(SListNode** pplist, SLTDataType x)
{
	SListNode* newnode = BuySLTNode(x);//创建一个新的结点
	newnode->next = *pplist;//新结点的指针域指向下一个结点
	*pplist = newnode;//重新设置头结点
}
void SListPushBack(SListNode** pplist, SLTDataType x)
{
	SListNode* newnode = BuySLTNode(x);//创建一个新结点
	if (*pplist == NULL)//如果链表为空
	{
		*pplist = newnode;//直接把新节点给头指针
	}
	else
	{
		SListNode* tail = *pplist;//临时创建tail目的是寻找尾部
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SListPopFront(SListNode** pplist)
{
	if (*pplist == NULL)//没有结点
	{
		
	}
	else
	{
		*pplist = (*pplist)->next;
	}
}
//尾删
//void SListPopBack(SListNode** pplist)
//{
//	SListNode* prev = NULL;
//	if (*pplist == NULL)//空
//	{
//		return;
//		//assert(*pplist!=NULL);
//	}
//	else if((*pplist)->next==NULL)//只有一个结点
//	{
//		free(*pplist);
//		*pplist = NULL;
//	}
//	else
//	{
//		SListNode* tail = *pplist;
//		while (tail->next != NULL)
//		{
//			prev = tail;
//			tail = tail->next;
//		}
//		free(tail);
//		tail = NULL;//free后记得置空
//		prev->next = NULL;
//	}
//}
void SListPopBack(SListNode** pplist)
{
	if (*pplist == NULL)//空
	{
		return;
		//assert(*pplist!=NULL);
	}
	else if((*pplist)->next==NULL)
	{
		free(*pplist);
		*pplist = NULL;
	}
	else
	{
		SListNode* tail = *pplist;
		while (tail->next->next != NULL)
		{
			tail = tail->next;
		}
		free(tail->next);
		tail->next= NULL;
	}
}
void SListPopFront(SListNode** pplist)
{
	if (*pplist == NULL)
	{
		return;
		//assert(*pplist!=NULL)
	}
	else
	{
		SListNode* temp = *pplist;
		*pplist = (*pplist)->next;
		free(temp);
		temp = NULL;
	}
}

SListNode* SListFind(SListNode* plist, SLTDataType x)
{
	SListNode* cur = plist;
	while (cur)
	{
		if (x == cur->data)
			return cur;
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}


void SListModify(SListNode* pos, SLTDataType x)
{
	pos->data = x;
}
//int main()
//{
//	SListNode* pos = SListFind(plist, 2);
//	int i = 0;
//	while (pos)
//	{
//		pos = SListFind(plist, 2);
//		i += 1;
//	}
//}
void SListInsert(SListNode** pplist, SListNode* pos, SLTDataType x)
{
	SListNode* newnode = BuySLTNode(x);
	SListNode* posPrev = *pplist;
	if (*pplist == pos)
	{
		newnode->next = *pplist;
		*pplist = newnode;
	}
	else
	{
		while (posPrev->next != pos)
		{
			posPrev = posPrev->next;
		}
		posPrev->next = newnode;
		newnode->next = pos;
	}
}

struct ListNode* removeElements(struct ListNode* head, int val) {
	if (head == NULL)
		return NULL;
	ListNode* temp = head;
	while (temp)
	{
		i)
	}

}
