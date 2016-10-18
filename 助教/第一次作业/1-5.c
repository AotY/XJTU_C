/*
编写程序计算任意两个整数的和、差、积和商。
输入：2个整数
输出：4个整数，依次为和、差、积和商
样例： 
2 3 
5 -1 6 0

*/
#include <stdio.h>
 
int main()
{
    int a, b;
    scanf("%d%d", &a,&b);
    int c = a + b;
    int d = a - b;
    int e = a*b;
    int  f = a / b;
    printf("%d %d %d %d", c, d, e, f);
 
    return 0;
 
 
}
