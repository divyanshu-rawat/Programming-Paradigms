

#include <iostream>
#include <list>

using namespace std;


class Graph{


	int V;
	list <int> *adj;
	void DFSutility(int visited[],int v);
public:

	Graph(int size);
	void addEdge(int v,int w);
	void DFS(int v);

};



Graph:: Graph(int size){

	this->V = size;
	this->adj = new list <int>[V];
}


void Graph:: addEdge(int v,int w){

	adj[v].push_back(w);

}


void Graph:: DFSutility(int visited[],int v){

	visited[v] = 1;
	cout << v << " ";

	list <int> :: iterator i;

	for(i = adj[v].begin();i != adj[v].end();i++){

		if(visited[*i] == 0){

			visited[*i] = 1;
			DFSutility(visited,*i);
		}
	}


}

void Graph:: DFS(int v){

	int visited[this->V];

    for(int i=0;i<this->V;i++){
    	visited[i] = 0;
	}

	DFSutility(visited,v);
}



int main(){

	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2)\n";

    g.DFS(2);




	return 0;
}