# C语言中scanf函数与空格回车

众所周知，[C语言](http://lib.csdn.net/base/c)中的scanf函数的作用是从标准输入设备(通常是键盘)读取输入值，并存储到参数列表中指针所指向的内存单元。下面从几个方面说一下一些稍微细节的东西。下面的实验都在vc6.0中通过。

1、scanf的返回值

scanf通常返回的是成功赋值(从标准输入设备赋值到参数列表所指定的内存区域)的数据项数，如果出错或是遇到end of file（注意，如果想从键盘输入EOF，在windows的DOS窗口用Ctrl+Z 或F6；在UNIX系统上，用CTRL+D。），则返回EOF，比如：

scanf("%d%d", &x, &y);

如果x和y都被成功读入，那么scanf的返回值就是2;
如果只有x被成功读入，返回值为1;
如果x和y都未被成功读入，返回值为0;
如果遇到错误或遇到end of file，返回值为EOF。

2、scanf的处理机制

scanf以删除的方式从缓冲区读入数据(来自标准输入设备的数据存储在缓冲区)，也就是说，scanf从缓冲区读入一个数据项，该数据项在缓冲区中就被清除掉了。而如果scanf需要读取一个数据项，返现缓冲区当前是空的，那么程序就会在scanf代码处阻塞，等待用户输入，scanf函数接收到相应的数据项之后，在缓冲区中将这一数据项清除，scanf函数返回，程序继续执行。

3、scanf对不同类型输入的处理方式

首先，要清除一个概念：空白字符(white space)。一般，程序中所指的空白字符是指空格(space)，回车(enter)和指标符(table)。

3.1 整数%d

对于整型数据的输入，也就是说"%d"类型的输入，scanf默认的分割符是所有的空白字符(空格，回车和指标符都行)。也就是说如果一个scanf函数中出现scanf("%d%d",&a,&b)，那么用任何一个空白字符来分隔两个整数a,b的值，变量a,b都可以接收到正确的输入。另外，要注意的是，scanf对于数字输入，会忽略输入数据项前面的空白字符。下面是例1：

**[cpp]** [view plain](http://blog.csdn.net/xia7139/article/details/14522493#) [copy](http://blog.csdn.net/xia7139/article/details/14522493#)

1. Code:  
2. \#include<stdio.h>  
3. int main()  
4. {  
5.     int a,b;  
6.     printf("Input the value of a and b:");  
7.     while(scanf("%d%d",&a,&b)!=EOF)  
8.     {  
9.         printf("a=%d,b=%d\n",a,b);  
10.         printf("Input the value of a and b:");  
11.     }  
12.     return 0;  
13. }  
14. Output:  
15. Input the value of a and b:123 456  
16. a=123,b=456  
17. Input the value of a and b:123  456  
18. a=123,b=456  
19. Input the value of a and b:123  
20. 456  
21. a=123,b=456  
22. Input the value of a and b:  
23. 123 456  
24. a=123,b=456  
25. Input the value of a and b:     123 456  
26. a=123,b=456  
27. Input the value of a and b: 123 456  
28. a=123,b=456  
29. Input the value of a and b:^Z  
30. Press any key to continue  

3.2 字符串%s

scanf对于字符串输入的处理和对整数类似，会忽略前导的空白字符，而且默认的分隔符是所有的空白字符。但是，要注意的是，由于C语言中，没有string类型，都是用char型数组来表示。因此，scanf会为每一个输入的字符串最后加一个‘\0’。下面是一个例子，可以看出scanf这货的边界控制还是要小心。如下例2。

**[cpp]** [view plain](http://blog.csdn.net/xia7139/article/details/14522493#) [copy](http://blog.csdn.net/xia7139/article/details/14522493#)

1. \#include<stdio.h>  
2. int main()  
3. {  
4.     char a[5],b[5];  
5.     int i;  
6.     printf("Input the value of a and b:");  
7.     while(scanf("%s%s",a,b)!=EOF)  
8.     {  
9.         printf("a=%s,b=%s\n",a,b);  
10.         for(i=0;i<5;i++)  
11.             printf("%d:(%c) ",a[i],a[i]);  
12.         printf("\n");  
13.         for(i=0;i<5;i++)  
14.             printf("%d:(%c) ",b[i],b[i]);  
15.         printf("\n");  
16.         printf("Input the value of a and b:");  
17.     }  
18.     return 0;  
19. }  

运行结果：

![img](http://img.blog.csdn.net/20131109133524796?watermark/2/text/aHR0cDovL2Jsb2cuY3Nkbi5uZXQveGlhNzEzOQ==/font/5a6L5L2T/fontsize/400/fill/I0JBQkFCMA==/dissolve/70/gravity/Center)
3.3 字符%c

scanf在处理对字符数据的输入时，既不会忽略前导空白字符，默认也没有任何分隔字符。所有的字符，包括空白字符都会被当成输入字符。下面是例3。