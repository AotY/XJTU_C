#include <stdio.h>
#define N 101
/*
 Find the k-th largest element in an unsorted array.
 
 For example, given [3,2,1,5,6,4] and k = 2, return 5.
 
 Note:
 
 You may assume k is always valid, 1 ≤ k ≤ array's length.
 

 */

void print_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void init_arr(int *arr, int len)
{
    for (int i = 0; i < len; i++) {
        arr[i] = 0;
    }
}

int main()
{
    

    printf("%lf", asin(0.77));
    int arr[N];
    int k;
    int len = 0;
    int value ;
    char c = ' ';
    init_arr(arr, N);
    while (c != '\n') {
//        scanf("%d", &arr[len++]);
        scanf("%d", &value);
        arr[value] = 1;
        c = getchar();
        len++ ;
    }
    
    
    scanf("%d", &k);
    if(k > N || k < 0)
    {
        return 0;
    }
    
    int rank = 0;
//    printf("%d\n", arr[len - k]);
    for(int i = N-1; i >= 0; i--)
    {
        
        if(arr[i] != 0)
        {
            rank ++ ;
        }
        
        if(rank == k)
        {
            printf("%d\n", i);
            return 0;
        }
    }
    
    
//    print_arr(arr, len);
//    printf("%d\n", k);
    return 0;
}
