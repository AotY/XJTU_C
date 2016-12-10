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
    int a, b;
    scanf("%d%d", &a,&b);
    int c = a + b;
    int d = a - b;
    int e = a * b;
    int  f = a / b;
    printf("%d %d %d %d", c, d, e, f);
 
    return 0;
 
 
}
