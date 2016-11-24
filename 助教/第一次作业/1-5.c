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
    int a;
	scanf("%d", &a);
    int h = a / 3600;
    int m = (a % 3600) / 60;
    int s =( a % 3600) % 60;
    printf("%d:%d:%d", h, m, s);
    return 0;
}