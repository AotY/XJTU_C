/*
编写一个函数，用于生成一个空白（空格）字符串，其原型为:
char *mystrspc(char *string, int n);
其中参数string为字符串, n为空白字符串的长度 (空格符的个数)。返回值为指向string的指针。

输入：
n（空白字符串的长度）
输出
输出一一个+号开始，接着n个空格，+号结束
同时在下一行输出一个标尺（照样例原样输出即可）
样例：
1 

+ +
+123456789A123456789B123456789C123456789D123456789E+
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


char *mystrspc(char *string, int n)
{
	int i;
	int len = 0;
	string[len++] = '+';
	for(i = 0 ; i < n; i++)
	{
		string[len++] = ' ';
		string[len++] = '+';
	}
	return string;
}


void init_str(char *string, int len)
{
    int i;
    for (i = 0; i < len; ++i)
    {
        string[i] = '\0';
    }
}

int main()
{
	char *scale = "+123456789A123456789B123456789C123456789D123456789E+";
	char string[MAX];
	init_str(string, MAX);
	int n;
	scanf("%d", &n);
	char *str = mystrspc(string, n);
	printf("%s\n", str);
	printf("%s", scale);
	return 0;
}