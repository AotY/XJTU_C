/*

编写程序，用户输入任意的3个小数；将这3个小数相加并显示结果；将结果按四舍五入方法转换成整数并显示。
输入：3个小数，空格分隔；
输出：和，四舍五入后的整数，1行显示，空格分隔
样例： 
1.1  2.2  3.3 
6.6 7
*/
#include <stdio.h>
int main()
{
     float a, b,c ;
     scanf("%f%f%f", &a, &b, &c);
     float d = a + b + c;  
     int e = a + b + c + 0.5;
     printf("%g %d", d,e);
     return 0;
 }
