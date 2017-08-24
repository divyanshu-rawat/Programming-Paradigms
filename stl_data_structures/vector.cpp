
#include <iostream>
#include <iterator>
#include <vector>
 
using namespace std;
 

// iterators provide a means for accessing data stored in container classes such a vector, map, list, etc. 
// Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequence of numbers, characters etc.
// They reduce the complexity and execution time of program.

// 1. begin() – Returns an iterator pointing to the first element in the vector
// 2. end() – Returns an iterator pointing to the theoretical element that follows last element in the vector

int main(){


	vector <int> vector_one;
	vector <int> :: iterator i;
	vector <int> :: reverse_iterator ir;

	for (int i = 1; i <= 5; i++)
        vector_one.push_back(i);


    cout << "Output of begin and end\t:\t";

    for (i = vector_one.begin(); i < vector_one.end(); i++)
        cout << *i << '\t';

    cout << '\n';

    cout << "Output of rbegin and rend: \n";
    for (ir = vector_one.rbegin(); ir < vector_one.rend(); ++ir)
        cout << *ir << '\n';


    vector <int> g1;
 
    for (int i = 1; i <= 9; i++)
        g1.push_back(i);
 
    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();
    cout << "\nMax_Size: " << g1.max_size();
    cout << "\n";

    return 0;

}


// vector <int> g1;
 
//     for (int i = 1; i <= 10; i++)
//         g1.push_back(i * 10);
 
//     cout << "Reference operator [g] : g1[2] = " << g1[2];
//     cout << endl;
//     cout << "at : g1.at(4) = " << g1.at(4);
//     cout << endl;
//     cout << "front() : g1.front() = " << g1.front();
//     cout << endl;
//     cout << "back() : g1.back() = " << g1.back();
//     cout << endl;


// 1. reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
// 2. at(g) – Returns a reference to the element at position ‘g’ in the vector
// 3. front() – Returns a reference to the first element in the vector
// 4. back() – Returns a reference to the last element in the vector