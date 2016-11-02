/*
利用下列公式求反正弦函数近似值。 
arcsin(x)=x+pow(x,3)/(2*3)+1*3*pow(x,5)/(2*4*5)+...., 其中 |x|<1 
其中通项公式为: (2n)!*pow(x,2n+1)/(pow(2,2n)*pow(n!,2)*(2n+1))
结束条件可用|u|< 1.0e-7，其中u为通项。 

样例：
0.77
0.878841
*/

#include <stdio.h>
#include <math.h>
int main()
{
    double x;
    scanf("%lf", &x);
    double a=1;
    double b = 1;
    double s = x;
    double n=1;
    double u;
    double i=1;
    do
    {
        a = a*i;
        b = b * 2 * i*(2 * i - 1);
        u = b*pow(x, 2 * n + 1) / (pow(2, 2 * n)*pow(a, 2)*(2 * n + 1));
        s = s + u;
        i++;
        n=n+1;
    } while (u>1.0e-7);
    printf("%g", s);
    return 0;
}
