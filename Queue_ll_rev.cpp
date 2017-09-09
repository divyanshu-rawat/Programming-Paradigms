


#include <stdio.h>
#include <stdlib.h>


struct Node{

	int data;
	struct Node* next;
};

struct Queue{

	struct Node* front;
	struct Node* rear;
};


struct Queue* create_Queue(){

	struct Queue* queue = (struct Queue* )malloc(sizeof(struct Queue));
	queue->front = NULL;
	queue->rear  = NULL;
	return queue;

}


struct Node* create_Node(int data){

	struct Node* new_node = (struct Node* )malloc(sizeof(struct Node));
	new_node->data = data;
	new_node->next  = NULL;
	return new_node;

}


void enqueue(struct Queue** Qu,int data){


	struct Node* new_node = create_Node(data);

	if((*Qu)->front == NULL && (*Qu)->rear == NULL){
		(*Qu)->front = new_node;
		(*Qu)->rear = new_node;
		 return ;
	}

	(*Qu)->rear->next = new_node;
	(*Qu)->rear = new_node;

}

int dequeue(struct Queue** Qu){

	if (q->front == NULL)
       return NULL;


	struct Node* temp = (*Qu)->front;
	(*Qu)->front = (*Qu)->front->next;

	 if (q->front == NULL)
       q->rear = NULL;

	int data = temp->data;

	free(temp);

	return data;
}

void print_Queue_ll(struct Queue* root){
	
	while(root->front != NULL){

		printf("%d\n",root->front->data);
		root->front = root->front->next;
		
	}

}



int main(){


	struct Queue *Qu = create_Queue();
	enqueue(&Qu,4);
	enqueue(&Qu,6);
	enqueue(&Qu,7);
	enqueue(&Qu,9);

	printf("Popped Element : %d\n", dequeue(&Qu));
	print_Queue_ll(Qu);





}