/*

请计算数列1, 3, 5, 7...前n项之和。输入n，表示前n项。
输入：2 输出: 4
输入：50 输出: 2500

*/
#include <stdio.h>
int main()
{
    int i,sum,n;
    scanf("%d",&n);
 
    sum=0;
    i=1;
    while(i<=2*n-1)
    {
		sum=sum+i;
		i=i+2;
	}
  	printf("%d",sum);	
    return 0;
}