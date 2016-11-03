/*
编写一个程序，寻找用户输入的几个整数中的最小值。并假定用户输入的第一个数值指定后面要输入的数值个数。
输入：整数，空格分隔
输出：最小值
例：
5 20 15 300 9 700
9
*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int min;
    scanf("%d", &min);
    int i = 0;
    for (i = 0; i < n - 1; i++)
    {
        int a;
        scanf("%d", &a);
        if (a < min)
        {
            min = a;
        }
    }
    printf("%d", min);
    return 0;
}
