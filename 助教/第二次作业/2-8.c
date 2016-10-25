/*
从键盘输入一个正整数，然后将该整数分解为1和各个质因子的相乘，如果输入的整数本身就是质数，则应分解为1和该数本身相乘。
输入：
1个整数
输出，因子分解，因子由小到大输出。
样例：
18
1*2*3*3
*/

#include <stdio.h>
int main()
{
    int a;
 
    scanf("%d", &a);
    int  s = 2;
    printf("1");
 
    while (s <= a)
    {
        if (a%s == 0)
        {
            a = a / s;
         
            printf("*%d",s);
             
        }
        else
        {
            s = s + 1;
 
        }
 
    }
    return 0;
 
}
