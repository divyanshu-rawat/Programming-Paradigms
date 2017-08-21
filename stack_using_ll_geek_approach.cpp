
// C program for linked list implementation of stack
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 



struct stack_node{
	int data;
	struct stack_node* next;
};

struct stack_node* create_Node(int data){

	struct stack_node* stack_node = (struct stack_node*) malloc(sizeof(struct stack_node));
	stack_node->data = data;
	stack_node->next = NULL;
	return stack_node;
}


void push(struct stack_node** root,int new_data){

	struct stack_node* new_node = create_Node(new_data);
	new_node->next = *root;
	*root = new_node;

}

int isEmpty(struct stack_node *root)
{
    return !root;
}

int pop(struct stack_node **root){
	if (isEmpty(*root))
        return INT_MIN;

	struct stack_node* temp = *root;
	*root = (*root)->next;
	int popped_data = temp->data;
	free(temp);
	return popped_data;

}

int peek(struct stack_node* root)
{
    if (isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main()
{
    struct stack_node* root = NULL;
 
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
 
    printf("%d popped from stack\n", pop(&root));
 
    printf("Top element is %d\n", peek(root));
 
    return 0;
}

