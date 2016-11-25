/*
 输入一行数字，如果我们把这行数字中的‘5’都看成空格，那么就得到一行用空格分割的若干非负整数
 （可能有些整数以‘0’开头，这些头部的‘0’应该被忽略掉，除非这个整数就是由若干个‘0’组成的，这时这个整数就是0）。
 你的任务是：对这些分割得到的整数，依从小到大的顺序排序输出。
 输入：输入数据只有一行数字（数字之间没有空格），这行数字的长度不大于1000。
 输入数据保证：分割得到的非负整数不会大于100000000；输入数据不可能全由‘5’组成。
 输出：对于每个测试用例，输出分割得到的整数排序的结果，相邻的两个整数之间用一个空格分开，每组输出占一行。
 
 例子：
 
 0051231232050775
 
 00 12312320 077
 0 77 12312320
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ZERO 48
#define MAX 100

void bubbleSort(int *arr, int len)
{
    int i, j;
    int temp;
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
}

void printArr(int *arr, int len)
{
    int i ;
    for (i = 0; i < len; ++i)
    {
        printf("%d ",arr[i]);
    }
    
}

void replace(char *string, int len)
{
    
    int i;
    for (i = len - 1; i >= 0; i--)
    {
        string[i] = string[i-1];
    }
    string[0] = '5'; //第一位添加空格
    for (i = 0; i < len; ++i)
    {
        if(string[i] == '5')
        {
            string[i] = ' ';
        }
    }
    
}


int getNubmers(char *string, int *numbers, int len)
{
    int numbersLen = 0;
    int i, j;
    int last_space_index = len;
    for(i = len - 1; i >= 0; i--)
    {
        if (string[i] == ' ')
        {
            if(last_space_index-1 > i)
            {
                int p = 0;
                int value = 0;
                for(j = last_space_index - 1 ; j > i; j--)
                {
                    value += ((int)string[j] - ZERO) * pow(10, p);
                    p ++;
                }
                last_space_index = i;
                numbers[numbersLen++] = value;
            }
            else
            {
                last_space_index = i;
            }
        }
        
    }
    return numbersLen;
    
}



int main()
{
    char string[MAX];
    scanf("%s", string); //0051231232050775
    int len = (int)strlen(string) + 1;
    replace(string, len);
    
    int numbers[MAX];
    int numbersLen = getNubmers(string, numbers, len);
    bubbleSort(numbers, numbersLen);
    printArr(numbers, numbersLen);
    return 0;
}