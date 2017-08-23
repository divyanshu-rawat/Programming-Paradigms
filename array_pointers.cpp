

#include <stdio.h>
#include <iostream>
#include <iterator>
#include <vector>
#include <cstdlib> 

using namespace std;

int main(){

	int array [] = {1,2,3,4,5};
	int *pointer = array;

	int n = sizeof(array)/sizeof(int);
	int iterator = 0;

	while(iterator < n){
		printf("%d \n",*pointer + iterator);
		iterator++;
	}

	printf("%d\n",n);
	

	int M[4][5] =
				{
				  {10,  5, -3},
				  { 9,  0,  0},
				  {32, 20,  1},
				  { 0,  0,  8}
				};


	int (*point)[5] = M;

	for(int i=0;i<4;i++){

		for(int j=0;j<5;j++)
		{
			   // printf("%d\t",M[i][j]); // Alternative without pointers !
			   // printf("%d\t",*(*(point + i) + j));
		}

		printf("\n");
	}


	// int A[1000]; // creates an integer array of size 1000. 

    int *A = (int *) malloc(1000 * sizeof(int)); // creates an integer array of size 1000

    A[0] = 4;

    // printf("%d",A[0]);


    // vector<int> V; // declares an empty integer array of size 0. O(1) 
    vector<int> V(100, 1); // declares an integer array of size 100 with all elements initialized to 1. O(size)
    vector <int> :: iterator i;

    for (i = V.begin(); i < V.end(); i++)
        cout << *i << '\t';

    // V.push_back(2); 

    


}
