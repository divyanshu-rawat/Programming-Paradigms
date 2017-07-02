#include <cstdlib>
#include <iostream>
#include <vector>

using std::vector;
using std::cin;
using std::cout;

// Method 2
// fibonacci_resursion is too slow because we are computing same things again and again !
// long long fibonacci_resursion(int n){
// 	if(n<=1)
// 		return n;
// 	else
// 		return fibonacci_resursion(n - 1) + fibonacci_resursion (n - 2);
// };


// Method 3
int compute_fibonacci(int n){

	int array[n + 1];
	array[0] = 0;
	array[1] = 1;

	for(int i = 2;i < n + 1;i++)
	{
		array[i] = array[i - 1] + array[i - 2];
	}

	return array[n];

}

int main(){

	// Method 1
	// long long  i,current = 1,previous = 0,sum = 0;
	// cout << previous << "\n";
	// cout << current << "\n";
	// for(i=0;i < 5;i++)
	// {
	// 	sum = current + previous;
	// 	previous = current;
	// 	current = sum;
	// 	cout << sum << "\n";
	// }

	// int result;
	// result = fibonacci_resursion(6);



	cout << compute_fibonacci(5) << "\n";


}