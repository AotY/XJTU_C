/*
输入3个整数，求最大公约数和最小公倍数。
输入：3个整数
输出：最大公约数和最小公倍数，空格分隔
例子：
2 5 8
1 40
*/

#include <stdio.h>
int main()
{
    int a; 
    int b; 
    int c;
    
    scanf("%d%d%d", &a,&b,&c);
    int max = a;
    int min = a;
    while (a%min || b%min || c%min)
        min--;
    while (max%a || max%b || max%c)
        max++;
    printf("%d %d", min, max);
 
 
 
    return 0;
}