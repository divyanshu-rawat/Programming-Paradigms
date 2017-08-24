// C++ code to demonstrate working of all_of()
#include <iostream>
#include <algorithm> // for all_of()
using namespace std;
int main()
{
    // Initializing array
    int ar[6] =  {1,3,-5};
 
    // Checking if all elements are positive
    all_of(ar, ar+6, [](int x) { return x>0; })?
          cout << "All are positive elements" :
          cout << "All are not positive elements";

     	cout << "\n";

    all_of(ar, ar+6, [](int x) { return x%2; })?
          cout << "All are even elements" :
          cout << "All are  odd elements";
 	
 		cout << "\n";

 	any_of(ar, ar+6, [](int x){ return x==1; })?
          cout << "1 Exists !" :
          cout << "1 Not Exists !";

 	cout << "\n";

 	int arr[6] =  {1, 2, 3, 4, 5, 6};
 
    // Checking if no element is negative
    none_of(arr, arr+6, [](int x){ return x<0; })?
          cout << "No negative elements" :
          cout << "There are negative elements";
 
 	cout << "\n";

 	   // Declaring second array
    int ar1[6];
 
    // Using copy_n() to copy contents
    copy_n(arr, 6, ar1);
 
    // Displaying the copied array
    cout << "The new array after copying is : ";
    for (int i=0; i<6 ; i++)
       cout << ar1[i] << " ";


 	cout << "\n";

    // Initializing array with 0 values
    int arrr[6] =  {0};
 
    // Using iota() to assign values
    iota(arrr, arrr+6, 20);
 
    // Displaying the new array
    cout << "The new array after assigning values is : ";
    for (int i=0; i<6 ; i++)
       cout << arrr[i] << " ";
 
    return 0;


 
}