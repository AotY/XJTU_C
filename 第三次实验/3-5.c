//3.5 输入以下的图案（菱形�?
/*
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *  
*/   



#include <stdio.h>
#define N 5

int main()  
{
	int i, j;

    for(i=1; i<=N; i++) 
    { 
        for(j=1; j<=N-i; j++) 
        { 
            printf(" "); 
        } 

        for(j=N-i+1; j<N+i; j++) 
        { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
     
    for(i=N-1; i>=1; i--) 
    { 
        for(j=1; j<=N-i; j++) 
        { 
            printf(" "); 
        } 
        for(j=N-i+1; j<N+i; j++) 
        { 
            printf("*"); 
        } 
        printf("\n"); 
    } 
    return 0;
}