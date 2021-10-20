//#include<stdio.h>
//
//typedef int SLTDateType;
//typedef struct SListNode
//{
//	SLTDateType data;
//	struct SListNode* next;//结构体自引用
//}SListNode;
//// 动态申请一个节点
//SListNode* BuySListNode(SLTDateType x)
//{
//	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
//	newnode->data = x;
//	newnode->next = NULL;
//	return newnode;
//}
//// 单链表打印
//void SListPrint(SListNode* plist)
//{
//	while (plist->next!=NULL)
//	{
//		printf("%d", plist->data);
//		plist = plist->next;
//	}
//}
//// 单链表尾插
//void SListPushBack(SListNode** pplist, SLTDateType x)
//{
//	//创建
//	SListNode* newnode = (SListNode*)malloc(sizeof(SListNode));
//	newnode->data = x;
//	newnode->next = NULL;
//	//找尾结点
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
//// 单链表的头插
//void SListPushFront(SListNode** pplist, SLTDateType x)
//{
//   
//}
//// 单链表的尾删
//void SListPopBack(SListNode** pplist);
//// 单链表头删
//void SListPopFront(SListNode** pplist);
//// 单链表查找
//SListNode* SListFind(SListNode* plist, SLTDateType x);
//// 单链表在pos位置之后插入x
//// 分析思考为什么不在pos位置之前插入？
//void SListInsertAfter(SListNode* pos, SLTDateType x);
//// 单链表删除pos位置之后的值
//// 分析思考为什么不删除pos位置？
//void SListEraseAfter(SListNode* pos);

//void LevelOrder(BiTree bt)
//{
//    BiTree queue[MAXNODE];
//    int front, rear;
//    if (bt == NULL) return;
//    front = -1;
//    rear = 0;
//    queue[rear] = bt;//根结点入队
//    while (front != rear)//队列不为空，则循环
//    {
//        front++;
//        Visit(queue[front]->data);//出队列，并访问结点
//        if (queue[front]->lchild != NULL)//将队头结点的左孩子入队
//        {
//            rear++;  
//            queue[rear] = queue[front]->lchild;
//        }
//        if (queue[front]->rchild != NULL)//将队头结点的右孩子入队
//        {
//            rear++;  
//            queue[rear] = queue[front]->rchild;
//        }
//    }
//}
//void CreateBinTree(BiTree* T)  /* 以递归方式建立二叉树 */
//{
//    char ch;
//    scanf("\n%c", &ch);
//    if (ch == '0')  *T = NULL;   /* 以字符0作为空结点的值以结束递归 */
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







