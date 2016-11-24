#include <stdio.h>
#define N 6

void bubbleSort(int *arr, int len)
{
    int i, j;
    int temp;
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}
int main()
{
    int arr[N] = {5, 2, 4, 6, 1, 3};
    int i;
    //冒泡排序
    bubbleSort(arr, N);
    for (i = 0; i < N; i++)
        printf("%d ", arr[i]);
    
    return 0;
}
