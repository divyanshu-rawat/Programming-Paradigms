
#include <stdio.h>
#include <stdlib.h>

struct Node{

	int data;
	struct Node* next;

};

struct pointer{

	struct Node* head;
};

struct Graph{

	int V;
	struct pointer* array;
};


struct Node* create_node(int new_data){

	struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
	new_node->next = NULL;
	new_node->data = new_data;
	return new_node; 

}


struct Graph* createGraph(int size){

	struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
	graph->V = size;

	graph->array = (struct pointer*)malloc(size * sizeof(struct pointer));

	for(int i=0; i<size; i++){

		graph->array[i].head  = NULL;
	}

	return graph;

}

void addEdge(struct Graph* graph,int src,int dest){

	struct Node* new_node = create_node(dest);

	new_node->next  = graph->array[src].head;
	graph->array[src].head = new_node;

	new_node = create_node(src);
	new_node->next  = graph->array[dest].head;
	graph->array[dest].head = new_node;
}


void printGraph(struct Graph* graph)
{
   
   for(int i=0; i<graph->V;i++){

   		struct Node* head = graph->array[i].head;

   		printf("\n Adjacency list of vertex %d\n head ", i);

   		while(head){

   			printf("-> %d", head->data);
            head = head->next;
   		}

   		printf("\n");

   }
}




int main()
{
    // create the graph given in above fugure
    int V = 5;
    struct Graph* graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);
 
    // print the adjacency list representation of the above graph
    printGraph(graph);
 
    return 0;
}