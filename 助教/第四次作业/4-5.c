/*
编写字符串反转函数mystrrev，该函数的功能为将指定字符串中的字符顺序颠倒排列。
然后再编写主函数验证之。函数原型为 void mystrrev(char string[]) 程序运行结果如下：


输入：
任意1字符串，可能含有空格
输出：
逆序后的字符串
样例：

输入：

Hello,everyone

输出：
enoyreve,olleH


*/
#include <stdio.h>
#include <string.h>
#define N 101

char* mystrrev(char string[]);

void mystrrev2(char string[]);

int main(int argc, char const *argv[])
{

	char str[N] = {'\0'};
	fgets(str, N, stdin); // 更安全的函数
    // int i = 0;

    //第一种方法
	// char *strrev = mystrrev(str);
	// printf("%s\n", strrev);

	//第二中方法
	mystrrev2(str);


	return 0;
}


void mystrrev2(char string[])
{
	//两两交换
	int len = strlen(string) - 2;
	// printf("%d\n", len);
	int i ;
	char temp;
	for (i = 0; i <= len/2; i++)
	{
		temp = string[i];
		string[i] = string[len-i];
	}
	printf("%s\n", string);
}	

char* mystrrev(char string[])
{
	int i ;
	char strrev[N] = {'\0'};
	// char *pstr;
	// pstr = strrev;
	int len = strlen(string);
	// printf("len: %d\n", len);
	int index = 0;
	for(i = len-2; i >= 0; i--)
    {
    	if(string[i] != '\0' && string[i] != '\n')
    	{
    		strrev[index++] = string[i];
    	}
    	else
    		break;
    }
    // printf("%s\n", strrev);
    return strrev;
}