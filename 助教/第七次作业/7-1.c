/*
 输入数组a( 长度<10)，对元素按由小到大顺序排列，然后再输入一个数b插入数组a中，插入后，数组a中的元素仍然由小到大顺序排列。
 输入(第一行为输入的数组，第二行为插入的整数):
 5 2 3 4 8
 7
 输出：
 2 3 4 5 7 8
 */

#include <stdio.h>
#include <string.h>

#define MAX 10


void printArr(int arr[MAX], int len)
{
    int i ;
    for (i = 0; i < MAX; ++i)
    {
        if(arr[i] != 0)
            printf("%d ",arr[i]);
        
    }
    
}

void sort(int arr[MAX], int len)
{
    int i, j;
    int temp ;
    for(i = 0 ; i < len ; i ++)
    {
        for (j = i + 1; j < len; j ++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
                
            }
        }
    }
}

void insert(int arr[MAX], int index, int insertNum, int len)
{
    int i;
    for(i = len; i > index; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[i] = insertNum;
}

int get_index(int arr[MAX], int insertNum, int len)
{
    int i;
    int index = len;
    for(i = 0 ; i < len ; i++)
    {
        if(insertNum <= arr[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

void init_arr(int arr[MAX])
{
    int i;
    for (i = 0; i < MAX; ++i)
    {
        arr[i] = 0;
    }
}

int main()
{
    int arr[10];
    init_arr(arr);
    // char nextChar = ' ';
    int n;
    int i ;
    // int len = 0;
    int insertNum ;
    int insert_index;
    scanf("%d", &n);
    for (i = 0 ; i < n ; i++)
    {
    	scanf("%d", &arr[i]);
    }
    scanf("%d", &insertNum);
    
    sort(arr, n);
    
    insert_index = get_index(arr, insertNum, n);
    insert(arr, insert_index, insertNum, n);
    
    printArr(arr, n+1);
    
    return 0;
}