/*
 
 叛逆期的小明什么都喜欢反着做，连看数字也是如此（负号除外），比如：
 小明会把1234它看成4321；把-1234看成-4321；把230看成032 (032=32)；把-230看成-032(-032=-32)。
 
 现在，小明做了一些a+b和a-b的题目(a, b为整数且不含前导0)，如果给你这些题目正确的答案，你能猜出小明会做得到什么答案吗？
 输入：
 两个整数x,y(-1000000 < = x, y < =1000000), x表示a+b的正确答案，y表示a-b的正确答案。
 输入保证合法，且不需考虑a或b是小数的情况。
 输出：
 输出两个整数s t，之间用一个空格分开，其中s表示小明将得到的a+b答案，t表示小明将得到的a-b答案。
 样例：
 20 6
 38 24
 
 
 -100 -140
 -19 -23
 
 首先是求出x, y的值， 然后再按照题目规则，求出小明的答案。
 */

#include <stdio.h>
#include <math.h>

#define N 10001

int convertNumber(int n, int *numbers)
{
    int i = 0;
    while(n != 0)
    {
        numbers[i++] = n % 10;
        n /= 10;
    }
    return i;
}

//初始化数组
void initArr(int *arr, int len)
{
    int i ;
    for (i = 0; i < len; ++i)
    {
        arr[i] = 0;
    }
    
}

int getRevSum(int n)
{
    int an = 0;
    int y = 0;
    int arr[N];
    initArr(arr, N);
    
    int len = convertNumber(n, arr);
    for (int i = len - 1; i >= 0; i--)
    {
        an += pow(10, y) * arr[i];
        y++;
    }
    return an;
}



int getRevValue(int n)
{
    if ( n > 0) //大于零
    {
        return getRevSum(n);
    }
    else
    {
        return -1 * getRevSum(n * -1);
    }
    
}

int main(int argc, char const *argv[])
{
    int sum = 0;  // 求和
    int sub = 0;  // 差
    
    int x, y;
    scanf("%d %d", &sum, &sub);
    x = (sum + sub) / 2;
    y = sum - x;
    
    int ax = 0;
    int ay = 0;
    //分解x, y ; 然后
    
    ax = getRevValue(x);
    ay = getRevValue(y);
    
    printf("%d %d", ax + ay, ax - ay);
    
    return 0;
}