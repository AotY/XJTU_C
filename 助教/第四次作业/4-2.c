/*
 恺撒加密法加密规则是：
 
 将原来的小写字母用字母表中其后面的第3个字母的大写形式来替换，
 大写字母按同样规则用小写字母替换，对于字母表中最后的三个字母，
 可将字母表看成是首未衔接的。如字母c就用F来替换，字母y用B来替换，而字母Z用c代替。
 编程实现以下功能：输入一个字符串，将其加密后输出。
 输入：
 AMDxyzXYZ
 输出：
 dpgABCabc

 a -> A  -32
 
 A -> a +32
 
 z -> c -26
 Z -> C -26
 */

#include <stdio.h>
#include <string.h>
#define N 101

int main(int argc, char const *argv[])
{
    
    
    
    char str[N];
    scanf("%s", str);
    int i;
    for(i = 0; str[i] != '\0'; i++)
    {
       
        
        str[i] += 3; //后移3位
        if(str[i] > 122) //如果大于z
        {
            str[i] -= 26;
        }
        else if(str[i] > 90 && str[i] < 97) //如果大于Z 小于 a
        {
            str[i] -= 26;
        }

        if(str[i] < 91) //如果是大写
        {
            str[i] += 32;
        }
        else if(str[i] > 96 && str[i] < 123)//如果是小写
        {
            str[i] -= 32;
        }
    }
    for(i = 0; str[i] != '\0'; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;	
}