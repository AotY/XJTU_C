/*

6.1 编写一个函数，从传入的一个字符串中找出一个最长的一个子字符串， 输出该子字符串。
输入：
Life is not a problem to be solved but a reality to be experienced
输出：
experienced
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void init_str(char *c, int len)
{
    int i;
    for(i = 0; i < len; i++)
    {
        c[i] = '\0';
    }
}

int main(int argc, const char * argv[])
{
    char str[101];
    char l_str[20];
    
    int i;
    int cur_l = 0;
    int max_l = 0;
    int last_space_index = -1;
//    init_str(l_str, 20);
    init_str(str, 100);
//    scanf("%s", str);
    gets(str);
    unsigned long len = strlen(str);
    str[len] = ' ';
//    str[len]
    // 找到最长
    for (i = 0; str[i] != '\0'; i++)
    {
//        cur_l ++ ;
        if (str[i] == ' ')
        {
            if (cur_l > max_l)
            {
                /*
                 char subbuff[5];
                 memcpy( subbuff, &buff[10], 4 );
                 subbuff[4] = '\0';
                 */
                // l_str = {'',};
                init_str(l_str, 20);
                max_l = cur_l;
                memcpy(l_str, &str[last_space_index + 1], cur_l);
                l_str[cur_l + 1] = '\0';
                // last_space_index = i;
//                last_space_index = i;
            }
            last_space_index = i;
            cur_l = 0;
        }
        else
        {
            cur_l ++;
        }
    }
    for(i = 0 ; l_str[i] != '\0'; ++i)
    {
        printf("%c", l_str[i]);
    }
    // printf("\n");
    return 0;
}

