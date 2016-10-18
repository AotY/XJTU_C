//2.3 给出百分制成绩，输出等级

/*
给出一百分制成绩，要求输出成绩等级‘A’、‘B’、‘C’、‘D’、‘E’。90分以上的为‘A’，80-89分为‘B’，70-79分的为‘C’，60-69分的为‘D’，60分以下的为‘E’。

输入：90.5 输出：A
输入：85 输出：B
输入：70 输出：C
输入：69 输出：D
输入：32.5 输出：E
*/
#include <stdio.h>
int main()
{
       float c,s;
       int d;
       scanf("%f",&s);
       c = s/10;
       d = floor(c);
        switch(d)
        {
           case 0:
           case 1:
           case 2:
           case 3:
           case 4:
           case 5:putchar('E');break;
           case 6:putchar('D');break;
           case 7:putchar('C');break;
           case 8:putchar('B');break;
           case 9:putchar('A');break;
           case 10:putchar('A');break;
        }
	return 0;
 
}
