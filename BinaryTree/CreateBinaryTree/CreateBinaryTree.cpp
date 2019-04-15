//1.0 Create a binary linked list tree without recursion.
//2.0 Create a binary linked list tree using recursion.
//3.0 Create a binary linked list tree from a complete binaty tree array.

typedef struct TreeNode
{
	int val;
	struct TreeNode* left;
	struct TreeNode* right;
}BinTreeNode;

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
	auto binTree = CreateBinTree();
	DestroyBinTree(binTree);
	return 0;
}