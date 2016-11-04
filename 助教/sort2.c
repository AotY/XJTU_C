/*
10  int*  ( 1 - 100) //
*/

#include <stdio.h>

int main()
{
//	int arr[10] ;
	int sort_arr[101] ; // 0 - 100
	int a, i, j;
	for(i = 0 ; i < 101 ; i++)
	{
//		scanf("%d", a);
		sort_arr[i] = 0; //a 
	}
		
	
	for(i = 0 ; i < 10 ; i++)
	{
		scanf("%d", &a);
		sort_arr[a] = 1; //a 
	}
	
	for(i = 0 ; i < 101 ; i++)
	{
//		scanf("%d", a);
		if (sort_arr[i] == 0)
		{
		}
		else
		{
			printf("%d ", i);
		} 
	}
	printf("\n");
	return 0;
}
