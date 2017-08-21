 // vector<int> v; 
 // vector<int> v2; 

 // .. 

 // Shift all elements from second to last to the appropriate number of elements. 
 // Then copy the contents of v2 into v. 
 // v.insert(1, all(v2)); 


// Vector also has a member function erase, which has two forms. Guess what they are:
//  erase(iterator); 
//  erase(begin iterator, end iterator); 
// At first case, single element of vector is deleted. At second case, the interval, specified by two iterators, is erased from vector.
// The insert/erase technique is common, but not identical for all STL containers.