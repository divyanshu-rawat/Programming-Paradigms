// Input Functions

// 1. getline() :- This function is used to store a stream of characters as entered by the user in the object memory.

// 2. push_back() :- This function is used to input a character at the end of the string.

// 3. pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string.

// C++ code to demonstrate the working of
// getline(), push_back() and pop_back()

#include <iostream>
#include <string> // for string class
using namespace std;
int main()
{
    // Declaring string
    string str;
 
    // Taking string input using getline()
    // "geeksforgeek" in givin output
    getline(cin,str);
 
    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;
 
    // Using push_back() to insert a character
    // at end
    // pushes 's' in this case
    str.push_back('s');
 
    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;
 
    // Using pop_back() to delete a character
    // from end
    // pops 's' in this case
    str.pop_back();
 
    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;
 
    return 0;
 
}


// 3. capacity() :- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string.
//  Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.

// 4. resize() :- This function changes the size of string, the size can be increased or decreased.


// Iterator Functions

// 7. begin() :- This function returns an iterator to beginning of the string.

// 8. end() :- This function returns an iterator to end of the string.

// 9. rbegin() :- This function returns a reverse iterator pointing at the end of string.

// 10. rend() :- This function returns a reverse iterator pointing at beginning of string.

// 5.shrink_to_fit() :- This function decreases the capacity of the string and makes it equal to its size. This operation is useful to save additional memory if we are sure that no further addition of characters have to be made.

// http://www.geeksforgeeks.org/stdstring-class-in-c/