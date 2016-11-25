/*

编写函数求解汉诺塔问题，三个塔分别用A,B,C表示，要求按顺序输出每一步转移方向，如"A->C", 并返回记录总的步数，初始时圆盘都在A上。函数原型为int hanoi(int n, char one, char two, char three)，n为A上初始的圆盘数量，one, two, three分别表示三个塔。
*/

#include <stdio.h>


void move(char from, char to, int *step)
{
	*step += 1;
	printf("%c -> %c\n", from, to);
}

int hanoi(int n, char one, char two, char three, int *step)
{

	if(n == 1)
		move(one, three, step);
	else
	{
		hanoi(n - 1, one, three, two, step);
		move(one, three, step);
		hanoi(n - 1, two, one, three, step);
	}
	return *step;
}
int main()
{
	int step = 0;
	int result = hanoi(3, 'A', 'B', 'C', &step);
	printf("%d\n", result);
	return 0;
}