# C语言结构体数组

所谓结构体数组，是指数组中的每个元素都是一个结构体。

在实际应用中，结构体数组常被用来表示一个拥有相同数据结构的群体，比如一个班的学生、一个学校的班级等。

定义结构体数组和定义结构体变量的方式类似，请看下面的例子：
```
struct stu{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组 
    float score;  //成绩
}class[5];
```
表示一个班级有5个学生。

结构体数组在定义的同时也可以初始化，例如：
```
struct stu{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组 
    float score;  //成绩
}class[5] = {
    {"Li ping", 5, 18, 'C', 145.0},
    {"Zhang ping", 4, 19, 'A', 130.5},
    {"He fang", 1, 18, 'A', 148.5},
    {"Cheng ling", 2, 17, 'F', 139.0},
    {"Wang ming", 3, 17, 'B', 144.5}
};
```
当对数组中全部元素赋值时，也可不给出数组长度，例如：
```
struct stu{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组 
    float score;  //成绩
}class[] = {
    {"Li ping", 5, 18, 'C', 145.0},
    {"Zhang ping", 4, 19, 'A', 130.5},
    {"He fang", 1, 18, 'A', 148.5},
    {"Cheng ling", 2, 17, 'F', 139.0},
    {"Wang ming", 3, 17, 'B', 144.5}
};
```
结构体数组的使用也很简单，例如，获取 Wang ming 的成绩：
`class[4].score;`
修改 Li ping 的学习小组：
`class[0].group = 'B';`

【示例】计算全班学生的总成绩、平均成绩和以及 140 分以下的人数。

```
#include <stdio.h>
struct{
    char *name;  //姓名
    int num;  //学号
    int age;  //年龄
    char group;  //所在小组
    float score;  //成绩
}class[] = {
    {"Li ping", 5, 18, 'C', 145.0},
    {"Zhang ping", 4, 19, 'A', 130.5},
    {"He fang", 1, 18, 'A', 148.5},
    {"Cheng ling", 2, 17, 'F', 139.0},
    {"Wang ming", 3, 17, 'B', 144.5}
};
int main(){
    int i, num_140 = 0;
    float average, sum = 0;
    for(i=0; i<5; i++){
        sum += class[i].score;
        if(class[i].score < 140) num_140++;
    }
    printf("sum=%.2f\naverage=%.2f\nnum_140=%d\n", sum, sum/5, num_140);
    return 0;
}
```
