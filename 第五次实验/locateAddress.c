#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/*
 
 After exit from function-scope hilera will be destroyed, dangling pointer will be returned. Use std::string, or allocate memory in heap.
 

 The reason the code is not working is that it is returning the address of a local variable, which is undefined behaviour. You need to dynamically allocate a buffer and return it's address. Or as this is C++ return a std::string instead.
 */
char *demo(char *a)
{
//    char s[10];
    char * s = (char *)malloc(sizeof(char) * 10);
    char * p;
    p = s;
    
//    *p = a[0];
//    *(p + 1) = a[1];
    s[0] = a[0];
    return p;
    
}
int main()
{
    
    char a[10] = "abcd";
    printf("%s \n", a);
    char *r = demo(a);
    printf("%s \n", r);
    
    
    return 0;
}
