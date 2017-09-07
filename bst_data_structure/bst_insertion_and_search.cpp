

#include <stdio.h>
#include <stdlib.h>


struct Node{

	int data;
	struct Node* right;
	struct Node* left;

};

struct Node* create_node(int new_data){

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = new_data;
	new_node->right = NULL;
	new_node->left  = NULL;

	return new_node;
};

void inorder(struct Node* root){

	if(root != NULL){

		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);

	}
}

struct Node* insert(struct Node *root,int key){


	if(root == NULL){
		struct Node* new_node = create_node(key);
		return new_node;
	}

	if(root != NULL){

		if(key > root->data)
			root->right = insert(root->right,key);
		else if (key < root->data)
			root->left = insert(root->left,key);
	}

	return root;
}




int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */

    struct Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);

    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);
  
    // print inoder traversal of the BST
    inorder(root);
  
    return 0;
}