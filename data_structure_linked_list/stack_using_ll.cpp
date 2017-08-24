



#include <stdio.h>
#include <stdlib.h>


struct Node_prototype{
	int data;
	struct Node_prototype *next_ptr;
};

struct Node_prototype *top = NULL;


void push(struct Node_prototype *prev_node,int new_data){

	if (prev_node == NULL) 
    { 
       printf("the given previous node cannot be NULL");       
       return;  
    }  

	struct Node_prototype* new_node = (struct Node_prototype*)malloc(sizeof(struct Node_prototype));

	new_node->data = new_data;
	new_node->next_ptr = (prev_node->next_ptr);
	(prev_node->next_ptr) = new_node;
	top = new_node;

}


void print_linked_list(struct Node_prototype *head_node){

	while(head_node != NULL){

		printf("%d\n", head_node->data);
		head_node  = head_node->next_ptr;

	}

}


void pop(struct Node_prototype *head_node){

	struct Node_prototype *temp = head_node;

	while(temp->next_ptr != top){
		temp = temp->next_ptr;
	}

	temp->next_ptr = NULL;
	top = temp;

	// free(temp);

}


int main(){


	struct Node_prototype *node_one = NULL;
	// struct Node_prototype *head_ptr->next_ptr = node_one

	node_one = (struct Node_prototype*) malloc(sizeof(struct Node_prototype));
	node_one->data = 4;
	node_one->next_ptr = NULL;
	push(node_one,6);
	push(top,7);

	print_linked_list(node_one);

	printf("Pooping out Data\n");

	pop(node_one);
	pop(node_one);

	print_linked_list(node_one);

	printf("Data at top : %d\n",top->data);
}

