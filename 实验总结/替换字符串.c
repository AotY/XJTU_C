#include <stdio.h>
#include <string.h>

#define MAX 256

void str_replace(char* str,char* str_src, char* str_des){
    char *ptr=NULL;
    char buff[MAX];
    char buff2[MAX];
    int i = 0;
    
    strcpy(buff2, str);
    memset(buff, 0x00, sizeof(buff)); //初始化，值置为0
    
    while((ptr = strstr( buff2, str_src)) !=0){ //strstr(): 返回字符串中首次出现子串的地址
        if(ptr - buff2 != 0)
            memcpy(&buff[i], buff2, ptr - buff2); //memcpy(): 复制内存内容。 复制从上一次出现位置到这次出现的位置之间的字符串
        
        memcpy(&buff[i + ptr - buff2], str_des, strlen(str_des)); // 复制用于替换的字符串str_des
        
        i += ptr - buff2 + strlen(str_des); // 移动i的位置
        strcpy(buff2, ptr + strlen(str_src));  //将剩下的字符串复制给buff2
    }
    
    strcat(buff,buff2); //连接字符串buff 与 buff2
    strcpy(str,buff); // 将str 替换为buff2
}

int main()
{
    char string[MAX] = "Hello World! Hello String!";
    str_replace(string, "Hello", "Bye");
    printf("%s\n",string);
    return 0;
}
