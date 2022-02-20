#include "BinaryTree.h"
//ǰ�����
void PreOrder(BTNode* root)
{
	if (root == NULL)return;
	printf("%d ", root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}
//�������
void InOrder(BTNode* root)
{
	if (root == NULL)return;
	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}
//�������
void PostOrder(BTNode* root)
{
	if (root == NULL)return;
	PostOrder(root->left);
	PosOrder(root->right);
	printf("%d ", root->data);
}
//��������ڵ����
int BinaryTreeSize(BTNode* root)
{
	return (root == NULL) ? 0 : BinaryTreeSize(root->left) + BinaryTreeSize(root->right) + 1;
}
//�������Ҷ�ӽڵ����
int BinaryLeafSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	if (root->left == NULL && root->right == NULL)
		return 1;
	return BinaryLeafSize(root->left) + BinaryLeafSize(root->right);
}
//���������k��ڵ����
int BinaryLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 1)
		return 1;
	return BinaryLevelKSize(root->left, k - 1) + BinaryLevelKSize(root->right, k - 1);
}