
// The header algorithm defines a collection of functions especially designed to be used on ranges of elements.
// They act on containers and provide means for various operations  for the contents of the containers


#include <iostream>
#include <algorithm>
 
using namespace std;
 

// binary_search(startaddress, endaddress, valuetofind)

// sort(startaddress, endaddress)

/*
void show(int a[])
{
    for(int i = 0; i < 10; ++i)
        cout << '\t' << a[i];
}
 
*/

void show(int a[], int arraysize)
{
    for(int i = 0; i < arraysize; ++i)
        cout << '\t' << a[i];
}


int main()
{

  //   int a[10]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
  //   cout << "\n The array before sorting is : ";
  //   cout << "\n";
  //   show(a);
 
  //   sort(a, a+10);
 
  //   cout << "\n\n The array after sorting is : ";
  //   cout << "\n";
  //   show(a);
 
 	// cout << "\n";

  //   return 0;

int a[]= {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};

    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\n The array is : ";
    show(a, asize);
 
    cout << "\n\nLet's say we want to search for 2 in the array";
    cout << "\n So, we first sort the array";

    sort(a, a + 10);
    cout << "\n\n The array after sorting is : ";
    show(a, asize);

    cout << "\n\nNow, we do the binary search";
    if (binary_search(a, a + 10, 2)) 
       cout << "\nElement found in the array";
    else
       cout << "\nElement not found in the array";
 

    cout << "\n\nNow, say we want to search for 10";
     if (binary_search(a, a + 10, 10)) 
       cout << "\nElement found in the array";
    else
       cout << "\nElement not found in the array";
 
 	cout << "\n";
 
    return 0;


 
}