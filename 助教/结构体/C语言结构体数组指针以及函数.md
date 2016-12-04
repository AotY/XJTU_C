# C语言结构体数组指针以及函数

## 结构体数组指针

指针变量可以指向一个结构体数组，这时指针变量的值是整个数组的首地址。

设` ps` 为指向结构体数组的指针变量，则 ps 也指向该结构体数组的第0个元素，`ps+1`指向第一个元素，`ps+i`则指向第`i`元素，这与普通数组的情况是一样的。

【示例】用指针变量输出结构体数组。
```
#include <stdio.h>
struct stu{
    int num;
    char *name;
    char sex;
    float score;
} *ps, boy[5]={
    {101, "Zhou ping", 'M', 45},
    {102, "Zhang ping", 'M', 62.5},
    {103, "Liou fang", 'F', 92.5},
    {104, "Cheng ling", 'F', 87},
    {105, "Wang ming", 'M', 58}
};
int main(){
    printf("No\tName\t\tSex\tScore\t\n");
    for(ps = boy; ps < boy + 5; ps++)
        printf("%d\t%s\t%c\t%f\t\n", ps->num, ps->name, ps->sex, ps->score);
    return 0;
}
```
运行结果：
```
No      Name            Sex     Score
101     Zhou ping       M       45.000000
102     Zhang ping      M       62.500000
103     Liou fang       F       92.500000
104     Cheng ling      F       87.000000
105     Wang ming       M       58.000000
```

**应该注意的是，一个结构体指针变量虽然可以用来访问结构体变量或结构体数组元素的成员，但是，不能使它指向一个成员。也就是说不允许取一个成员的地址来赋予它**。所以，下面的赋值是错误的：

`ps=&boy[1].sex;`

而只能是：

`ps=boy;  // 赋予数组首地址`

或者是：

`ps=&boy[0];  //赋予0号元素首地址`

## 结构体指针变量作函数参数

**结构体变量代表的是结构体本身这个整体，而不是首地址，作为函数参数时传递的整个结构体，也就是所有成员。**如果结构体成员较多，尤其是成员为数组时，传送的时间和空间开销会很大，严重降低程序的效率。**所以最好的办法就是使用指针，也就是用指针变量作为函数参数。这时由实参传向形参的只是地址，非常快速。**

【示例】计算一组学生的平均成绩和不及格人数。

```
#include <stdio.h>
#define STU struct stu
STU{
    int num;
    char *name;
    char sex;
    float score;
}boy[5]={
    {101,"Li ping",'M',45},
    {102,"Zhang ping",'M',62.5},
    {103,"He fang",'F',92.5},
    {104,"Cheng ling",'F',87},
    {105,"Wang ming",'M',58}
};
void average(STU *ps);
int main(){
    STU *ps = boy;
    average(ps);
    return 0;
}
void average(struct stu *ps){
    int flunk=0, i;
    float sum=0;
    for(i=0; i<5; i++,ps++){
        sum += ps->score;
        if(ps->score < 60) flunk += 1;
    }
    printf("sum=%.2f, average=%.2f, flunk=%d\n", sum, sum/5, flunk);
}
```
运行结果：

```
sum=345.00, average=69.00, flunk=2
```