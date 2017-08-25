
#include <iostream>
#include <unordered_set>
#include <iterator>
using namespace std;

void printDuplicates(int arr[],int n){

	unordered_set <int> original;
	unordered_set <int> duplicate;

	for(int i=0 ;i<n; i++){

		if(original.find(arr[i]) != original.end()){

			duplicate.insert(arr[i]);
		}
		else
		{
			
			original.insert(arr[i]);
		}
	}

	unordered_set <int> :: iterator itr;

	for(itr = duplicate.begin(); itr != duplicate.end(); itr++){
		cout << *itr << " ";
	}


}

int main()
{
    int arr[] = {1, 5, 2, 1, 4, 3, 1, 7, 2, 8, 9, 5};
    int n = sizeof(arr) / sizeof(int);
 
    printDuplicates(arr, n);
    return 0;
}