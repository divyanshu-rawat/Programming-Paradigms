// C++ program to count distinct strings with even odd swapping
// allowed.
#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
 
// Returns encoding of string that can be used for hashing.
// The idea is to return same encoding for strings which 
// can become same after swapping a even positioned character
// with other even characters OR swapping an odd character
// with other odd characters.
string encodeString(string str)
{
    // hashEven stores the count of even indexed character
    // for each string hashOdd stores the count of odd
    // indexed characters for each string
    int hashEven[MAX_CHAR] = {0};
    int hashOdd[MAX_CHAR] = {0};
 
    // creating hash for each string
    for (int i=0; i<str.length(); i++)
    {


        char c = str[i];
        
        cout << "\n";
        cout << c << "\n";

        if (i&1){ // If index of current character is odd
           

           hashOdd[c-'a']++;

           cout << "\n odd : ";
           cout << hashOdd[c - 'a'];
        
        }
        else{
           hashEven[c-'a']++;

           cout << "\n Even : ";
           cout << hashEven[c - 'a'];

        }
    }
 
    // For every character from 'a' to 'z', we store its
    // count at even position followed by a separator,
    // followed by count at odd position.
    string encoding = "";
    for (int i=0; i<MAX_CHAR; i++)
    {
       encoding += to_string(hashEven[i]);
       encoding += to_string('-');
       encoding += to_string(hashOdd[i]);
       encoding += to_string('-');
    }
    return encoding;
}
 
// This function basically uses a hashing based set to
// store strings which are distinct according to accoding
// to criteria given in question.
int countDistinct(string input[], int n)
{
    int countDist = 0;  // Initialize result
 
    // Create an empty set and store all distinct
    // strings in it.
    unordered_set<string> s;
    for (int i=0; i<n; i++)
    {
       // If this encoding appears first time, increment
       // count of distinct encodings.
       if (s.find(encodeString(input[i])) == s.end())
       {
           s.insert(encodeString(input[i]));
           countDist++;
       }
    }

    cout << '\n';
    cout << countDist;
 
    return countDist;
}
 
// Driver code
int main()
{
    string input[] = {"abc", "cba"};
    int n = sizeof(input)/sizeof(input[0]);
 

    char value = 'c' - 'a';
    cout << value++;
      // countDistinct(input, n);

    cout << '\n';

    return 0;
}