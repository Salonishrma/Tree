#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *left, *right;
};
void LevelOrder(Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);//add root node address in q
	while (q.empty() == false) {
		Node* node = q.front(); //print the first element of queue  nd delete it from queue
		cout << node->data << " ";
		q.pop();
		if (node->left != NULL)
			q.push(node->left);
		if (node->right != NULL)
			q.push(node->right);
	}
}

Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

int main()
{

	Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	cout << "Level Order traversal of binary tree is \n";
	LevelOrder(root);
	return 0;
}
