/*
1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
输入9，输出9*9口诀表，输出12，输出12*12的乘法口诀表。
*/
#include <stdio.h>

int chengfa(int n,int i,int j,int k)
{
scanf("%d",&n);
    for(i=1;i<=n;i++)  
    {  
        for(j=1;j<=i;j++)
        {
			k=i*j;
            printf("%dx%d=%2d  ",j,i,k);
        }
		printf("\n");
    }
}
int main()
{  
	int a=0,b=0,c=0,d=0;
	chengfa(a,b,c,d);
	system("pause");
	return 0;
}