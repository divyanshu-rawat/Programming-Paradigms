// C++ program to print largest contiguous array sum
#include <iostream>
#include <climits>
#include <vector>
using namespace std;
 
int maxSubArraySum(int a[], int size){

	int max_so_far = 0;
	int current_sum = 0;
	vector <int> vect;
	vector <int> :: iterator j;


	for(int i=0; i<size; i++){

		current_sum = current_sum + a[i];
		if(current_sum < 0)
			current_sum = 0;
		if(current_sum > max_so_far){	
		
			vect.push_back(i);
			max_so_far = current_sum;

		}
	}

	for(j = vect.begin(); j < vect.end(); j++)
		cout << *j << "\n";

	return max_so_far;
}

int main()
{
   int a[] =  {-2, -3, 4, -1, -2, 1, 5, -3};
   int n = sizeof(a)/sizeof(a[0]);
   int max_sum = maxSubArraySum(a, n);
   cout << "Maximum contiguous sum is " << max_sum;
   cout << "\n";
   return 0;
}




