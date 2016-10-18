/*

输入总秒数，转换为相应的时、分、秒。
输入：整数
输出：时分秒，整数，西文冒号分隔。
样例：
3610
1:0:10

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