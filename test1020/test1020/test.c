//#include<stdio.h>
//
//typedef int SLTDateType;
//typedef struct SListNode
//{
//	SLTDateType data;
//	struct SListNode* next;//�ṹ��������
//}SListNode;
//// ��̬����һ���ڵ�
//SListNode* BuySListNode(SLTDateType x)
//{
//	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
//	newnode->data = x;
//	newnode->next = NULL;
//	return newnode;
//}
//// �������ӡ
//void SListPrint(SListNode* plist)
//{
//	while (plist->next!=NULL)
//	{
//		printf("%d", plist->data);
//		plist = plist->next;
//	}
//}
//// ������β��
//void SListPushBack(SListNode** pplist, SLTDateType x)
//{
//	//����
//	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
//	newnode->data = x;
//	newnode->next = NULL;
//	//��β���
//	if (*pplist = NULL)	{
//		*pplist = newnode;
//	}
//	else
//	{
//		SListNode* tail = *pplist;
//		while (tail->next!= NULL)
//		{
//			tail = tail->next;
//		}
//		tail->next = newnode;
//	}
//}
//// �������ͷ��
//void SListPushFront(SListNode** pplist, SLTDateType x)
//{
//   
//}
//// �������βɾ
//void SListPopBack(SListNode** pplist);
//// ������ͷɾ
//void SListPopFront(SListNode** pplist);
//// ���������
//SListNode* SListFind(SListNode* plist, SLTDateType x);
//// ��������posλ��֮�����x
//// ����˼��Ϊʲô����posλ��֮ǰ���룿
//void SListInsertAfter(SListNode* pos, SLTDateType x);
//// ������ɾ��posλ��֮���ֵ
//// ����˼��Ϊʲô��ɾ��posλ�ã�
//void SListEraseAfter(SListNode* pos);

//void LevelOrder(BiTree bt)
//{
//    BiTree queue[MAXNODE];
//    int front, rear;
//    if (bt == NULL) return;
//    front = -1;
//    rear = 0;
//    queue[rear] = bt;//��������
//    while (front != rear)//���в�Ϊ�գ���ѭ��
//    {
//        front++;
//        Visit(queue[front]->data);//�����У������ʽ��
//        if (queue[front]->lchild != NULL)//����ͷ�����������
//        {
//            rear++;  
//            queue[rear] = queue[front]->lchild;
//        }
//        if (queue[front]->rchild != NULL)//����ͷ�����Һ������
//        {
//            rear++;  
//            queue[rear] = queue[front]->rchild;
//        }
//    }
//}
//void CreateBinTree(BiTree* T)  /* �Եݹ鷽ʽ���������� */
//{
//    char ch;
//    scanf("\n%c", &ch);
//    if (ch == '0')  *T = NULL;   /* ���ַ�0��Ϊ�ս���ֵ�Խ����ݹ� */
//    else {
//        *T = (BiTNode*)malloc(sizeof(BiTNode));
//        (*T)->data = ch;
//        CreateBinTree(&(*T)->lchild);
//        CreateBinTree(&(*T)->rchild);
//    }
//}
//BiTree Search(BiTree bt, datatype x)
//{
//    BiTree p;
//    if (bt)
//    {
//        if (bt->data == x) return bt;
//        if (bt->Lchild != NULL)
//        {
//            p = Search(bt->lchild, x);
//            if (p) return p;
//        }
//        if (bt->rchild != NULL)
//        {
//            p = Search(bt->rchild, x);
//            if (p) return p;
//        }
//    }
//    return NULL;
//}







