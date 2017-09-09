

#include <stdio.h>
#include <stdlib.h>


struct StackNode{

	int data;
	struct StackNode* next;
};

struct StackNode* createNode(int data){

	struct StackNode* new_node = (struct StackNode*)malloc(sizeof(struct StackNode));
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}

bool isEmpty(struct StackNode* root){

	if(!root){
		return true;
	}

	return false;
}

void print_ll(struct StackNode* root){
	
	while(root != NULL){

		printf("%d\n",root->data);
		root = root->next;
		
	}

}

void push(struct StackNode** root,int data){

	struct StackNode* new_node = createNode(data);

	printf("%d Pushed to Stack\n",new_node->data);

	new_node->next = *root;
	(*root) = new_node;

}


void pop(struct StackNode** root){

	struct StackNode* temp = *root;
	*root = (*root)->next;

	int data = temp->data;

	printf("%d Popped from Stack\n",data);

	free(temp);
}

int top(struct StackNode* root){

	if(!isEmpty(root)){

		return root->data;

	}

}

int main(){

	struct StackNode* root = createNode(2);

	push(&root,4);
	push(&root,6);
	push(&root,8);



	printf("Top of Linked List is : %d \n",top(root));

	pop(&root);

	print_ll(root);

}