

#include <iostream>
#include <iterator> // for iterators
#include <vector> // for vectors
using namespace std;
 

// iterators provide a means for accessing data stored in container classes such a vector, map, list, etc. 
// Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequence of numbers, characters etc.
// They reduce the complexity and execution time of program.


// 1. begin() :- This function is used to return the beginning position of the container.

// 2. end() :- This function is used to return the end position of the container.


int main()
{
    vector<int> ar = { 1, 2, 3, 4, 5 };
     
    // Declaring iterator to a vector
    vector<int>::iterator ptr;
     
    // Displaying vector elements using begin() and end()
    cout << "The vector elements are :\n";

    for (ptr = ar.begin(); ptr < ar.end(); ptr++)
        cout << *ptr << "\n";
     
    vector<int> ar_2 = { 1, 2, 3, 4, 5 };
     
    // Declaring iterator to a vector
    vector<int>::iterator ptr_2 = ar_2.begin();
     
    // Using advance() to increment iterator position
    // points to 4
    advance(ptr_2, 3);
     
    // Displaying iterator position
    cout << "The position of iterator after advancing is : ";
    cout << *ptr_2 << " ";



// 4. next() :- This function returns the new iterator that the iterator would point after advancing the positions mentioned in its arguments.

// 5. prev() :- This function returns the new iterator that the iterator would point after decrementing the positions mentioned in its arguments

    // The position of iterator after advancing is : 4 
     
    vector<int> ar_3 = { 1, 2, 3, 4, 5 };
     
    // Declaring iterators to a vector
    vector<int>::iterator ptr_3 = ar_3.begin();
    vector<int>::iterator ftr_3 = ar_3.end();
    
    
    // Using next() to return new iterator
    // points to 4
    auto it = next(ptr_3, 3);
     
    // Using prev() to return new iterator
    // points to 3
    auto it1 = prev(ftr_3, 3);
     
    // Displaying iterator position
    cout << "The position of new iterator using next() is : ";
    cout << *it << " ";
    cout << endl;
     
    // Displaying iterator position
    cout << "The position of new iterator using prev()  is : ";
    cout << *it1 << " ";
    cout << endl;


    vector<int> ar_4 = { 1, 2, 3, 4, 5 };
    vector<int> ar1 = {10, 20, 30}; 
     
    // Declaring iterator to a vector
    vector<int>::iterator ptr_5 = ar_4.begin();
    
    // Using advance to set position
    advance(ptr_5, 3);
     
    // copying 1 vector elements in other using inserter()
    // inserts ar1 after 3rd position in ar
    copy(ar1.begin(), ar1.end(), inserter(ar_4,ptr_5));
     
    // Displaying new vector elements
    cout << "The new vector after inserting elements is : ";
    for (int &x : ar_4) 
        cout << x << "\n";
     
    return 0;  




}