/*
 在医院打点滴（吊针）的时候，如果滴起来有规律，
 先是滴一滴，停一下；
 然后滴二滴，停一下；
 再滴三滴，停一下...，现在有一个问题：
 这瓶盐水一共有v毫升，每一滴是d毫升，每一滴的速度是一秒（假设最后一滴不到d毫升，则花费的时间也算一秒），
 停一下的时间也是一秒，这瓶水什么时候能滴完呢？（0 < d < v <6000)
 样例（先输入d，然后v）： ()
 0.5 1.7
 6
 
 
 用例1 输入：0.5 1.7 输出：6
 用例2 输入：1.3 3456 输出：2731
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//获取当前滴数
float getCurCount(float *v, float d, int i);

float getCurCount(float *v, float d, int count)
{
    int result = 0;
    int i;
    for (i = 0 ; i < count; i++)
    {
        if(*v <= 0.0)
        {
            break;
        }
        *v -= d;
        result ++;
    }
    
    return result;
}

int main()
{
    float v, d;
    int i = 1;
    scanf("%f %f", &d, &v);
    int count = 0;
    while(1)
    {
        int result = getCurCount(&v, d, i);
        
        if(v <= 0.0)
        {
            count += result;
            break;
        }
        else
        {
            count += result;
            count ++;
        }
        
        i++;
    }
    printf("%d\n", count);
    return 0;
}


