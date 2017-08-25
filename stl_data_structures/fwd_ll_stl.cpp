

// http://www.geeksforgeeks.org/forward-list-c-set-1-introduction-important-functions

#include <iostream>
#include <forward_list>
using namespace std;

int main(){


	forward_list <int> list_1;
	forward_list <int> list_2;

	forward_list <int> :: iterator ptr;
	list_1.assign({1,2,3});
	list_2.assign(5,10);

	list_1.push_front(60);
	// list_1.pop_front();


	ptr = list_1.insert_after(list_1.begin(),4);
	list_1.emplace_after(ptr,2);

	list_1.erase_after(ptr);

	// remove() :- This function removes the particular element from the forward list mentioned in its argument.

	list_1.remove(60);

	list_1.remove_if([](int x){ return x == 3;});


	// splice_after() :- This function transfers elements from one forward list to other.
	 
	// Displaying forward lists
    cout << "The elements of first forward list are : ";
    for (int&a : list_1)
        cout << a << " ";
    cout << endl;



     
    cout << "The elements of second forward list are : ";
    for (int&b : list_2)
        cout << b << " ";
    cout << endl;
 
    return 0;

}