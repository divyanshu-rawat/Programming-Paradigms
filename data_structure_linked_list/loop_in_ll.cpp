

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

int detect_loop(struct Node_prototype* list){

	struct Node_prototype *slow_ptr = list,*fast_ptr = list;

	while(true){

		slow_ptr = slow_ptr->next_ptr;
		fast_ptr = fast_ptr->next_ptr->next_ptr;
		if(slow_ptr == fast_ptr){
			printf("Found Loop\n");
           	return 1;
		}
	}
		 return 0;
}


int main(){

   struct Node_prototype* head = NULL;
 
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
 
    /* Create a loop for testing */
    head->next_ptr->next_ptr->next_ptr->next_ptr = head;

    detect_loop(head);
	// print_linked_list(head);

}

