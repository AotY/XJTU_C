 /*
 某部队进行新兵队列训练，将新兵从1开始按顺序依次编号，并排成一行横队，训练的规则如下：
 从头开始1至2报数，凡报到2的出列，剩下的向小序号方向靠拢，再从头开始进行1至3报数，凡报到3的出列，
 剩下的向小序号方向靠拢，继续从头开始进行1至2报数，以后从头开始轮流进行1至2报数、
 1至3报数直到剩下的人数不超过三人为止。编写程序，输入数N为最开始的新兵人数（20 < N < 6000），
 输出剩下的新兵最初的编号。
 样例：
 21
 1 7 1
 
 用例1 输入：21 输出：1 7 19
 用例2 输入：3456 输出：1 1459 2917
 
 */

#include<stdio.h>
#define N 6001
#define MAX 3
#define RANK2 2
#define RANK3 3

//初始化
void init_arr(int *arr, int n)
{
    int i = 1;
    for( ; i <= n; i++)
    {
        arr[i] = 1;
    }
}

//打印
void print_arr(int *arr, int n)
{
    int i = 1;
    for( ; i <= n; i++)
    {
        if(arr[i] == 1)
            printf("%d ", i);
    }
}

//获取当前人数
int getCurCount(int *arr, int n)
{
    int i = 1;
    int count = 0;
    for( ; i <= n; i++)
    {
        if(arr[i] == 1)
            count ++;
    }
    return count;
}

//出列
void breakRanks(int *arr, int n, int *flag)
{
    int i = 1;
    int count = 0;
    for( ; i <= n; i++)
    {
        if(*flag == RANK2)
        {
           
            if (arr[i] == 1)
                count ++;
            if(count == RANK2)
            {
                arr[i] = 0;
                count = 0;
            }
            
        }
        else if(*flag == 3)
        {
            if (arr[i] == 1)
                count ++;
            if(count == RANK3)
            {
                arr[i] = 0;
                count = 0;
            }
            
        }
    }
    
}
void train(int *arr, int n)
{
    int flag = 2; // 2: 2, 3: 3
    while (getCurCount(arr, n) > MAX)
    {
        breakRanks(arr, n, &flag);
        if(flag == 2)
            flag = 3;
        else
            flag = 2;
    }
}
int main()
{
    int army[N];
    int n;
    scanf("%d", &n);
    init_arr(army, n);//初始化
    train(army, n);//训练
    print_arr(army, n); //输出
    return 0;
}


