/*

编写函数isprime(int a)用来判断变量a是否为素数，若是素数，函数返回1，否则返回0。调用该函数找出任意给定的n个整数中的素数。
输入：
n个整数，输入0表示结束
输出：
素数

样例：
9 8 7 210 101 0
7 101

*/


#include <stdio.h>
#define N 101

//判断是否是素数
int isPrime(int n)
{
	// int
	for (int i = 2; i < n; i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int arr[N] = {0};
	int result[N] = {0};
	int value;
	int index = 0;
	int i;
	scanf("%d", &value);
	while(value != 0)
	{
		arr[index++] = value;
		scanf("%d", &value);	
	}

	for (i = 0; i < index; ++i)
	{
		/* code */
		if(arr[i] != 0 && isPrime(arr[i]) ==1)
			result[i] = arr[i];
		// printf("%d ", arr[i]);
	}

	for (int j = 0; j < i; ++j)
	{
		if(result[j] != 0)
			printf("%d ", result[j]);
	}

}