#include <stdio.h>
int main()
{
    int N;
    int n = 1;
    int s = 1;
    scanf("%d", &N);
      
    while(n <= N)
    {
        s = s*n;
        n = n + 1;
    }
    printf("%d", s);
    return 0;
}