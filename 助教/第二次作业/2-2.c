/*
求a+aa+aaa+aaaa+... ...+aa...a（n个），其中a为1～9之间的整数。
例如：当a = 1, n = 3时，求1+11+111之和；
当a = 5, n =7时，求5＋55＋555＋5555＋55555＋555555＋5555555之和。

输入：a和n，空格分隔
输出：和
例子：
2 3
246
*/

#include <stdio.h>
 
int main()
{
    int a, n, i, p;
    int ans = 0;
    scanf("%d%d",&a,&n);
    p = a;
    for(i=0;i<n;i++)
    {
        ans += p;
        p = 10*p + a;
    }
    printf("%d", ans);
    return 0;
}