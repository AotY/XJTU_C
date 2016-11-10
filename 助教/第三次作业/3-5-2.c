/*
 某城市最高的楼只有一部电梯。该电梯和一般电梯不同的是它依照输入楼层数的先后次序运行。电梯最初在0层。运行完一个输入序列后就停止在该楼层，不返回0层。编写程序计算电梯运行一个序列的时间。每次都假设电梯在0层开始，无论上一次运行到几层。电梯每上1层需要6秒。每下1层需要4秒。如在某层停留，无论上下人多少，均停留5秒。
 输入：程序可以输入多行。每行的第一个数N指示后面将有N个楼层的序列。楼层的值大于等于1，小于100。N=0表示结束输入。
 输出：计算每个序列电梯运行的时间。
 例子：
 1 2
 3 2 3 1
 0
 17
 41
 */

#include <stdio.h>
#define N 20
#define UP 6
#define DOWN 4
#define STAY 5

void init_arr(int *arr, int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        arr[i] = -1;
    }
}

void print_arr(int *arr, int len)
{
    int i;
    for(i = 1; i < len; i++)
    {
        if (arr[i] != -1)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    
    int arr[N];
    int i;
    int value;
    init_arr(arr, N);
    arr[0] = 0;
    int result = 0;
    int len = 0;
    for(i = 1; i <= N; i++)
    {
        
        scanf("%d", &value);
        if(value == 0)
            break;
        arr[i] = value;
        len ++ ;
    }
    
    for(i = 1 ; i <= N; i++)
    {
        if (arr[i] == -1)
            break;
        
        if (arr[i] > arr[i - 1])
        {
            if (i != len)
                result = result + (arr[i] - arr[i-1]) * UP + STAY;
            else
                result = result + (arr[i] - arr[i-1]) * UP;
        }
        else  //if(arr[i] < arr[i - 1])
        {
            if (i != len)
                result = result + (arr[i - 1] - arr[i]) * DOWN + STAY;
            else
                result = result + (arr[i - 1] - arr[i]) * DOWN;
        }	
        // else
        // {
        // 	result = result + STAY;
        // }
    }
    // result += STAY;
    print_arr(arr, N);
    printf("%d\n", result);
    return 0;
}