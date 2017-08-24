

#include <stdio.h>
#define R 3
#define C 6


void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;
 
    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */

    // printf("%d\n",m);
    // printf("%d\n",n);

    while( k < m && l < n ){


    for(i=k ; i<n ; i++){
    	printf("%d \t",a[k][i]);
    }

    k++;

    // printf("\n");
    
    for(i=k; i<m; i++){
    	printf("%d \t",a[i][n-1]);
    }

    n--;

    // printf("\n");

     if ( k < m)
        {
            for (i = n-1; i >= l; --i)
            {
                printf("%d \t", a[m-1][i]);
            }
            m--;
        }
    
    // printf("\n");

    if( l < n){

    	for(i = m - 1 ; i >= k ; i--){

    		printf("%d\t ", a[i][l]);
    	}
    	l++;


    }

   
}
     printf("\n");



}


int main()
{
    int a[R][C] = { 

    	{1,  2,  3,  4,  5,  6},
        {7,  8,  9,  10, 11, 12},
        {13, 14, 15, 16, 17, 18}
    
    };
 
    spiralPrint(R, C, a);
    return 0;
}

