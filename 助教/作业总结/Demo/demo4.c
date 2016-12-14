#include<stdio.h>
int main()
{
    char str1[] = "abcd";
    char str2[] = {'a', 'b', 'c', 'd'};
    printf("size of str1: %d\n", (int)sizeof(str1));
    printf("size of str2: %d\n", (int)sizeof(str2));

    return 0;
}