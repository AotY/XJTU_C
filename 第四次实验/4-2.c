/*
输入n,输出n行的杨辉三角图形；如
输入：5
输出：
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
#include <stdio.h>
int fun(int x,int y);
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1; i<=n; ++i){
        for(j=1;j<=i;++j){
            printf("%d",fun(i,j));
            if(i!=j) printf(" ");
            else printf("\n");
        }
    }
    return 0;
}
 
 
int fun(int i,int j){
    if(j==1 || i==j) return 1;	
    else
    {
    	return (fun(i-1, j-1) + fun(i-1, j));
        // return (fun(x-1,y-1) + fun(x-1,y));
    }
}
