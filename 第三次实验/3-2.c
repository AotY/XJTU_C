/*
输入五个整数，输出最大值与最小值。
输入：1 3 4 6 12
输出：12 1
*/
#include <stdio.h>
 
int main()
{
    int max(int x,int y);
    int min(int x,int y);
    int a,b,c,d,e,f,g,h,l,m,n,o,p;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    f = max(a,b);
    h = max(c,d);
    l = max(f,h);
    m = max(e,l);
 
    g = min(a,b);
    n = min(c,d);
    o = min(g,n);
    p = min(o,e);
 
    printf("%d %d",m,p);
    return 0;
}
int max(int x,int y)
{	int z;
    if(x>y)
    	z=x;
	else 
		z=y;
	return(z);
}
 
  int min(int x,int y)
 {
	int z;
	if(x<y)
		z=x;
	else 
		z=y;
	return(z);
}