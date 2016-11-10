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
#define MAX 20

int arr[MAX][MAX];

int yangHui(int i, int j)
{
	int value ;
	if(j == 1 || i == j)
		value = 1;
	else
		value = arr[i-1][j] + arr[i-1][j-1];
	arr[i][j] = value;
	return value;
}

int main()
{
	//要输出杨辉三角， 多少列，每一列有多少输出？
	int n;
	scanf("%d", &n);
	if (n < 1)
	{
		return 0;
	}
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for(j = 1; j <= i; j++)
		{
			int value = yangHui(i, j);
			printf("%d", value);
			if(j == i)
				printf("\n");
			else
				printf(" ");
		}
	}

	return 0;
}