/*
输入一个整数，输出对应的星期几的英文单词
输入：1 输出：Monday
输入：2 输出：Tuesday

*/

#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:printf("Monday");break;
        case 2:printf("Tuesday");break;
        case 3:printf("Wednesday");break;
        case 4:printf("Thursday");break;
        case 5:printf("Friday");break;
        case 6:printf("Saturday");break;
        case 7:printf("Sunday");break;
        default:printf("enter data error!");break;
    }
	return 0;
}