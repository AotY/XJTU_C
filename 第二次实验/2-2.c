/*
当用户输入相应字母时，系统根据用户的选择，输出相关信息。 程序运行结果如下：

输入：I 输出：input

输入：O 输出：output

输入：S 输出：sort

输入：Q 输出：quit
*/
# include <stdio.h>
int main()
{
    char word;
    scanf("%c",&word);
    switch(word)
    {
        case'I':printf("input");break;
        case'O':printf("output");break;
        case'S':printf("sort");break;
        case'Q':printf("quit");break;
        default:printf("enter data error!");break;
    }
return 0;
}