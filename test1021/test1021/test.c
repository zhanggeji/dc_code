
#include<stdio.h>
// ��ͷ+����+��ѭ������
typedef int SLTDataType;
typedef struct SListNode
{
	SLTDataType data;//������
	struct SListNode* next;//ָ���� //�ṹ��������
}SListNode;
//����һ���½�㣬�����½���ַ
SListNode* BuySLTNode(SLTDataType x)
{
	SListNode* node = (SListNode*)malloc(sizeof(SListNode));//���½������ռ�
	if (node == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	node->data = x;//�����ݸ�ֵ���½���������
	node->next = NULL;//���½���ָ�����ÿ�
	return node;//�����½���ַ
}
void SListPushFront(SListNode** pplist, SLTDataType x)
{
	SListNode* newnode = BuySLTNode(x);//����һ���µĽ��
	newnode->next = *pplist;//�½���ָ����ָ����һ�����
	*pplist = newnode;//��������ͷ���
}
void SListPushBack(SListNode** pplist, SLTDataType x)
{
	SListNode* newnode = BuySLTNode(x);//����һ���½��
	if (*pplist == NULL)//�������Ϊ��
	{
		*pplist = newnode;//ֱ�Ӱ��½ڵ��ͷָ��
	}
	else
	{
		SListNode* tail = *pplist;//��ʱ����tailĿ����Ѱ��β��
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		tail->next = newnode;
	}
}
void SListPopFront(SListNode** pplist)
{
	if (*pplist == NULL)//û�н��
	{
		
	}
	else
	{
		*pplist = (*pplist)->next;
	}
}
//βɾ
//void SListPopBack(SListNode** pplist)
//{
//	SListNode* prev = NULL;
//	if (*pplist == NULL)//��
//	{
//		return;
//		//assert(*pplist!=NULL);
//	}
//	else if((*pplist)->next==NULL)//ֻ��һ�����
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
//		tail = NULL;//free��ǵ��ÿ�
//		prev->next = NULL;
//	}
//}
void SListPopBack(SListNode** pplist)
{
	if (*pplist == NULL)//��
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
