/*
这版查找， 递归法
*/

#include <stdio.h>
#define LENGTH 15

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
        else if(findNumber < arr[middle])
        {
        	return binarySearch(arr, low, middle - 1, findNumber);
        }
	}
}




int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int number ;
    scanf("%d", &number);
    int index = binarySearch(a, 0, LENGTH, number);
    printf("%d\n", index);
    return 0;
}