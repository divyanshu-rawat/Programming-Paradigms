

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

    for(i=k ; i<n ; i++){
    	printf("%d \t",a[k][i]);
    }

    printf("\n");
    
    for(i=k; i<m; i++){
    	printf("%d \t",a[i][n-1]);
    }

    printf("\n");

    for(i= 0 ; i < C ; i++){
    	printf("%d \t",a[m-1][n - 1 - i]);
    }

    printf("\n");

    for(i= 0 ; i < R - 1 ; i++){
    	printf("%d \t",a[m - 1 - i][l]);
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

