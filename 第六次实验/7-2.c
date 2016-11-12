/*
这将是你在本学期学习完程序设计基础课程后的一次大练兵，希望能用所学的知识和前面积累的程序经验实现一个较为完整的系统，尽量全部使用到函数、数组、指针和结构体。为了体现你的学习成果，请用学号命名你的第一版学籍管理系统，比如 2120502001.cpp ，预祝成功！

为了方便大家调试，下面给出测试用例的输入和输出

输入

1 
1001 
11 
zhang 
99.5 
88.5 
89.5 
yes 
1002 
22 
li 
77.9 
56.5 
87.5 
yes 
1003 
11 
wang 
92.5 
99.0 
60.5 
no 
2 
1002 
no 
3 
1001 
yes 
11 
no 
4 
5 
6

二 输出

1. input 
2.delete 
3.select 
4.order 
5.output 
6.quit 
please input your option 
id class name score1 score2 score3 continue? 
id class name score1 score2 score3 continue? 
id class name score1 score2 score3 continue? 
1.input 
2.delete 
3.select 
4.order 
5.output 
6.quit 
please input your option 
1001,11,zhang,99.5,88.5,89.5,277.5 
1003,11,wang,92.5,99.0,60.5,252.0 
continue? 
1.input 
2.delete 
3.select 
4.order 
5.output 
6.quit 
please input your option 
1001,11,zhang,99.5,88.5,89.5,277.5 
continue? 
1001,11,zhang,99.5,88.5,89.5,277.5 
1003,11,wang,92.5,99.0,60.5,252.0 
continue? 
1.input 
2.delete 
3.select 
4.order 
5.output 
6.quit 
please input your option 
1003,11,wang,92.5,99.0,60.5,252.0

1001,11,zhang,99.5,88.5,89.5,277.5 
1.input 
2.delete 
3.select 
4.order 
5.output 
6.quit 
please input your option 
1003,11,wang,92.5,99.0,60.5,252.0

1001,11,zhang,99.5,88.5,89.5,277.5 
1.input 
2.delete 
3.select 
4.order 
5.output 
6.quit 
please input your option

------------------------------------------------------------------------------

要求程序能实现以下基本功能：

1 ．提供基本的菜单选项，能根据不同的选项执行不同操作；

2. 对学生信息进行录入，修改，删除、查询等操作；

3 ．对学生信息进行统计、排序等操作。

程序运行结果如下：

（注意：括号内为程序说明，运行时不显示， 下划线部分为输入部分 。学生信息包括学号、班级、姓名和三门课成绩，数据类型和要求同前，基本的三个学生信息同前。 输入输出全部采用小写和英文标点 。下面是运行结果的示例，运行结果视具体操作而变 ）

（首先输出菜单选项）

1.input

2.delete

3.select

4.order

5.output

6.quit

please input your option

（提示用户选择操作，根据用户的选择执行不同的功能，如果用户选择 1 ，则完成学生信息的录入）

1

id 1001 （输入和输出之间用一个空格）

class 11

name zhang

score1 99.5

score2 88.5

score3 89.5

continue? （询问用户是否继续输入操作）

yes （用户选择继续输入）

id 1002 （输入和输出之间用一个空格）

class 22

name li

score1 77.9

score2 56.5

score3 87.5

continue? （询问用户是否继续输入操作）

yes （用户选择继续输入）

id 1003 （输入和输出之间用一个空格）

class 11

name wang

score1 92.5

score2 99.0

score3 60.5

continue? （询问用户是否继续输入操作）

no （用户不再继续输入后显示主菜单选项，供用户选择其他操作）

1.input

2.delete

3.select

4.order

5.output

6.quit

please input your option

（提示用户选择操作，根据用户的选择执行不同的功能，如果用户选择 2 ，则完成学生信息的删除，要求输入待删除学生的学号或者姓名，如果该学生不存在，则输出原有学生的信息；如果指定删除的学生存在，则删除该学生的信息后，输出其余学生信息；允许用户可以删除多个学生信息，但至少保留一个学生信息）

2

1002 或 li

1001,11,zhang,99.5,88.5,89.5,277.5

1003,11,wang,92.5,99.0,60.5,252.0

continue? （询问用户是否继续输入操作）

no （用户不再继续输入后显示主菜单选项，供用户选择其他操作）

1.input

2.delete

3.select

4.order

5.output

6.quit

please input your option

（提示用户选择操作，根据用户的选择执行不同的功能，如果用户选择 3 ，则完成学生信息的选择，要求输入待选择学生的学号或班级，如果该学生存在，则输出该学生的信息；若学生不存在，则提示用户“ there is no eligible student ”，输出主菜单供用户继续选择；如果有重名的学生或者一个班级有多名同学，则输出全部符合条件的学生信息。）

3

1001

1001,11,zhang,99.5,88.5,89.5,277.5

continue?

yes

11

1001,11,zhang,99.5,88.5,89.5,277.5

1003,11,wang,92.5,99.0,60.5,252.0

continue? （询问用户是否继续输入操作）

no （用户不再继续输入后显示主菜单选项，供用户选择其他操作）

1.input

2.delete

3.select

4.order

5.output

6.quit

please input your option

（提示用户选择操作，根据用户的选择执行不同的功能，如果用户选择 4 ，则完成学生信息的排序，要求实现班级和学生总成绩的双重排序，即 班级按照从小到大，同一班级内部按总成绩由低到高排序 。）

4

1003,11,wang,92.5,99.0,60.5,252.0

1001,11,zhang,99.5,88.5,89.5,277.5

（排序后输出主菜单，允许用户继续选择）

1.input

2.delete

3.select

4.order

5.output

6.quit

please input your option

（提示用户选择操作，根据用户的选择执行不同的功能，如果用户选择 5 ，则输出当前学生的信息。如果之前排序了就输出排序后的结果，否则原样输出。）

5

1003,11,wang,92.5,99.0,60.5,252.0

1001,11,zhang,99.5,88.5,89.5,277.5

（输出主菜单，允许用户继续选择）

1.input

2.delete

3.select

4.order

5.output

6.quit

please input your option

（提示用户选择操作，根据用户的选择执行不同的功能，如果用户选择 6 ，则退出程序）

6 （退出程序）
*/
 
#include <stdio.h>
#include <string.h>
int i,j=0;
struct Student
{
    char xh[20];
    char bj[20];
    char name[20];
    float fs1;
    float fs2;
    float fs3;
    float fs4;
    int shuchu;
}stu[5],temp;
 
void Qh()
{
    stu[j].fs4=stu[j].fs3+stu[j].fs2+stu[j].fs1;
}
void Input()
{
    void Format();
    char xz[5];
    printf("id ");scanf("%s",stu[j].xh);
    printf("class ");scanf("%s",stu[j].bj);
    printf("name ");scanf("%s",stu[j].name);
    printf("score1 ");scanf("%f",&stu[j].fs1);
    printf("score2 ");scanf("%f",&stu[j].fs2);
    printf("score3 ");scanf("%f",&stu[j].fs3);
    Qh();
    printf("continue?\n");scanf("%s",xz);
    if (strcmp(xz,"yes")==0)
        j++,Input();
    else
        if (strcmp(xz,"no")==0) Format();
    //  else printf("error!");
}
 
void Output()
{
    void Format();
    for (i=0;strlen(stu[i].xh);i++)
        if(stu[i].shuchu==1)
            printf("%s,%s,%s,%.1f,%.1f,%.1f,%.1f\n",stu[i].xh,stu[i].bj,stu[i].name,stu[i].fs1,stu[i].fs2,stu[i].fs3,stu[i].fs4);
}
 
void Delete()
{
    void Format();
    char p[20],xz[5];
    scanf("%s",p);
        for (i=0;stu[i].fs1;i++)
        {
            if(strlen(stu[2].xh))
            {
                if(strcmp(p,stu[i].xh)==0)
                    stu[i].shuchu=0;
            }
        }
        for (i=0;stu[i].fs1;i++)
        {
            for (i=0;strlen(stu[i].xh);i++)
            {
                if(strcmp(p,stu[i].name)==0)
                    stu[i].shuchu=0;
            }
        }
    Output();
    printf("continue?\n");scanf("%s",xz);
    if (strcmp(xz,"yes")==0)
        Delete();
    else
        if (strcmp(xz,"no")==0) Format();
        else printf("error!\a"),Format();
}
 
void Select()
{
    void Format();
    char p[20],xz[5];
    int s=0;
    scanf("%s",p);
    for (i=0;strlen(stu[i].xh);i++)
    {
        if(strcmp(p,stu[i].xh)==0)
        {
            printf("%s,%s,%s,%.1f,%.1f,%.1f,%.1f\n",stu[i].xh,stu[i].bj,stu[i].name,stu[i].fs1,stu[i].fs2,stu[i].fs3,stu[i].fs4);
            s++;
        }
        if(strcmp(p,stu[i].bj)==0)
        {
            printf("%s,%s,%s,%.1f,%.1f,%.1f,%.1f\n",stu[i].xh,stu[i].bj,stu[i].name,stu[i].fs1,stu[i].fs2,stu[i].fs3,stu[i].fs4);
            s++;
        }
    }
    if (s==0)
    {
        printf("there is no eligible student");
        Format();
    }
    printf("continue?\n");scanf("%s",xz);
    if (strcmp(xz,"yes")==0)
        Select();
    else
        if (strcmp(xz,"no")==0) Format();
//      else printf("error!\a"),Format();
}
 
void Order()
{
    void Format();
    for (i=0;strlen(stu[i+1].xh);i++)
    {
        if(strcmp(stu[i].bj,stu[i+1].bj)<0)
            {
                temp=stu[i];
                stu[i]=stu[i+1];
                stu[i+1]=temp;
            }
    }
    for (i=0;strlen(stu[i+1].xh);i++)
    {
        if(strcmp(stu[i].bj,stu[i].bj)==0)
            if(stu[i].fs4>stu[i+1].fs4)
            {
                temp=stu[i];
                stu[i]=stu[i+1];
                stu[i+1]=temp;
            }
    }
    Output();
    Format();
}
 
void Quit()
{
}

void Format()
{
    int zl;
    printf("1.input\n2.delete\n3.select\n4.order\n5.output\n6.quit\nplease input your option\n");
    scanf("%d",&zl);
    switch (zl)
    {
    case 1:Input();break;
    case 2:Delete();break;
    case 3:Select();break;
    case 4:Order();break;
    case 5:Output(),Format();break;
    case 6:Quit();break;
    }
}

void dy()
{
    for (i=0;i<5;i++)
    {
        stu[i].fs1=0.0;
        stu[i].fs2=0.0;
        stu[i].fs3=0.0;
        stu[i].fs4=0.0;
        stu[i].shuchu=1;
    }
}
int main()
{
//  freopen("a.in","r",stdin);
//  freopen("a.out","w",stdout);
    dy();
    Format();
    return 0;
     
}