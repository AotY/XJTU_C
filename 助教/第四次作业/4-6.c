/*
孪生素数是指间隔为 2 的相邻素数，例如最小的孪生素数是3和5，5和7也是。
输入N找出2-N之间的孪生素数的个数。
输入：N
输出：个数
样例：
10
2
质数定义为在大于1的自然数中，除了1和它本身以外不再有其他因数的数称为质数
*/

#include <stdio.h>
// #define N 101

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

	int N;
	int i;
	// int arr[N] = {0};
	scanf("%d", &N);
	int index = 0;
	for( i = 3; i < N; i++)
	{
		if (isPrime(i) == 1)
		{
			// arr[index++] = i;
			// printf("%d\n", i);
			index++;
		}
	}

	printf("%d\n", index-1);
	return 0;
}




