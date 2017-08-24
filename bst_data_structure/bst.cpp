#include <stdio.h>


struct Node* tree{
	int data;
	struct Node* left;
	struct Node* right;
}

struct Node* createNode(int data){

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->data = data;
	return Node;
}

int main(){

	struct Node* root = createNode(1);
	root->left = createNode(2);
	root->right = createNode(3);

	root->left->left = createNode(4);
	return 0;
}