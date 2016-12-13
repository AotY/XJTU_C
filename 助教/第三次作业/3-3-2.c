#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getFac(int n)
{
    int i;
    double result = 1;
    for(i = 1; i <= n; i++)
        result *= i;
    return result;
}

double getArcsin(double x)
{
    double u;
    double result = 0.0;
    int n = 0;
    do
    {
        u = (getFac(2 * n) * pow(x, (2 * n + 1))) / (pow(2, 2 * n) * pow(getFac(n), 2) * ((2 * n + 1)));
        result += u;
        n ++;
    }while (fabs(u) >= 1.0e-7);
    
    return result;
}

int main()
{
  
    double x;
    scanf("%lf", &x);
    double result = getArcsin(x);
    printf("%lf\n", result);
    return 0;
}