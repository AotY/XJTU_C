/*
从键盘输入n，随后再输入n个整数，使用冒泡排序进行排序后从大到小输出。
样例：

6 7 9 0 -3 1 12
12 9 7 1 0 -3
*/


#include <stdio.h>

void bubbleSort(int *arr, int len)
{
    int i, j;
    int temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

}

void printArr(int *arr, int len)
{
    int i ;
    for (i = 0; i < len; ++i)
    {
    	printf("%d ",arr[i]);   
    }
    
}

int main()
{

	int n;
	int arr[100];
	scanf("%d", &n);
	int i;
	
	for(i = 0 ; i < n ; i++)
	{
		scanf("%d", &arr[i]);
	}

	bubbleSort(arr, n);
	printArr(arr, n);
	return 0;
}