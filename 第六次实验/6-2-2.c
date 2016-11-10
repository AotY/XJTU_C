/*
6.2 输入两个正整数，求其最大公约数和最小公倍数 
输入：
35,49
输出：
7,245
*/


#include <stdio.h> 
int main() 
{     
	int a, b;
	int greatset;
	int leastset;
	int temp;
	scanf("%d,%d", &a, &b);
	//两种做法
	/*
	int max, min;
	if(a > b)
	{
		max = a;
		min = b;
	}
	else
	{
		min = b;
		max = a;
	}

	while (max%min != 0)
	{
		temp = max % min ;
		max = min;
		min = temp;
	}
	*/

	int min = a;
	while(a%min || b%min)
	{
		min--;
	}
	printf("%d,%d", min, (a*b)/min);
	return 0; 
}