/*
 已知有排好序的整数数组：
 int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
 使用折半查找，输入一个整数，查找是否在数组中，如在给出下标，否则-1
 输入：
 9
 输出：
 8
 
 */

#include <stdio.h>
#define LENGTH 15

int binarySearch(int *arr, int findNumber)
{
    int index = -1;
    int low = 0;
    int high = LENGTH;
    
    while(low <= high)
    {
        int middle = (low + high) / 2;
        if (findNumber == arr[middle])
        {
            index = middle;
            break;
        }
        else if (findNumber > arr[middle])
        {
            low = middle + 1;
        }
        else if(findNumber < arr[middle])
        {
            high = middle - 1;
        }
    }
    
    return index;
}




int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    
    int number ;
    scanf("%d", &number);
    int index = binarySearch(a, number);
    printf("%d\n", index);
    return 0;
}