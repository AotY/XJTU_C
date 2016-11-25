/*

编写程序，把1到n个整数赋予某个int型数组，然后用int型指针输出该数组元素的值。
输入参数是待输出元素的个数n。

输入：

9

输出：

1 2 3 4 5 6 7 8 9

用例1 输入：9 输出：1 2 3 4 5 6 7 8 9 
用例2 输入：3 输出：1 2 3 
*/

#include <stdio.h>
#include <stdlib.h>

int *getNumbers(int n)
{
	int *numbers = (int *)(malloc(sizeof(int) * n));
	int i;
	for(i = 1; i <= n; i++)
	{
		numbers[i-1] = i;
	}
	return numbers;
}

void printArr(int *arr, int len)
{
    int i ;
    for (i = 0; i < len; ++i)
    {
    	printf("%d ",arr[i]);   
    }
    
}
int main()
{

	int n;
	scanf("%d", &n);
	int *numbers = getNumbers(n);

	printArr(numbers, n);

	return 0;
}
