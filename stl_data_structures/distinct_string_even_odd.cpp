// C++ program to count distinct strings with even odd swapping
// allowed.
#include<bits/stdc++.h>
using namespace std;



int main()
{
    // string input[] = {"abc", "cba"};
    // int n = sizeof(input)/sizeof(input[0]);

    int p;

    cin >> p;

    int array[p];

    for(int i=0;i<p;++i)
      scanf("%d",&array[i]);

    for(int j=0;j<p;++j)
      printf("%d",array[j]);


 

    // char value = 'c' - 'a';
    // cout << value++;
    //   // countDistinct(input, n);

    // cout << '\n';

    return 0;
}