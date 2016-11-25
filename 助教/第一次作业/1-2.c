/*
	
编写程序将4个字符构成的字符串用替换加密法编码为密文，其中加密规则是：将原来的字母用字母表中其后的第3个字母替换。
输入：4个字符
输出：4个字符
样例：
Love
Oryh
*/

#include <stdio.h>
int main()
{
    char c1, c2, c3, c4;
    char y1, y2, y3, y4;
    scanf("%c%c%c%c", &c1, &c2, &c3,&c4);
    if (c1 >= 'A' && c1 <= 'Z')
        y1 = ((c1 + 3) - 'A') % 26 + 'A';
    else
        y1 = ((c1 + 3) - 'a') % 26 + 'a';
    if (c2>= 'A'&&c2 <= 'Z')
        y2 = ((c2 + 3) - 'A') % 26 + 'A';
    else
        y2 = ((c2 + 3) - 'a') % 26 + 'a';
    if (c3 >= 'A'&&c3 <= 'Z')
        y3 = ((c3 + 3) - 'A') % 26 + 'A';
    else
        y3 = ((c3 + 3) - 'a') % 26 + 'a';
    if (c4 >= 'A'&&c4 <= 'Z')
        y4 = ((c4 + 3) - 'A') % 26 + 'A'; 
    else
        y4 = ((c4 + 3) - 'a') % 26 + 'a';
 	printf("%c%c%c%c", y1,y2,y3,y4);
    return 0;
}