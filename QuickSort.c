

#include <stdio.h>


void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int arr[],int start,int end){

	int pivot = arr[end];
	int i = start - 1;
	// printf("%d %d",start,end);
	for(int j=start ; j < end; j++){

		if(arr[j] <= pivot){
			i++;
			swap(&arr[j],&arr[i]);
		}
	}

	swap(&arr[i+1],&arr[end]);
	return i+1;
}



void quickSort(int arr[],int start,int end){


	if (start < end)
    {
			int middle_index = partition(arr,start,end);
			
			quickSort(arr,start,middle_index - 1);
			quickSort(arr,middle_index + 1 , end);
	}
}


void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array:\n");
    printArray(arr, n);
    return 0;
}