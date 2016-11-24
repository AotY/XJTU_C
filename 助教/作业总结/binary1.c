#include <stdio.h>
#define LENGTH 17

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
    int arr[]={1, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 43, 47, 53, 59};
    
    int number = 37;
    // scanf("%d", &number);
    int index = binarySearch(arr, number);
    printf("%d\n", index);
    return 0;
}
