/*

闰年计算。程序输入一个正整数Y，以及另一个正整数N。计算从Y年开始后的第N个闰年是哪一年（如果Y本身是闰年，则Y之后的第一个闰年是Y）。
程序输入：
程序可以多次计算，首先输入一个数K指示计算的次数，随后每行输入一个Y和N用空格分隔，做K次计算输出K个结果。（K>=1 && K<=100，N>=1 && N<=10000）
例子：
3
2005 3
1855 12
2004 10000
2016
1904
43236
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int  y, n,y1,k;
    scanf("%d",&k);
    int x = 0;
    while (x < k)
    {
        int i = 0;
        scanf("%d %d", &y, &n);
        while (i < n)
        {
            if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
            {
                i = i + 1;
                y1 = y;
                y = y + 1;
 
 
            }
            else
            {
                y = y + 1;
            }
        }
        printf("%d\n", y1);
        x = x + 1;
    }
        return 0;
     
}
