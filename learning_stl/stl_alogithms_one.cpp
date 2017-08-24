

/* 

STL Most Used algorithms !

	sort(first_iterator, last_iterator) – To sort the given vector.
	reverse(first_iterator, last_iterator) – To reverse a vector.
	*max_element (first_iterator, last_iterator) – To find the maximum element of a vector.
	*min_element (first_iterator, last_iterator) – To find the minimum element of a vector.
	accumulate(first_iterator, last_iterator, initial value of sum) – Does the summation of vector elements

*/


#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric> //For accumulate operation

using namespace std;

void sort(vector<int> test){

	sort(test.begin(), test.end());

	cout << "After sorting Vector is : \n";

	 for (int i=0; i<test.size(); i++)
        cout << test[i] << " ";

    cout << "\n";
    
}

/*

void foo(vector<int> bar); // by value
void foo(vector<int> &bar); // by reference (non-const, so modifyable inside foo
void foo(vector<int> const &bar); // by const-reference

*/

int main(){


	// Initializing vector with array values
    int arr[] = {10, 20, 5, 23 ,42 , 15,20,15};

    int n = sizeof(arr)/sizeof(arr[0]);
    
    vector<int> vect(arr, arr+n);
 
    cout << "Vector is: ";
    
  //   vect.push_back(24);
  //   vect.push_back(20);

    for (int i=0; i<vect.size(); i++)
        cout << vect[i] << " ";

  //   cout << "\n";

  //   sort(vect);

  //     // Reversing the Vector
  //   reverse(vect.begin(), vect.end());
 
  //   cout << "\nVector after reversing is: ";
  //   for (int i=0; i<6; i++)
  //       cout << vect[i] << " ";
 
  //   cout << "\nMaximum element of vector is: ";
  //   cout << *max_element(vect.begin(), vect.end());
 
  //   cout << "\nMinimum element of vector is: ";
  //   cout << *min_element(vect.begin(), vect.end());
 
  //   // Starting the summation from 0
  //   cout << "\nThe summation of vector elements is: ";
  //   cout << accumulate(vect.begin(), vect.end(), 0);

  //   cout << "\n";
 	
 	// cout << "\nCouting Occurence of 20 : ";
 	// cout << count(vect.begin(), vect.end(),20);
    
    cout << "\n";


  //   cout << "\nErasing the Vector : ";
    vect.erase(vect.begin()+1);

    cout << "\nVector after erasing the element: ";
    for (int i=0; i<vect.size(); i++)
        cout << vect[i] << " ";

    cout << "\n";

    sort(vect.begin(), vect.end());

    vect.erase(unique(vect.begin(),vect.end()),vect.end());

    cout << "\nVector after deleting duplicates: ";
    for (int i=0; i< vect.size(); i++)
        cout << vect[i] << " ";


    cout << "\n";

    cout << "Distance between first to max element: "; 
    cout << distance(vect.begin(),
                     max_element(vect.begin(), vect.end()));
    cout << "\n";

    return 0;

    // http://www.geeksforgeeks.org/c-magicians-stl-algorithms/
 
    // Sorting the Vector in Ascending order
    

    // binary_search(first_iterator, last_iterator, x) – Tests whether x exists in sorted vector or not.

    // find(first_iterator, last_iterator, x) – Points to last address of vector ((name_of_vector).end()) if element is not present in vector.

    // find(vect.begin(), vect.end(),5) != vect.end()?cout << "\nElement found":cout << "\nElement not found";


}