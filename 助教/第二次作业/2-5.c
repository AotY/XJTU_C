/*
在屏幕上输入多个正整数，将输入的正整数累加，直到输入为负数或0时，停止读取数据，计算读取的正整数的和
输入：多个整数，空格分隔；
输出：和
样例：
1 2 3 4 5 -1
15
*/

#include <stdio.h>
int main()
{
    int a;
 
    scanf("%d",&a);
    int s = 0;
    while (a>0)
    {
        s = s + a;
        scanf("%d",&a);
    }
     
     
    printf("%d ",s);
    return 0;
 
}
