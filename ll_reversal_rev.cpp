

#include <stdio.h>
#include <stdlib.h>


struct Node{

	int data;
	struct Node* next;
};

struct Node* create_Node(int data){

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next = NULL;
	return new_node;
}


void traverse_ll(struct Node* head){

	struct Node* temp = head;

	while(temp != NULL){

		printf("%d\n",temp->data);
		temp = temp->next;
	
	}
}

int delete_last_node(struct Node** head){

	int data;
	struct Node* prev = NULL;
	struct Node* temp = *head;
	while(temp->next != NULL){
		prev = temp;
		temp = temp->next;
	}

	prev->next = NULL;
	data = temp->data;

	printf("Node Deleted : %d \n", data);

	free(temp);

}


void ll_reversal(struct Node* head){

	struct Node* temp = head;
	struct Node* prev = NULL;
	struct Node* current = NULL;

	while(temp != NULL){

		prev = temp;
		temp = temp->next;
		prev->next = current;
		current = prev;


	}

	head = prev;

	traverse_ll(head);

}
 
int main(){


	struct Node* root = NULL;
	root = create_Node(1);
	root->next = create_Node(2);
	root->next->next = create_Node(3);

	// traverse_ll(root);
	
	// delete_last_node(&root);

	// traverse_ll(root);

	ll_reversal(root);

	printf("\n");
	return 0;
}