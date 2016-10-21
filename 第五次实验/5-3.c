/*
3.实现一个函数判断year是不是润年。
*/
#include <stdio.h>
int year(int n)
{
scanf("%d",&n);
if((n%4==0)&&(n%100!=0)||(n%400==0))
	printf("%d是闰年!",n);
else
	printf("%d不是闰年！",n);
}
int main()
{
    int a;
    year(a);
	system("pause");
return 0;
}