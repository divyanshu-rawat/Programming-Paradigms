

#include <iostream>
#include <list>

using namespace std;

class Graph{

	int V;
	list <int> *adj;

public:
	Graph(int V);
	void addEdge(int v,int w);
	void BFS(int source);
};


Graph:: Graph(int V){

	this->V = V;
	adj = new list <int>[V];
}

void Graph:: addEdge(int v,int w){

	adj[v].push_back(w);


}

void Graph:: BFS(int s){


  int visited[this->V];

    for(int i=0;i<this->V;i++){
    	visited[i] = false;
	}

    list <int> Queue;

	visited[s] = true;
	Queue.push_back(s);


	while(!Queue.empty()){

		s = Queue.front();

		printf("%d\n",s);

		Queue.pop_front();

		list <int> :: iterator j;

		for(j = adj[s].begin(); j!= adj[s].end(); j++){

			if(visited[*j] == false){

				visited[*j] = true;

				Queue.push_back(*j);
			}
		}


	}



}


int main(){

	 // Create a graph given in the above diagram.
	

    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 2)\n";

    g.BFS(2);
 
    return 0;
}