#pragma once
#include <stdio.h>
typedef char DataType;
typedef struct BinaryTreeNode
{
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
	DataType data;
}BTNode;
//前序遍历
void PreOrder(BTNode* root);
//中序遍历
void InOrder(BTNode* root);
//后序遍历
void PostOrder(BTNode* root);
//求二叉树节点个数
int BinaryTreeSize(BTNode* root);
//求二叉树叶子节点个数
int BinaryLeafSize(BTNode* root);
//求二叉树第k层节点个数
int BinaryLevelKSize(BTNode* root, int k);