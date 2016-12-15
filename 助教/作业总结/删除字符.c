
/*


删除s1中属于s2的字符；比如输入：
Hello
Hl
输出：
eo

*/
#include <stdio.h>
#include <string.h>

void fun(char *s1, char *s2)
{
    char *p = s1;
    char *res = s1;
    while(*p)
    {
        int flag = 0;
        char *t = s2;
        while(*t)
        {
            if(*p == *t)
            {
                flag = 1;
                break;//
            }
            t++;
        }
        
        if(flag)
            p++;
        else
            *(res++) = *(p++);
    }
    *res = '\0';
    printf("%s\n", s1);
}
int main()
{
    char s1[] = "Hello";
    char s2[] = "Hl";
    fun(s1, s2);
    return 0;
}
