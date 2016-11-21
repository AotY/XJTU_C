#include <stdio.h>
#define N 100001


/*
5 3 2 1 4 2
1 5 6 2 7

3 4 5 6 7

int arr[100001] ; // 0 - 100000 





*/

void initArr(int *arr, int len)
{
	int i;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
int main()
{
	int arr1[N];
	int arr2[N];
	initArr(arr1, N);
	initArr(arr2, N);
	int i, value;
	int n;
	scanf_s("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &value);
		arr1[value] = 1;
	}
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &value);
		arr2[value] = 1;
	}

	for (i = 0; i < N; i++)
	{
		//arr2[i] += arr1[i];
		arr2[i] ^= arr1[i];
	}

	for (i = 0; i < N; i++)
	{
		if (arr2[i] == 1)
			printf("%d ", i);
	}

	return 0;
}
