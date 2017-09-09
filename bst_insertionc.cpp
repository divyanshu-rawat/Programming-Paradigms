


#include <stdio.h>
#include <stdlib.h>


struct Node{

	int data;
	struct Node* left;
	struct Node* right;

};



struct Node* create_Node(int data){

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->left = NULL;
	new_node->right = NULL;
}

struct Node* insert_node(struct Node* root,int key){

	if(root == NULL){

		struct Node* new_node = create_Node(key);
		return new_node;
	}

	if(key > root->data){

		root->right = insert_node(root->right,key);
	}
	else if (key < root->data){

		root->left = insert_node(root->left,key);
	}

	return root;
}

void inorder_traversal(struct Node* root){

	if(root != NULL){

		inorder_traversal(root->left);
		printf("%d",root->data);
		inorder_traversal(root->right);

	}

}


int main(){


	struct Node* root = NULL;
	root = insert_node(root,2);

	insert_node(root,1);
	insert_node(root,3);

	inorder_traversal(root);

	return 0;

}