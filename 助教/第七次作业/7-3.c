/*

编写一个函数void copystr(char *str1,char *str2, int m)，用于实现将str1字符串的前m个字符全部复制到另一个字符串str2中。运行格式如下(输入str1):

hello world
5

hello

（注意下划线部分为输入）

*/

#include <stdio.h>
#include <string.h>
#define N 10001

void copystr(char *str1, char *str2, int m)
{
	int i;
	for(i = 0 ; str1[i] != '\0'; i++)
	{
		if (i == m)
			break;
		str2[i] = str1[i];
	}

}

int main()
{

	char str1[N];
	char str2[N];

	int m ;
	fgets(str1, N, stdin);
	scanf("%d", &m);

	copystr(str1, str2, m);
	printf("%s\n", str2);

	return 0;

}