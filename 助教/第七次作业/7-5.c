/*
	
假设电话号码本由人名（字符数组）和一个电话号码（字符数组）共2项组成，
设计一个线性表，存入7个人的号码，提供2个删除函数，可以删除一条记录（根据位置，或者根据人名），
提供插入函数以及其他常用函数。参照课本例8-2完成
*/

/*
	
 假设电话号码本由人名（字符数组）和一个电话号码（字符数组）共2项组成，
 设计一个线性表，存入7个人的号码，提供2个删除函数，可以删除一条记录（根据位置，或者根据人名），
 提供插入函数以及其他常用函数。参照课本例8-2完成
 */

#include <stdio.h>
#include <string.h>
 #define MAX 3 //

int N = 3; // 初始化长度

struct Contacter
{
    char name[10];
    char phoneNumber[11];
};

//通过index删除
int deleteByIndex(struct Contacter *cons, int index)
{
    int flag = 1;
    if(index < 1 && index > N)
    {
        flag = 0;
        return 0;
    }

    index = index - 1;
    int i = 0;
    
    struct Contacter *temp = cons;
    for(i = index; i < N - 1; i++)
    {
        *(temp + i) = *(temp + i + 1);
    }
    N = N - 1; //长度减一
    return flag;
}

//通过name删除
int deleteByName(struct Contacter *cons, char *name)
{
    int flag = 1;
    int i = 0;
    struct Contacter *temp = cons;
    int index = 0;
    while(strcmp(temp->name, name) != 0) // while (strcmp(check,input) != 0)
    {
        index ++;
        temp++;
    }
    
    if(index > N-1)
    {
        flag = 0;
        return 0;
    }

    temp = cons;
    for(i = index; i < N - 1; i++)
    {
        *(temp + i) = *(temp + i + 1);
    }
    N = N - 1; //长度减一
    return flag;
}


//加入新节点，默认最后一位
int insertContacter(struct Contacter *cons, struct Contacter *con) //默认最后一位插入
{
    int flag = 1;
    if(N == MAX)
    {
        flag = 0;
        return 0;
    }
    
    cons[N] = *con;
    
    N = N + 1; //长度加一
    return flag;
}

//加入新节点，指定加入位置
int insertContacterByIndex(struct Contacter *cons, struct Contacter *con, int index)
{
    int flag = 1;
    if(N == MAX || (index < 1 && index > N))
    {
        flag = 0;
        return 0;
    }
    index = index - 1;
    int i;
    struct Contacter *temp = cons;
    for(i = N ; i > index; i--)
    {
        *(temp + i) = *(temp + i - 1);
    }
    cons[index] = *con;
    N = N + 1; //长度加一
    return flag;
}

//根据姓名更新号码
int updateContacterByName(struct Contacter *cons, struct Contacter *con)
{
    int flag = 1;
    
    struct Contacter *temp = cons;
    int index = 0;
    while(strcmp(temp->name, con->name) != 0) // while (strcmp(check,input) != 0)
    {
        index ++;
        temp++;
    }
    
    if(index > N-1)
    {
        flag = 0;
        return 0;
    }
    cons[index] = *(con);
    
    return flag;
    
}

void printContacters(struct Contacter *cons)
{
    int i;
    struct Contacter *temp = cons;
    for(i = 0; i < N; i++)
    {
        printf("姓名：%s    号码：%s\n", temp->name, temp->phoneNumber);
        temp ++;
    }
}

int main()
{
    struct Contacter cons[MAX];
    int i;
    for(i = 0; i < N; i++)
    {
        scanf("%s", cons[i].name);
        scanf("%s", cons[i].phoneNumber);
    }
    printContacters(cons);
//    deleteByIndex(cons, 2);//通过index删除
    char name[] = "leon";
    deleteByName(cons, name);//通过name删除
    printf("----\n");
    printContacters(cons);
    printf("----\n");
    
//    struct Contacter con;
//    strcpy(con.name, "Qing");
//    strcpy(con.phoneNumber, "123456");
//    insertContacter(cons, &con);
//    printf("----\n");
//    printContacters(cons);
    
    struct Contacter con2;
    strcpy(con2.name, "Qing2");
    strcpy(con2.phoneNumber, "123456");
    insertContacterByIndex(cons, &con2, 2);
    printContacters(cons);
   
    printf("----\n");

    struct Contacter con3;
    strcpy(con3.name, "Qing2");
    strcpy(con3.phoneNumber, "1234567");
    updateContacterByName(cons, &con3);
    printContacters(cons);
    
    printf("----\n");
    return 0;
}




/*

leo
123
leon
1234
TAO
12345

*/

