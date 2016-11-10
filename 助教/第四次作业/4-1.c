/*
输入待查找的字符串：I am a student
输入所需查找的字符：m
在字符串I am a student中找到字符m，如有多个m，查找第一个。其位置在4。
测试样例如下：（输入时待查找的字符串与所需查找的字符用*号隔开）
输入: 
I am a student*m 
输出：
4
用例1 输入：fbhby Wml * W 输出：7 
用例2 输入：I am a student * m 输出：4 
*/


#include <stdio.h>
#define N 101

int main(int argc, char const *argv[])
{
	
	char str[N];
	char c;

	int i, len, index;
	i = 0;
	len = 0;
	index = 0;

	do{
		c = getchar();
		if (c != '*')
		{
			len++;
			str[i++] = c;
		}
	}while(c != '*');

	c = getchar();

	for(i = 0; i <len; i++)
	{
		index ++ ;
		if(c == str[i])
		{
			break;
		}
	}

	// for(i = 0; i < len; i++)
	// {
	// 	printf("%c ", str[i]);
	// }
	
	printf("%d\n", index);

	return 0;
}

