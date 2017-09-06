

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <unordered_set>
#define MAX 100000
using namespace std;



void printPairs(int arr[],int size,int number){


	// unordered_set <int> set;
	int temp;
	
	bool Map[MAX] = {0};

/*
	for(int i=0;i<size;i++){
		set.insert(0);
	}

*/

	for(int i=0;i<size;i++){

		temp = number - arr[i];

/*
		if(set.find(temp) != set.end()){

			printf("\n Pair with given sum %d is (%d, %d)", number, arr[i], temp);
		}
*/
		if(temp!=0 && Map[temp] == 1){
				printf("\n Pair with given sum %d is (%d, %d)", number, arr[i], temp);
		}

		Map[arr[i]] = 1;

	}

	printf("\n");





}



int main(){


	// int n;
	// scanf("%d",&n);
	// int* array = (int*)malloc(n*sizeof(int));

	// for(int i=0;i<n;i++){
	// 	scanf("%d",&array[i]);
	// }

	// for(int i=0;i<n;i++){
	// 	printf("\n%d",array[i]);
	// }

	int A[] = {1, 4,6,10, 8};
    int n = 16;
    int arr_size = sizeof(A)/sizeof(A[0]);
 
    printPairs(A, arr_size, n);

	// check_sum(array,n);



}