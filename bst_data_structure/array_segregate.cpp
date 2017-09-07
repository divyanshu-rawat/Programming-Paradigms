
#include <stdio.h>
 
/*
void segregate(int arr[], int size)
{
    
    int left = 0, right = size-1;
 
    while (left < right)
    {
      
        while (arr[left] == 0 && left < right)
            left++;
 
     
        while (arr[right] == 1 && left < right)
            right--;
 
    
        if (left < right)
        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

*/

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}


void Naive_approach(int arr[], int arr_size){

	int i = 0;
	int j = 1;

	while(j < arr_size){

		if(arr[i] == 0 && arr[j] == 1){
			swap(&arr[i],&arr[j]);
			i++;
		}

		j++;
	}


}

int main()
{
    int arr[] =  {0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0,0, 0, 0, 0, 0, 1, 0, 1, 0, 0 , 0, 1, 1, 1, 1, 1, 1, 1,1 ,1, 1, 1, 0};
    int i, arr_size = sizeof(arr)/sizeof(arr[0]);
 
    // segregate(arr, arr_size);

    Naive_approach(arr, arr_size);
 
    printf("\nArray after segregation: \n");

    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    printf("\n");
 
}