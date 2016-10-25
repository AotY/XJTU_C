/*
编写计算阶乘的程序，输入输出格式如下
输入：N
输出：N！
样例：
5
120
*/
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