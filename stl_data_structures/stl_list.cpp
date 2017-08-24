// Functions used with List :
// front() – Returns reference to the first element in the list
// back() – Returns reference to the last element in the list
// push_front(g) – Adds a new element ‘g’ at the beginning of the list
// push_back(g) – Adds a new element ‘g’ at the end of the list
// pop_front() – Removes the first element of the list, and reduces size of the list by 1
// pop_back() – Removes the last element of the list, and reduces size of the list by 1
// begin() – Returns an iterator pointing to the first element of the list
// end() – Returns an iterator pointing to the theoretical last element which follows the last element
// empty() – Returns whether the list is empty(1) or not(0)
// insert() – Inserts new elements in the list before the element at a specified position
// erase() – Removes a single element or a range of elements from the list
// assign() – Assigns new elements to list by replacing current elements and resizes the list
// remove() – Removes all the elements from the list, which are equal to given element
// reverse() – Reverses the list
// size() – Returns the number of elements in the list
// sort() – Sorts the list in increasing order


#include <iostream>
#include <list>
#include <iterator>
using namespace std;

void showlist(list <int> g)
{
    list <int> :: iterator it;
    for(it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}


int main()
{
 
    list <int> list1, list2;
 
 
    for (int i = 0; i < 10; ++i)
    {
        list1.push_back(i * 2);
        list2.push_front(i * 3);
    }
    cout << "\nList 1 (list1) is : ";
    showlist(list1);
 
    cout << "\nList 2 (list2) is : ";
    showlist(list2);
 
    cout << "\nlist1.front() : " << list1.front();
    cout << "\nlist1.back() : " << list1.back();
 
    cout << "\nlist1.pop_front() : ";
    list1.pop_front();
    showlist(list1);
 
    cout << "\nlist2.pop_back() : ";
    list2.pop_back();
    showlist(list2);
 
    cout << "\nlist1.reverse() : ";
    list1.reverse();
    showlist(list1);
 
    cout << "\nlist2.sort(): ";
    list2.sort();
    showlist(list2);
 
    return 0;
 
}
