#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *left, *right;
};
int count(struct Node *p){
    int x,y;
    if(p!=NULL){
        x=count(p->left);
        y=count(p->right);
        return x+y+1;
    }
    return 0;
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
	cout << "The number of nodes is equal to ";
	cout<<count(root);
	return 0;
}
