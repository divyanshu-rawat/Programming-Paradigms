

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

void print_linked_list(struct Node_prototype *head_node){

	while(head_node != NULL){

		printf("%d\n", head_node->data);
		head_node  = head_node->next_ptr;

	}

}

void delete_node(struct Node_prototype **head_node,int to_be_deleted){
  
    struct Node_prototype* temp = *head_node;
    struct Node_prototype* prev_node;

	if(temp->data == to_be_deleted){
		*head_node = temp->next_ptr;
		free(temp);
		return;
	}    

	while(temp->data != to_be_deleted){

		prev_node = temp;
		temp = temp->next_ptr;

	}

	prev_node->next_ptr = temp->next_ptr;
	free(temp);
}

// int getCount(struct Node_prototype* head)
// {
//     // Base case
//     if (head == NULL)
//         return 0;
 
//     // count is 1 + count of remaining list
//     return 1 + getCount(head->next_ptr);
// }

int getCount(struct Node_prototype *head_node){

	int count;
	struct Node_prototype* temp = head_node;

	while(temp !=NULL){
		count++;
		temp = temp->next_ptr;
	}

	return count;

}

int main(){


	struct Node_prototype *node_one = NULL;
	struct Node_prototype *node_two = NULL;
	struct Node_prototype *node_three = NULL;
	int count;
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

	push(&node_one,4);
	push(&node_one,5);
	push(&node_one,6);

	// delete_node(&node_one,6);
	// delete_node(&node_one,2);
	// delete_node(&node_one,3);

	count = getCount(node_one);

	printf("%d\n",count );

	print_linked_list(node_one);

}

