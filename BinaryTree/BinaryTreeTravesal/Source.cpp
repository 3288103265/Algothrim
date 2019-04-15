#include <iostream>

//1. PreOrderTraverse.
//2. InOrderTraverse.
//3. PostOrderTraverse
//Note: All functions use recursion.

typedef struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;

}BinTreeNode;

void PreOrderTraverse(BinTreeNode* root)
{
	if (root == nullptr)
	{
		return;
	}
	std::cout << root->val <<" ";
	PreOrderTraverse(root->left);
	PreOrderTraverse(root->right);
}

void InOrderTraverse(BinTreeNode* root)
{
	if (root == nullptr)
	{
		return;
	}
	
	InOrderTraverse(root->left);
	std::cout << root->val << " ";
	InOrderTraverse(root->right);
}

void PostOrderTraverse(BinTreeNode* root)
{
	if (root == nullptr)
	{
		return;
	}
	PostOrderTraverse(root->left);
	PostOrderTraverse(root->right);
	std::cout << root->val << " ";

}

// From the project 'CreateBinaryTree' 
BinTreeNode* NewNode(int data)
{
	//Initilize a new node.
	auto newNode = new BinTreeNode();

	newNode->val = data;
	newNode->left = nullptr;
	newNode->right = nullptr;
	return newNode;
}

BinTreeNode* CreateBinTree()
{
	BinTreeNode* root = NewNode(1);
	root->left = NewNode(2);
	root->right = NewNode(3);
	root->left->left = NewNode(4);

	return root;
}

void DestroyBinTree(BinTreeNode* tree)
{
	//Destroy a binary tree using recursion.
	if (tree != nullptr)
	{
		DestroyBinTree(tree->left);
		DestroyBinTree(tree->right);
		delete(tree);
	}
}


int main()
{
	auto root = CreateBinTree();
	PreOrderTraverse(root);
	std::cout << std::endl;
	InOrderTraverse(root);
	std::cout << std::endl;
	PostOrderTraverse(root);
	std::cout << std::endl;
	DestroyBinTree(root);

	return 0;
}