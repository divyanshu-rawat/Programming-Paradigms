

#include <stdio.h>
#include <stdlib.h>



struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};



struct Node* newNode(int data){

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->data = data;
	return new_node;
}

void printPreorder(struct Node* root){


	if (root == NULL)
        return;
	
		printf("%d",root->data);
		printPreorder(root->left);
		printPreorder(root->right);
	
}

void printInorder(struct Node* node){

		if (node == NULL)
        return;
	
		printInorder(node->left);
		printf("%d",node->data);
		printInorder(node->right);

}


void printPostorder(struct Node* node){

		if (node == NULL)
        return;
	
		printPostorder(node->left);
		printPostorder(node->right);
		printf("%d",node->data);
}


int count_node(struct Node* root){

	if(root)
		return 1 + count_node(root->left) + count_node(root->right);
	else
		return 0;
}



int count_leaf_nodes(struct Node* root){


	if(root == NULL)       
    	return 0;
	if(root->left == NULL && root->right == NULL)
		return 1;
	else{

		int left = count_leaf_nodes(root->left);
		int right = count_leaf_nodes(root->right);

		return  left + right;
	}

}


int count_full_nodes(struct Node* root){


	if(root->left == NULL && root->right == NULL)
		return 0;
	if(root == NULL)
		return 0;

	int boolean;

	if(root->right && root->left)
		boolean = 1;
	else
		boolean = 0;

	int left = count_full_nodes(root->left);
	int right = count_full_nodes(root->right);


	return left + right + boolean;
}

int height_of_tree(struct Node* root){

	if(root->left == NULL && root->right == NULL)
		return 0;
	if(root == NULL)
		return 0;

	
	int boolean;
	if(root->right && root->left)
		boolean = 1;
	else
		boolean = 0;


	int left = height_of_tree(root->left);
	int right = height_of_tree(root->right);

	if(left > right)
		return boolean + left;
	else if( right > left)
		return boolean + right;
	else
		return boolean;





}
// given a PRE & IN and  given a POST & IN unique binary tree is possible.


int main()
{

     struct Node *root  = newNode(1);
     root->left         = newNode(2);
     root->right        = newNode(3);
     root->left->left   = newNode(4);
     root->left->right  = newNode(5); 

    // root->left    = newNode(7);
    // root->right   = newNode(5);
    // root->left->right = newNode(6);
    // root->left->right->left = newNode(1);
    // root->left->right->right = newNode(11);
    // root->right->right = newNode(9);
    // root->right->right->left = newNode(4);
    // root->right->right->right = newNode(21);
 
     printf("\nPreorder traversal of binary tree is \n");
     printPreorder(root);
 
     printf("\nInorder traversal of binary tree is \n");
     printInorder(root);  
 
     printf("\nPostorder traversal of binary tree is \n");
     printPostorder(root);

     int count = count_node(root);

     printf("\nTotal Number of Nodes : %d",count);

     int leaf_count = count_leaf_nodes(root);
     
     printf("\nTotal Leaf Nodes : %d",leaf_count);

     int full_node = count_full_nodes(root);

     printf("\nTotal Full Nodes : %d",full_node);


     int height = height_of_tree(root);

     printf("\nHeight of tree : %d",height);


     printf("\n");

     return 0;
}