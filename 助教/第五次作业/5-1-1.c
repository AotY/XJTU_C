/*
 1
 输入两个整型数组（假设数组的大小为不超过10）的各个元素，输出不是两个数组共有的元素，并从小到大排序输出。
 
 输入： 2个数组的元素（小于10个），数组中第一个数据指示元素的个数
 
 输出：非共有的元素,从小到大排序
 
 样例：
 
 输入：
 6 1 2 3 4 5 7
 6 5 6 7 8 9
 
 输出：0 1 2 3 4 8 9
 */
#include <stdio.h>
#define N 10001	//定义最大的数，因为要使用桶排序

// 使用冒泡排序对arr数组进行排序
void bubbleSort(int *arr, int len)
{
    int temp;
    for (int i = 0; i < len - 1; ++i)
    {
        for(int j = 0; j < len-1-j; j++)
        {
            if(arr[j] > arr[j + 1]) //如果前面大于后面，则交换
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}


//打印数组
void printArr(int *arr, int len)
{
    int i ;
    for (i = 0; i < len; ++i)
    {
        printf("%d ",arr[i]);
        
    }
    printf("\n");
}

//初始化数组
void initArr(int *arr, int len)
{
    int i ;
    for (i = 0; i < len; ++i)
    {
        arr[i] = 0;
    }
    
}

/*
 下面在存储的时候就已经排序了，没有调用上面的冒泡排序，这是之前说过的桶排序思想
 */
int main(int argc, char const *argv[])
{
    int arr1[N];
    int arr2[N];
    initArr(arr1, N);
    initArr(arr2, N);
    int value;
    int len = 0;
    int n;
    scanf("%d", &n); //输入n,表示下面一个数组要输入多少元素
    for (int i = 0; i < n; ++i) //输入第一个数组元素
    {
        scanf("%d", &value);
        arr1[value] = 1 ; //出现位置的值等于一，这样可以去掉重复的元素
    }
    
    for (int i = 0; i < n; ++i)//输入第二	个数组元素
    {
        scanf("%d", &value);
        arr2[value] = 1 ;//出现位置的值等于一，这样可以去掉重复的元素
    }
    
    for (int i = 0; i < N; i++) { // 将两个数字的值加起来， 因为要求的是非共有的元素。
        arr1[i] = arr1[i] + arr2[i]; //当出现位置大于1时，说明两个数组中共有
    }

    for (int i = 0; i < N; ++i) //从1开始，因为第0为是大小
    {
        if(arr1[i] == 1) // 如果只出现一次，说明不是重复的元素
        {
            arr2[len] = i;
            len ++ ; //记录长度
        }
    }
     //排序, 这里没有调用冒泡排序，因为输入时已经使用了桶排序，不过你可以看看冒泡排序
    //    bubbleSort(arr2, len);
    printArr(arr2, len);
    return 0;
    
}