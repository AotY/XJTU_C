//各种格式转换的使用
#include <stdio.h>

int main() 

{
	int a,b; 

	float d,e; 

	char c1,c2; 

	double f,g; 

	long m,n; 

	unsigned int p,q; 

	a=61;b=62; 

	c1='a';c2='b'; 

	d=3.56;e=-6.87; 

	f=3157.890121;g=0.123456789; 

	m=50000;n=-60000; 

	p=32768;q=40000; 

	printf("a=%d,b=%d\nc1=%c,c2=%c\nd=%6.2f,e=%6.2f\n",a,b,c1,c2,d,e); 

	printf("f=%1.56f,g=%15.12f\nm=%ld,n=%ld\np=%u,q=%u\n",f,g,m,n,p,q); 

}

/*②将程序第10—14行改为：

c1=a;c2=b;

f=3157.890121;g=0.123456789;

d=f;e=g;

p=a=m=50000;q=b=n=-60000;

运行程序，分析结果。
*/

//③用sizeof运算符分别检测程序中各类型的数据占多少字节。例如，int型变量a的字节数为sizeof(a)或sizeof(int),用printf函数语句输出各类型变量的长度（字节数）。
