/*
找出N以内的勾股数的个数。要求找出三个整数a、b、c，它们满足以下的条件：
a*a+b*b=c*c
a <= b< c< =N
输入：N
输出：勾股数的个数
样例：
10
2

也可以这样写
int main()
{  
    int n;
    scanf("%d", &n);
    int i, j, k;
    int s = 0;
    for (i = 1; i <n;i++)
    {
        for (j = 2; j <n;j++)
        {
            for (k = j + 1; k <= n; k++)
            {
                if (k*k == i*i + j*j)
                    s = s + 1;
            }
        }
    }
    printf("%d", s / 2);
    return 0;
}
*/

#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int a = 3, b = 2, c = 1;
    int i = 0;
    while (a <= N)
    {
        if (a > b)
        {
 
            if (b > c)
            {
                 
 
                if (a*a == b*b + c*c)
                {
 
                    i = i + 1;
                    b = b + 1;
                    c = 1;
                }
                else
                {
                    c = c + 1;
                }
            }
            else
            {
                b = b + 1;
                c = 1;
 
            }
 
        }
        else
        {
            a = a + 1;
            b = 2;
            c = 1;
 
        }
    }
 
 
    printf("%d", i);
    return 0;
 
}
