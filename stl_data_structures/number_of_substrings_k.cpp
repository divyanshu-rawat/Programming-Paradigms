// C++ program to count number of substrings with
// exactly k distinct characters in a given string
#include<bits/stdc++.h>
using namespace std;
 
// Function to count number of substrings
// with exactly k unique characters
int countkDist(string str, int k)
{
    int n = str.length();
 
    // Initialize result
    int res = 0;
 
    // To store count of characters from 'a' to 'z'
    int cnt[26];
 
    for(int i = 0; i < n ;i++){

        int distinct_count = 0;
        
        // cout << "\nI am in outside loop !";
        memset(cnt,0,sizeof(cnt));

        for(int j = i; j < n;j++){

            // cout << "\nI am in inner_loop !";
            char c = str[j];

                if(cnt[c - 'a'] == 0){

                    // cout << "\n I am inside distinct_count";

                    distinct_count++;
                }

                cnt[c - 'a']++;


            if(distinct_count == k){
                // cout << "\n I am inside res !";
                res++;
            }
        }

    }
 
    return res;
}
 
// Driver Program
int main()
{
    string str = "aba";
    int k = 2;
    cout << "Total substrings with exactly "
         << k <<" distinct characters :"
         << countkDist(str, k) << endl;
    return 0;
}