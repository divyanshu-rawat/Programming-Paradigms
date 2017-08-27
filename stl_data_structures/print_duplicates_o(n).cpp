
#include <iostream>
#include <unordered_set>
#include <iterator>
#include <vector>

using namespace std;

// void printDuplicates(int arr[],int n){

	// unordered_set <int> original;
	// unordered_set <int> duplicate;

	// for(int i=0 ;i<n; i++){

	// 	if(original.find(arr[i]) != original.end()){

	// 		duplicate.insert(arr[i]);
	// 	}
	// 	else
	// 	{
			
	// 		original.insert(arr[i]);
	// 	}
	// }

	// unordered_set <int> :: iterator itr;

	// // for(itr = duplicate.begin(); itr != duplicate.end(); itr++){
	// // 	cout << *itr << "\n";
	// // }

	// itr = duplicate.begin(); 
	// cout << *itr << "\n";

int printDuplicates(const vector<int> &A) {

    unordered_set <int> original;
	unordered_set <int> duplicate;
    // vector <int> :: iterator i;

	for(int i=0 ;i < A.size(); i++){

		if(original.find(A[i]) != original.end()){

			duplicate.insert(A[i]);
		}
		else
		{
			original.insert(A[i]);
		}
	}

	unordered_set <int> :: iterator itr;

	 //   for(itr = duplicate.begin(); itr != duplicate.end(); itr++){
		// 	cout << *itr << "\n";
		// }

	itr = duplicate.begin();
	return *itr;
   
}

// }

int main()
{
	vector <int> vect = {3,4,4,1,1,3};
    // int arr[] = {3,4,4,1,1,3};
    // int n = sizeof(arr) / sizeof(int);

    int result = printDuplicates(vect);
    cout << result <<endl;
    return 0;
}