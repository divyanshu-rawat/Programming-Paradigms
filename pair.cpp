





// The first element is referenced as ‘first’ and the second element as ‘second’ and the order is fixed (first, second).
// Pair is used to combine together two values which may be different in type. Pair provides a way to store two heterogeneous objects as a single unit.
// Pair can be assigned, copied and compared. The array of objects allocated in a map or hash_map are of type ‘pair’ by default in which all the ‘first’ elements are unique keys associated with their ‘second’ value objects.
// To access the elements, we use variable name followed by dot operator followed by the keyword first or second.


#include <iostream>
#include <utility>
using namespace std;
 
int main()
{

	// Method 1
    // pair <int, char> PAIR1 ;
 
    // PAIR1.first = 100;
    // PAIR1.second = 'G' ;
 
    // cout << PAIR1.first << " " ;
    // cout << PAIR1.second << endl ;


    // Method 2

    pair <string,double> PAIR2 ("GeeksForGeeks", 1.23);
 
    cout << PAIR2.first << " " ;
    cout << PAIR2.second << endl ;
     
 
    return 0;
}


// make_pair() : This template function allows to create a value pair without writing the types explicitly.
// Syntax : Pair_name = make_pair (value1,value2);

// http://www.geeksforgeeks.org/pair-in-cpp-stl/