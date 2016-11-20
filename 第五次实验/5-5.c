/*
编写程序，根据以下公式求e的值。要求用两种方法计算：    
e = 1 + 1/1! + 1/2! + ... + 1/n!
1) for循环，计算前50项   
2)while 循环，直至最后一项的值小于10-7 
*/

#include <stdio.h>

double getValue(int n) //求阶层
{
	if (n == 1)
	{
		return 1;
	}

	return n * getValue(n - 1);
}

int main()
{

	double e = 1.0; //初始化e的值等于第一项
	double value = 10e-7; //当前项,初始化让value等于10e-7
	int n = 1;
	while(value >= 10e-7)
	{
		value = 1 / getValue(n);
		e += value; //累加
		n++ ; //下一项
	}
	printf("%g\n", e);
	return 0;
}