


#include <iostream>
#include <unordered_set>

using namespace std;

bool checkPair(int arr[],int n)
{

	 // Find sum of whole array
    int sum = 0;
    for (int i=0; i<n; i++)
        sum += arr[i];
 
    // If sum of array is not even than we can not
    // divide it into two part
    if (sum%2 != 0)
        return false;

    sum = sum/2;

    unordered_set <int> set;

    for(int i=0;i<n;i++){

    	int val = sum - arr[i];

    	if(set.find(val) != set.end()){

    		printf("Pair elements are %d and %d\n",arr[i], val);
            return true;
    	}

    	set.insert(arr[i]);
    }

   	return false;
}

// Driver program.
int main()
{
    int arr[] = {2, 11, 5, 1, 4, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (checkPair(arr, n) == false)
       printf("No pair found");
    return 0;
}