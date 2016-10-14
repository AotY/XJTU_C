//编程将字符加密 

/*
编程序将“China”译成密码，密码规律是：
用原来的字母后面第4个字母代替原来的字母。
例如，字母“A”后面第四个字母是“E”，用“E”代替“A”。因此，“China”应译为“Glmre”。 
① 请编一程序，输入 c1,c2,c3,c4,c5这5个变量的值分别为‘C’，‘h’,‘i’,‘n’,‘a’，
经过运算，使c1,c2,c3,c4,c5 分别变为‘G’，‘l’, ‘m’ ,‘r’, ‘e’。 
② 输入d1,d2,d3,d4,d5的初值为：‘T’、‘o’ 、‘d’、‘a’、‘y’,
对译码规律做如下补充：‘W’用‘A’代替，‘X’用‘B’代替，‘Y’用‘C’代替，‘Z’用‘D’代替。
修改程序并运行。 

 

输入：

China

输出：

Glmre


*/
#include<stdio.h>
int main()
{
	char c1,c2,c3,c4,c5,d1,d2,d3,d4,d5;
	c1=getchar();
	c2=getchar();
	c3=getchar();
	c4=getchar();
	c5=getchar();
	
	d1=c1+4;
	d2=c2+4;
	d3=c3+4;
	d4=c4+4;
	d5=c5+4;
	
	if(d1 > 90 && d1 < 97)
	    d1 = d1 - 26;
	else if(d1 > 122)
	    d1 = d1-26;

	if(d2 > 90 && d2 < 97)
	    d2 = d2 - 26;
	else if(d2 > 122)
    	    d2 = d2 - 26;	

	if(d3 > 90 && d3 < 97)
	    d3 = d3 - 26;
	else if(d3 > 122)
	   d3 = d3 - 26;
	
	if(d4 > 90 && d4 < 97)
	    d4 = d4 - 26;
	else if(d4 > 122)
	    d4 = d4 - 26;
	
	if(d5 > 90 && d5 < 97)
	    d5 = d5 - 26;
	else if(d5 > 122)
	   d5 = d5 - 26;	
	
	putchar(d1);
	putchar(d2);
	putchar(d3);
	putchar(d4);
	putchar(d5);
	return 0;
}


