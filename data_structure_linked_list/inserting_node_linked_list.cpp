

// Add a node at the front: (A 4 steps process)


#include <stdio.h>
#include <stdlib.h>


struct Node_prototype{
	int data;
	struct Node_prototype *next_ptr;
};

void push(struct Node_prototype **head_node,int new_data){

	struct Node_prototype* new_node = (struct Node_prototype*)malloc(sizeof(struct Node_prototype));

	new_node->data = new_data;
	new_node->next_ptr = (*head_node);
	(*head_node) = new_node;

}

void insert_after(struct Node_prototype *prev_node,int new_data){

	if (prev_node == NULL) 
    { 
       printf("the given previous node cannot be NULL");       
       return;  
    }  

	struct Node_prototype* new_node = (struct Node_prototype*)malloc(sizeof(struct Node_prototype));

	new_node->data = new_data;
	new_node->next_ptr = (prev_node->next_ptr);
	(prev_node->next_ptr) = new_node;

}

void insert_at_end(struct Node_prototype *head_node,int new_data){

	struct Node_prototype* new_node = (struct Node_prototype*)malloc(sizeof(struct Node_prototype));
	new_node->data = new_data;
	new_node->next_ptr = NULL;

	while(head_node->next_ptr != NULL){
		head_node = head_node->next_ptr;
	}

		head_node->next_ptr  = new_node;
}

void print_linked_list(struct Node_prototype *head_node){

	while(head_node != NULL){

		printf("%d\n", head_node->data);
		head_node  = head_node->next_ptr;

	}

}



int main(){


	struct Node_prototype *node_one = NULL;
	struct Node_prototype *node_two = NULL;
	struct Node_prototype *node_three = NULL;
	// struct Node_prototype *head_ptr->next_ptr = node_one

	node_one = (struct Node_prototype*) malloc(sizeof(struct Node_prototype));
	node_two = (struct Node_prototype*) malloc(sizeof(struct Node_prototype));
	node_three = (struct Node_prototype*) malloc(sizeof(struct Node_prototype));

	// head_node->next_ptr = node_one;


	node_one->data = 1;
	node_one->next_ptr = node_two;

	node_two->data = 2;
	node_two->next_ptr = node_three;

	node_three->data = 3;
	node_three->next_ptr = NULL;

	// push(&node_one,4);

	// insert_after(node_two,7); // working well :) 

	// insert_at_end(node_one,5);

	print_linked_list(node_one);

}