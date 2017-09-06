


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

/*

time complexity - o(n^2)

int equilibrium_Naive(int arr[],int size)
{
	int left_sum;
	int right_sum;


	for(int i=0;i<size;i++){

		left_sum  = 0;
		right_sum = 0;

		for(int j=0;j<size;j++){

			if(j<i)
				left_sum = left_sum + arr[j];
			else if(j>i)
				right_sum = right_sum + arr[j];
		}

		if(right_sum == left_sum && i!=0){
			return i;
		}
	}
}
*/

int optimized_solution(int arr[],int size){

	int left_sum  = 0;
	int right_sum = 0;
	int total_sum = 0;

	for(int i=0;i<size;i++){
		total_sum = total_sum + arr[i];
	}

	printf("total sum : %d",total_sum);

	for(int i=0;i<size;i++){

		left_sum = left_sum + arr[i];

		printf("\nleft sum : %d",left_sum);

		if(left_sum == total_sum){
			return i;
		}

		total_sum = total_sum - arr[i];
		printf("\ntotal sum : %d",total_sum);
	}




}

int main()
{
  int arr[] = {-7, 1, 5, 2, -4, 3, 0};
  int arr_size = sizeof(arr)/sizeof(arr[0]);

  // printf("First equilibrium index is %d\n", equilibrium_Naive(arr, arr_size));

   printf("First equilibrium index is %d\n", optimized_solution(arr, arr_size));



 
  return 0;
}