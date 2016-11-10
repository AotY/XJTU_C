/*
 
 编写一个函数，从传入的一个字符串中找出出现次数最多的danc。
 输入：
 Life is not a problem to be solved but a reality to be experienced
 输出：
 i
 */


//
//  main.c
//  Hello
//
//  Created by Leon Tao on 16/10/31.
//  Copyright © 2016年 Leon Tao. All rights reserved.
//

#include <stdio.h>
#include <string.h>

void init_str(char *c, int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        c[i] = '\0';
    }
}

void init_int(int *a, int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        a[i] = 0;
    }
}


int main(int argc, const char * argv[])
{
    
//    char a = 'a';
//    int ii = a;
//    printf("%d", ii);
    
    int bucket[256];
    char str[100];
    
    int i;
    int max_size = 0;
    char max_char = ' ';
    
    init_int(bucket, 256);
    init_str(str, 100);
    
    gets(str);
    unsigned long len = strlen(str);
    
    for (i = 0; i < len ; i++)
    {
        if (str[i] == ' ')
        {
//            break;
            continue;
        }
        else
        {
            int a_as_int = (int)str[i];
            bucket[a_as_int] = bucket[a_as_int] + 1;
        }
    }
    
    for(i = 0 ; i < 256; i++)
    {
        if(bucket[i] != 0){
            if(bucket[i] > max_size)
            {
                max_size = bucket[i];
                max_char = i;
            }
        }
        
    }
    printf("%c\n", max_char);
    return 0;
}

