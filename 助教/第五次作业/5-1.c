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
题目是让计算机猜数字，你是给出条件的一方，弄清楚这点，就好写了，
四位数，从1000到9999范围并不大，那就用暴搜了，外界所给条件我正好用来筛数，留下符合的，有
一项的话就是结果，多项就是条件不足，没有就是没有符合要求的。


枚举法，把猜测的数字建立一个结构体，方便后续的比较，
枚举每一个四位数，和猜测的数字进行比较，求出共有的数字个数
和共有数字个数、位置都相等的数字个数，和题目中给出的这两个数值相比，
如果都相等，则说明符合条件。

起初实在想不出解题思路,后来看到网上的枚举思路才顿悟.
因为一共说了n句话,又是一个四位数,我们根据这n句话,来查找1000-9999所有数,当有且只有1个数满足
这n句话时,才可以确定,关键在于如何判断是否满足.需要判断正确的数字,正确的位置.
1.正确的位置比较好判断:只要判断对应位置的数是否相等.
2.正确的数字:先确定判断输出的数的第几个数字,然后再新的数里面查找,一旦找到就标记一下,新数的位置,
防止下次判断的时候重复.

*/



#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct gameBoy
{
    int numbers[4];
    int rightNumber;
    int rightPosition;
};

gameBoy games[100];
int result;
int curNumbers[4];

void convertNumber(int n, int *numbers)
{
    int i = 3;
    while(n != 0)
    {
        numbers[i--] = n % 10;
        n /= 10;
    }
}

int solveGameBoy(int N)
{
    int result = -1;
    //找到出现位置准确最多的一行
    int isSuccess;
    int matchNumbers = 0; //符合的数
    for (int i = 1000; i < 10000; i++)
    {
        //转换
        convertNumber(i, curNumbers);
        isSuccess = 1;
        //比较当前的数是否满足条件
        for(int j = 0; j < N; j++)
        {
            
            // games[j].numbers
            // games[j].rightNumber
            // games[j].rightPosition
            //首先判断是否包含准确个数
            int b = 0;
            int flag;
            int index[4] = {-1, -1, -1, -1};
            for(int m = 0; m < 4; m++) // 3585
            {
                
                for(int n = 0; n < 4; n++)
                {
                    if(curNumbers[m] == games[j].numbers[n]) //如果找到相等位置，记录
                    {
                        //判断该位置是否以前匹配过
                        flag = 0;
                        for(int o = 0; o < 4; o++)
                        {
                            if (index[o] != -1 && n == index[o]) // 如果找过该位置，则继续找
                            {
                                flag = 1; //标记已经找过
                                break;
                            }
                        }
                        if (flag == 1)
                        {
                            continue;
                        }
                        else
                        {
                            index[b++] = n;  //准确位置加1
                            break;
                        }
                    }
                }
                
            }
            if( b != games[j].rightNumber)
            {
                isSuccess = 0;
                break; //搜索下一个数
            }
            
            //首先判断位置准确
//            int match;
            int c = 0;
//            int curN;  //当前数字
//            int findIndex;
//            int findIndex2;
            for(int m = 0; m < 4; m++) // 3858
            {
//                findIndex = m;
                if (curNumbers[m] == games[j].numbers[m])
                {
                    c ++ ;
                }
                    
//                    match = 0;
//                    findIndex2 = k;
//                    curN = curNumbers[findIndex];
//                    while (games[j].numbers[findIndex2] == curN)
//                    {
//                        match ++ ;
//                        findIndex2 ++;
//                        findIndex ++ ;
//                        if (findIndex2 == 4 || findIndex == 4)
//                            break;
//                        curN = curNumbers[findIndex];
//                    }
//                    if(match > c)
//                        c = match;
//                }
            }
            if( c != games[j].rightPosition)
            {
                isSuccess = 0;
                break; //搜索下一个数
            }
        }
        
        if (isSuccess == 1)
        {
            matchNumbers ++ ;
            result =  i;
        }
        
    }
    if( matchNumbers == 1)
        return result;
    return -1;
}


int main()
{
    int N; // 1<=N<=100
//    int A, B, C;
    int number;
    while(scanf("%d", &N), N)
    {
        
        for (int i = 0; i < N; i++)
        {
            scanf("%d %d %d", &number, &games[i].rightNumber, &games[i].rightPosition);
            //分解
            convertNumber(number, games[i].numbers);
        }
        //现在有了数据，怎么处理呢？
        int result = solveGameBoy(N);
        if (result == -1)
        {
            puts("Not sure");
        }
        else
        {
            printf("%d\n", result);
        }
        
    }
    
    return 0;
}




