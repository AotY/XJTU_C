
/*
从键盘输入任意4个整数，然后输出这3个的平均值。
输入：4个整数
输出：平均值，实数
样例：
1  2 3 4
2.5

*/
//+  - * /
#include <stdio.h>
int main()
{//int float double  char
    int a, b, c, d;

    float avg;

    scanf("%d %d %d %d",&a,&b,&c,&d);
    avg = (a + b + c + d)/4.0;
    printf("%.1f\n", avg);
    return 0;
}
