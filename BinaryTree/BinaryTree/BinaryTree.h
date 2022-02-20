#pragma once
#include <stdio.h>
typedef char DataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	DataType data;
}BTNode;
//ǰ�����
void PreOrder(BTNode* root);
//�������
void InOrder(BTNode* root);
//�������
void PostOrder(BTNode* root);
//��������ڵ����
int BinaryTreeSize(BTNode* root);
//�������Ҷ�ӽڵ����
int BinaryLeafSize(BTNode* root);
//���������k��ڵ����
int BinaryLevelKSize(BTNode* root, int k);