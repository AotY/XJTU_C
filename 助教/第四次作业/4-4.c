/*
请输入一个正整数：7654321
该整数按照标准的三位分节格式输出为：7,654,321
测试样例如下：

输入：

7654321

输出：
7,654,321          

*/

#include <stdio.h>
#include <string.h>
#define N 101

int main(int argc, char const *argv[])
{
	
	// int capital = 0, lower = 0, digit = 0, other = 0, total = 0;
	char str[N] = {'\0'};
	char outStr[N] = {'\0'};

	fgets(str, N, stdin); // 更安全的函数
    // scanf("%s\n", str);
    // printf("%s\n", str);
    // char c = ' ';
    int i = 0;
    int count = 0;
    int index = 0;
    for(i = N-1; i >= 0; i--)
    {

    	if(str[i] != '\0' && str[i] != '\n')
    	{
    		count ++;
    		outStr[index++] = str[i];
    		if(count == 3)
    		{
    			count = 0;
    			outStr[index++] = ',';
    		}
    	}
    }
	for(i = index-1; i >= 0; )
	{
		
		if(outStr[i] == ',' && i == index-1)
			printf("");
		else
			printf("%c", outStr[i]);
		i--;
	}
	printf("\n");
    return 0;
}