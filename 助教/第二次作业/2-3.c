/*
有一分数序列如下：
2/1, 3/2, 5/3, 8/5, 13/8, 21/13, ....
即后一项的分母为前一项的分子，后项的分子为前一项分子与分母之和，求其前n项之和。

输入：
整数，项数
输出：
实数，和

样例：
6
10.0071
*/

#include <stdio.h>
int main()
{
    int n;
 
    scanf("%d", &n);
    float x = 2, y = 1, i = 1,  m;
    float s=0;
 
    while (i <= n)
    {
        s = s + x / y;
        m = y;
        y = x;
        x = x + m;
         
        i = i + 1;
         
    }
 
 
    printf("%g", s);
    return 0;
 
}