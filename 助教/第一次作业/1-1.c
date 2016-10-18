/*
从键盘输入任意3个整数，然后输出这3个的平均值。
输入：3个整数
输出：平均值，实数
样例：
1  2  3
2
*/
#include <stdio.h>
int main()
{
    int a, b,c ;
    scanf("%d%d%d", &a, &b, &c);
    double d = (double)(a + b + c) / 3;
    printf("%g", d);
    return 0;
 }
