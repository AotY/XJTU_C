/*
编写程序求斐波那契数列的第n项和前n项和，该数列的定义为
F0=0;F1=1;Fn=Fn-1+Fn-2,
输入：
项数n，从0开始
输出：
第n项和n项和
样例：
2
1 2
*/
 
#include <stdio.h>
int main()
{
     
    int n;
    scanf("%d", &n);
    int a = 0, b = 1, s = 1, x = 0, i = 1;
     
     
         
        while (i <n )
        {
 
            x = b + a;
            a = b;
            b = x;
            s = s + x;
            i = i + 1;
             
        }
         
        printf("%d %d", x, s);
     
             
 
         
     
 
 
    return 0;
}
