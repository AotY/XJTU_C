/*
 编写一个函数, 用于将一个字符串转换为整型数值。其原型为:
 int myatoi(char *string);
 其中参数string为待转换的字符串(其中包括正、负号和数字)，返回值为转换结果。
 
 样例：
 -34
 -34
 
 
 48 - 57
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ZERO 48

int myatoi(char *string);


int myatoi(char *string)
{
    int len = (int)strlen(string);
    int i, value  = 0;
    int p = 0;
    for(i = len-1; i >= 0; i--)
    {
        if(string[i] == '-')
            value *= -1;
        else
        {
            value += ((int)string[i] - ZERO) * pow(10, p);
            p ++;
        }
    }
    return value;
}

int main()
{
    char string[100];
    scanf("%s", string);
    //fgets(string, 100, stdin);
    printf("%d\n", myatoi(string));
    return 0;
}