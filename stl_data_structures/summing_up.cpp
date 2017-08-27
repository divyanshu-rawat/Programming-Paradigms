
#include <stdio.h>
#include <iostream>
#include <unordered_set>
using namespace std;

void sum_pair(int arr[],int n){

	unordered_set <int> set;

	int sum = 0;
	int count = 0;
	for(int i=0;i<n;i++){
		
		set.insert(arr[i]);
	
	}

	for(int i=0;i<n - 1;i++){

		for(int j= i + 1 ;j<n;j++){

	 		sum = arr[i] + arr[j];

			if(set.find(sum) != set.end()){

				count++;
			}	 		
		}


	}

	cout << count <<endl;

}


int main(){

	int n;

	cin >> n;

	int* array = (int *)malloc(n*sizeof(int));

	for(int i=0;i<n;i++){
		cin >> array[i];
	}

	sum_pair(array,n);


}