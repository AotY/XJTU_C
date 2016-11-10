//
//  main.c
//  demo2
//
//  Created by Leon Tao on 16/11/9.
//  Copyright © 2016年 Leon Tao. All rights reserved.
//

/*
输入 3 6
输出：333333
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a, n;
    scanf("%d%d",&a,&n);
    int i = 1;
    int d = a;
    
    do{
        d = d + a*(pow(10,i));
        i++;
    }while(i<n);
    
    printf("%d",d);
    return 0;
}