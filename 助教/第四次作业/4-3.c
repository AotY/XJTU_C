/*

编写一个程序，当输入一个字符串后，要求不仅能够统计其中字符的个数，还能分别指出其中大、小写字母、数字以及其他字符的个数。
程序运行结果如下：
输入：
I am 21 years old.
输出(五个数值依次为大、小写字母、数字、其他字符和总共含有的字符个数)：
1 10 2 5 18

*/

#include <stdio.h>
#include <string.h>
#define N 101

int main(int argc, char const *argv[])
{
	
	int capital = 0, lower = 0, digit = 0, other = 0, total = 0;
	char str[N];
	fgets(str, N, stdin);
    // scanf("%s\n", str);
    printf("%s\n", str);
    // char c = ' ';
    int i = 0;
    // while(c != '\n')
    // {
    // 	c = getchar();
    // 	str[i++] = c;
    // }
    // str[i] = '\0';
    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
    	total ++;
    	if(str[i] > 64 && str[i] < 91)
    		capital++;
    	else if(str[i] > 96 && str[i] < 123)
    		lower++;
    	else if(str[i] >= '0' && str[i] <= '9') //48 57
    		digit++;
    	else
    		other++;
    }
    printf("%d %d %d %d %d\n", capital, lower, digit, other, total);
	return 0;
}