

#include <stdio.h>
#include <stdlib.h>


struct Node_prototype{

	int data;
	struct Node_prototype *next_ptr;
};


void print_linked_list(struct Node_prototype *head_node){

	while(head_node->next_ptr != NULL){

		printf("%d\n", head_node->data);
		head_node  = head_node->next_ptr;

	}

}

int main(){

	struct Node_prototype *node_one = NULL;
	struct Node_prototype *node_two = NULL;
	struct Node_prototype *node_three = NULL;

	node_one = (struct Node_prototype*) malloc(sizeof(struct Node_prototype));
	node_two = (struct Node_prototype*) malloc(sizeof(struct Node_prototype));
	node_three = (struct Node_prototype*) malloc(sizeof(struct Node_prototype));

	node_one->data = 1;
	node_one->next_ptr = node_two;

	node_two->data = 2;
	node_two->next_ptr = node_three;

	node_three->data = 3;
	node_three->next_ptr = NULL;

	print_linked_list(node_one);

}