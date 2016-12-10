/*
 使用栈，检查表达式（2+3）*a*（3+b）/（2*（12+8）的括号是否匹配。
 
 用例1 输入为空  输出：
 */

//(2+3)*a*(3+b)/(2*(12+8)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 101

//初始化
void init_arr(char *arr, int n)
{
    int i = 0;
    for( ; i <= n; i++)
    {
        arr[i] = 1;
    }
}

int match(char *str, int len)
{
    int status = 1; //默认匹配
    int pos = 0; //栈指针，初始化为0
    int i;
    char *stack = (char *)malloc(sizeof(char) * len);
    init_arr(stack, len); //初始化栈
    
    for(i = 0; i < len; i++)
    {
        if(str[i] == '(') //入栈
        {
            stack[pos++] = '(';
        }
        else if(str[i] == ')') //出栈
        {
            pos--;
            while(stack[pos] != '(')
            {
                stack[pos] = '\0';
                pos -- ;
            }
            stack[pos] = '\0';
        }
        else
        {
            //入栈
            stack[pos++] = str[i];
        }
    }
    
    for(i = 0; i < pos; i++)
    {
        if(stack[i] == '(' || stack[i] == ')')
        {
            status = 0;
        }
    }
    return status;
}

//一个栈，只存括号就好了

int match2(char *str, int len)
{
    int status = 1; //默认匹配
    int pos = 0; //栈指针，初始化为0
    int i;
    char *stack = (char *)malloc(sizeof(char) * len);
    init_arr(stack, len); //初始化栈
    
    for(i = 0; i < len; i++)
    {
        if(str[i] == '(') //入栈
        {
            stack[pos++] = '(';
        }
        else if(str[i] == ')') //出栈
        {
            pos--;
            while(stack[pos] != '(')
            {
                stack[pos] = '\0';
                pos -- ;
            }
            stack[pos] = '\0';
        }
       
    }
    
    if(pos != 0)
        status = 0;
    
    return status;
}
int main()
{
    char str[N];
    init_arr(str, N);
    scanf("%s", str);
    
//    int status = match(str, (int)strlen(str));
    
    int status = match2(str, (int)strlen(str));

    if(status == 0)
        printf("No");
    else
        printf("Yes");
    return 0;
}


