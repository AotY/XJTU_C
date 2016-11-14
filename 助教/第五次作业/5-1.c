/*

猜数字游戏是gameboy最喜欢的游戏之一。

游戏的规则是这样的：计算机随机产生一个四位数，然后玩家猜这个四位数是什么。
每猜一个数，计算机都会告诉玩家猜对几个数字，其中有几个数字在正确的位置上。

比如计算机随机产生的数字为1122。
如果玩家猜1234,因为1,2这两个数字同时存在于这两个数中，而且1在这两个数中的位置是相同的，
所以计算机会告诉玩家猜对了2个数字，其中一个在正确的位置。

如果玩家猜1111,那么计算机会告诉他猜对2个数字，有2个在正确的位置。
现在给你一段gameboy与计算机的对话过程，你的任务是根据这段对话确定这个四位数是什么。

输入：
输入数据有多组。
每组的第一行为一个正整数N(1<=N<=100)，表示在这段对话中共有N次问答。
在接下来的N行中，每行三个整数A,B,C。

gameboy猜这个四位数为A，然后计算机回答猜对了B个数字，其中C个在正确的位置上。

当N=0时，输入数据结束。

输出：
每组输入数据对应一行输出。
如果根据这段对话能确定这个四位数，则输出这个四位数，若不能，则输出"Not sure"。
例子：
6

4815 2 1
5716 1 0
7842 1 0
4901 0 0
8585 3 3
8555 3 2

2
4815 0 0
2999 3 3
0

输出：
3585
Not sure
*/



#include <stdio.h>


int solveGameBoy(int gameboy[][6], int numberIndex[10], int N)
{
	int result = 0;
	//找到出现位置准确最多的一行


	return result;
}

int main()
{
	int N; // 1<=N<=100
	
	int A, B, C;
	while(scanf("%d", &N))
	{
		int numberIndex[10] = {0}; //记录0-9数字是否出现
		int gameboy[101][6] = {0};
		if (N == 0)
		{
			break;
		}
		else
		{
			for (int i = 1; i <= N; i++)
			{
				scanf("%d %d %d", &A, &B, &C);
				//分解
				gameboy[i][3] = A % 10;
				numberIndex[A % 10] = 1;
				A /= 10;

				gameboy[i][2] = A % 10 ;
				numberIndex[A % 10] = 1;
				A /= 10;

				gameboy[i][1] = A % 10;
				numberIndex[A % 10] = 1;
				A /= 10;

				gameboy[i][0] = A;
				numberIndex[A % 10] = 1;
				
				gameboy[i][4] = B; //出现几次
				gameboy[i][5] = C; //位置准确几个
			}
			//现在有了数据，怎么处理呢？
			int result = solveGameBoy(gameboy, numberIndex, N);
			if(result == 0)
			{
				printf("Not sure\n");
			}
			else
			{
				printf("%d\n", result);
			}
			
			//打印数组
			// for (int i = 1; i <= N; i++)
			// {
			// 	for (int j = 0; j < 6; ++j)
			// 	{
			// 		printf("%d ", gameboy[i][j]);
			// 	}
			// 	printf("\n");
			// }

		}
	}


	return 0;
}

