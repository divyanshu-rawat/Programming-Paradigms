

#include <stdio.h>
#include <stdlib.h>

void swap(int* a , int* b){
	int temp;
	temp = *b;
	*b = *a;
	*a = temp;
}

int main(){

	 int array[] = {1,2,3,4,5};
	 int n = sizeof(array)/sizeof(array[0]);
	 int i = 0;

	while( i < n - i - 1){
		swap(&array[i],&array[n-i-1]);
		i++;
	}

	int x = 0;

	while(x < n){
		printf("%d\n",array[x]);
		x = x + 1;
	}

}