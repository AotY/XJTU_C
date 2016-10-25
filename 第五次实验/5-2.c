/*
5.2 使用函数实现两个数的交换
输入：
3.5 4.5
输出
4.5 3.5
*/
#include <stdio.h>
int swap(int *p1,int *p2)
{
int tmp;
tmp=*p1;
*p1=*p2;
*p2=tmp;
}
int main()
{
	int a=12;
	int b=34;
	 swap(&a ,&b);
	printf("a=%d\nb=%d\n",a,b);
	system("pause");
	return 0;
}
