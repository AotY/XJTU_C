#include <stdio.h>

int main()
{
    char str1[10];
    char str2[10];
    
    

    scanf("%s", str1);
    
    getchar();
    fgets(str2, 10, stdin);
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    
    return 0;

}
