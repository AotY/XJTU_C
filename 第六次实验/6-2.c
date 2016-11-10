
// n 皇后问题
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 20


/**
 八皇后问题是一个以国际象棋为背景的问题：如何能够在8×8的国际象棋棋盘上放置八个皇后，使得任何一个皇后都无法直接吃掉其他的皇后？为了达到此目的，任两个皇后都不能处于同一条横行、纵行或斜线上。八皇后问题可以推广为更一般的n皇后摆放问题：这时棋盘的大小变为n×n，而皇后个数也变成n。当且仅当n = 1或n ≥ 4时问题有解[1]
 **/
void init_map(int map[MAX][MAX], int start, int end)
{
    int i, j;
    for(i = start; i <= end; i++)
    {
        for(j = 0; j <= end; j++)
        {
            map[i][j] = 0;
        }
    }
}

int is_position(int map[MAX][MAX], int row, int col, int n)
{
    
    int i, j;
    int col_sum = 0;
    int row_sum = 0;
    int diagonal_sum_1 = 0;
    int diagonal_sum_2 = 0;
    
    for(j = 1; j <= n; j++)
        row_sum += map[row][j];
    
    if (row_sum > 0)
        return 0;
    
    for(i = 1 ; i < row ; i++)
        col_sum += map[i][col];
    
    if (col_sum > 0)
        return 0;
    //不在同一条斜线的两点的含义是行标到对角线的的距离不相等
    
    i = row;
    j = col;
    while(i > 1 && j > 1)
    {
        i--;
        j--;
        diagonal_sum_1 += map[i][j];
        
    }
    
    if (diagonal_sum_1 > 0)
        return 0;
    
    //计算对角线的和 2
    i = row;
    j = col;
    while(i > 1 && j < n )
    {
        i--;
        j++;
        diagonal_sum_2 += map[i][j];
        
    }
    
    if(col_sum == 0 && row_sum == 0 && diagonal_sum_1 == 0 && diagonal_sum_2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ways = 0;
void search(int map[MAX][MAX], int row, int col, int n)
{
    
    int j;
    
    if (row == n+1)
    {
        ways += 1;
        return;
    }
    else
    {
        for(j = 1; j <= n; j++)
        {
            
            if(is_position(map, row, j, n) == 0)
            {
                continue;
            }
            else
            {
            	//问题就是出在标记污染上面， 哎
                init_map(map, row, n);
                map[row][j] = 1; //标记
                //把从rwo 到 n行置0//
                search(map, row+1, j, n);
                init_map(map, row, n);
            }
        }
    }
    //    return ways;
}
void empress_problem(int map[MAX][MAX], int n)
{
    int i;
    //    int ways = 0;
    int init_raw = 1;
    for(i = 1 ; i <= n ; i++)
    {
        
        init_map(map, 1, n); // 初始化数组
        // map[i][j] = 1; // 标记
        map[init_raw][i] = 1;
        search(map, init_raw + 1, i, n); //从下一行开始搜索
        //        ways += search(map, 1, i, n, ways); //从下一行开始搜索
    }
    //    return ways;
}

int main()
{
    //    int n, i;
    //    int answer[MAX];
    int map[MAX][MAX];
    init_map(map, 0, MAX-1);
    int n ;
    //    int ways = 0;
    //    for(i = 1; i < MAX; i++)
    //    {
    //        // tmp = 0;
    //        empress_problem(map, i);
    //        answer[n] = ways;
    //    }
    scanf("%d", &n);
    empress_problem(map, n);
    //    scanf("%d", &n);
    //    printf("%d\n", answer[n]);
    printf("%d\n", ways);
    return 0;
}