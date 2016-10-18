/*
输入一个年份，输出改年是否为闰年（是闰年输出yes, 不是输入no）
输入：
2000

输出：
yes

*/
#include <stdio.h>
 
int main()
{
    int year,leap;
    printf("enter year:");
    scanf("%d",&year);
    if((year%4==0&&year%100!=0)||(year%400==0))
        leap=1;
    else
        leap=0;
    if(leap)
        printf("yes");
    else
        printf("no");
    return 0;
}