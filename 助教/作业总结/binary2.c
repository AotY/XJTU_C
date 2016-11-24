/*
 这版查找， 递归法
 */

#include <stdio.h>
#define LENGTH 17

int binarySearch(int *arr, int low, int high, int findNumber)
{
    
    if (low > high)
        return -1;
    else
    {
        int middle = (low + high) / 2;
        if (findNumber == arr[middle])
        {
            return middle;
        }
        else if (findNumber > arr[middle])
        {
            return binarySearch(arr, middle + 1, high, findNumber);
        }
        else
        {
            return binarySearch(arr, low, middle - 1, findNumber);
        }
    }
}




int main()
{
    int arr[]={1, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 43, 47, 53, 59};
    
    int number = 37;
    // scanf("%d", &number);
    int index = binarySearch(arr, 0, LENGTH, number);
    printf("%d\n", index);
    return 0;
}