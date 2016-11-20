/*

Given a non-negative integer N, your task is to compute the sum of all the digits of N, 
and output every digit of the sum in English.

Input Specification:

Each input contains one test case. Each case occupies one line which contains an N (<= 10^100).

Output Specification:

For each test case, output in one line the digits of the sum in English words. 
There must be one space between two consecutive words, but no extra space at the end of a line.

Sample Input:

12345

Sample Output:

one five

23445678
three nine

思路就是先分解， 在求和是吧
*/

#include <stdio.h>
#define N 1000 //最大位数

int convertNumber(int n, int *numbers)
{
    int i = 0;
    while(n != 0)
    {
        numbers[i++] = n % 10;
        n /= 10;
    }
    return i;
}

//初始化数组
void initArr(int *arr, int len)
{
    int i ;
    for (i = 0; i < len; ++i)
    {
        arr[i] = -1;
    }
    
}

//获取对应英文
char *getEnglish(int index)
{
	char *s[] = {"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	return s[index];
}

int main(int argc, char const *argv[])
{

	int n;
	int numbers[N];
	initArr(numbers, N);
	scanf("%d", &n);
	int sum = 0;
	int len = convertNumber(n, numbers); //分解
	for (int i = 0; i < len; ++i) //求和
	{
		if(numbers[i] != -1)
			sum += numbers[i];		
	}
	// printf("%d\n", sum);
	initArr(numbers, N);//重新初始化
	//输入对应英文，还要分解
	int len2 = convertNumber(sum, numbers);
	for (int i = len2 - 1; i >= 0; i--)
	{
		//输入对应英文
	    printf("%s ", getEnglish(numbers[i]));
	}
	
	// printEnglish(sum);

	return 0;
}