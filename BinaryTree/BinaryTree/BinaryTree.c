#include "BinaryTree.h"
//前序遍历
void PreOrder(BTNode* root)
{
	if (root == NULL)return;
	printf("%d ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}
//中序遍历
void InOrder(BTNode* root)
{
	if (root == NULL)return;
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}
//后序遍历
void PostOrder(BTNode* root)
{
	if (root == NULL)return;
	PostOrder(root->left);
	PosOrder(root->right);
	printf("%d ", root->data);
}
//求二叉树节点个数
int BinaryTreeSize(BTNode* root)
{
	return (root == NULL) ? 0 : BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}
//求二叉树叶子节点个数
int BinaryLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return BinaryLeafSize(root->left) + BinaryLeafSize(root->right);
}
//求二叉树第k层节点个数
int BinaryLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryLevelKSize(root->left, k - 1) + BinaryLevelKSize(root->right, k - 1);
}