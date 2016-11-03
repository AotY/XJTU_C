/*

定义一个描述学生信息的结构体，包含学生学号、姓名、班级、三门课程成绩和总成绩（学号等数据类型的要求同前），用函数实现三个学生信息的录入和按照学生三门课程总成绩排序。在主函数中调用这两个函数，按照学生总成绩从小到大输出各项信息。

程序运行结果如下：

1001

11

zhang

99.5

88.5

89.5

277.5

1002

22

li

77.9

56.5

87.5

221.9

1003

11

wang

92.5

99.0

60.5

252.0

（回车后确认后输出以下结果）

1002,22,li,77.9,56.5,87.5,221.9

1003,11,wang,92.5,99.0,60.5,252.0  

1001,11,zhang,99.5,88.5,89.5,277.5

（注意：带下划线部分为输入）

*/
#include<stdio.h>
#include <string.h>
struct Student
{
    int xh;
    int bj;
    char name[30];
    float fs1;
    float fs2;
    float fs3;
    float fs4;
}student[3],temp;
void put()
{
    int i;
    for (i=0;i<3;i++)
    scanf("%d%d%s%f%f%f%f",&student[i].xh,&student[i].bj,student[i].name,&student[i].fs1,&student[i].fs2,&student[i].fs3,&student[i].fs4);
     
}
void sort()
{
    int i,j;
    for (i=0;i<2;i++)
        for (j=i+1;j<3;j++)
    if(student[i].fs4>student[j].fs4)
    {
        temp=student[i];
        student[i]=student[j];
        student[j]=temp;
    }
}
void output()
{
    int i;
    for (i=0;i<3;i++)
    printf("%d,%d,%s,%.1f,%.1f,%.1f,%.1f\n",student[i].xh,student[i].bj,student[i].name,student[i].fs1,student[i].fs2,student[i].fs3,student[i].fs4);
}
int main()
{
    put();
    sort();
    output();
    return 0;
}
关闭窗口