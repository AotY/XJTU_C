#include <stdio.h>
#define N 3

void printArr(int arr[][N], int len)
{
    
    int i, j;
    for(i = 0; i < len; i ++)
    {
        for(j = 0; j < len; j++)
            printf("%d\t", arr[i][j]);
        
        printf("\n");
    }
    
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[][N], int len)
{
    
    int i, j, k;
    for(i = 0; i < len; i ++)
    {
        for(j = 0; j < len - 1; j++)
        {
            for(k = 0; k < len - 1 - j; k++)
            {
                if(arr[k][i] > arr[k+1][i])
                    swap(&arr[k][i], &arr[k+1][i]);
            }
        }
    }
    
}

int main()
{
    int arr[][N] = {
        {1, 2, 3},
        {2, 3, 1},
        {5, 2, 1},
    };
    
    printArr(arr, N);
    
    sort(arr, N);
    
    printf("--------------\n");
    printArr(arr, N);
    return 0;
}
