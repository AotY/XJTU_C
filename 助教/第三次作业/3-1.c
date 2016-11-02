/*
编写程序检验由三边能否构成三角形，检验方法是任意两边和均要大于第三边。
输入:
3边长
输出：
若果可以构成，输出YES，否则输出ERROR DATA
样例：
1 1 2
ERROR DATA

*/

#include <stdio.h>
int main()
{
    float a, b, c;
    scanf("%d%d%d", &a, &b,& c);
    if (a + b > c)
    {
        if (b + c > a)
        {
            if (c + a > b)
            {
                printf("YES");
            }
            else{
                printf("ERROR DATA");
            }
        }
        else{
            printf("ERROR DATA");
        }
    }
    else{
        printf("ERROR DATA");
    }
 
    return 0;
}
