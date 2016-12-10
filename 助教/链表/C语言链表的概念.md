#C语言链表的概念

链表中最简单的一种是单向链表，它包含两个域，一个信息域和一个指针域。这个链接指向列表中的下一个节点，而最后一个节点则指向一个空值。

[![Singly-linked-list.svg](http://upload.wikimedia.org/wikipedia/commons/thumb/6/6d/Singly-linked-list.svg/408px-Singly-linked-list.svg.png)](http://zh.wikipedia.org/wiki/File:Singly-linked-list.svg)
*一个单向链表包含两个值: 当前节点的值和一个指向下一个节点的链接*

一个单向链表的节点被分成两个部分。第一个部分保存或者显示关于节点的信息，第二个部分存储下一个节点的地址。单向链表只可向一个方向遍历。

链表最基本的结构是在每个节点保存数据和到下一个节点的地址，在最后一个节点保存一个特殊的结束标记，另外在一个固定的位置保存指向第一个节点的指针，有的时候也会同时储存指向最后一个节点的指针。一般查找一个节点的时候需要从第一个节点开始每次访问下一个节点，一直访问到需要的位置。但是也可以提前把一个节点的位置另外保存起来，然后直接访问。当然如果只是访问数据就没必要了，不如在链表上储存指向实际数据的指针。这样一般是为了访问链表中的下一个或者前一个（需要储存反向的指针，见下面的双向链表）节点。

相对于下面的双向链表，这种普通的，每个节点只有一个指针的链表也叫**单向链表**，或者**单链表**，通常用在每次都只会按顺序遍历这个链表的时候（例如图的邻接表，通常都是按固定顺序访问的）。

例1，建立链表保存学生的信息，并且可以进行，插入，删除操作，并将学生的信息输出
```
#include <stdio.h>  
#include<malloc.h>  
#define LEN sizeof(struct student )  
#define NULL 0  
struct student   
{  
    int num;  
    float score;  
    struct student *next;  
};  
int n;  
//建立链表  
struct student *create(void)  
{  
    struct student *head, *p1,*p2;  
    n=0;  
    p1=p2=(struct student *)malloc(LEN);  
    scanf("%d %f",&p1->next,&p1->score);  
    head=NULL;  
    while(p1->num!=0)  
    {  
        n=n+1;  
        if(n==1) head=p1;    //p1是指向新开辟的结点  
        else p2->next=p1;  
        p2=p1;    //p2指向链表中的最后一个基点  
        p1=(struct student *)malloc(LEN); //开辟新的结点，并且使p1指向他  
        scanf("%d %f",&p1->num,&p1->score);  
    }  
    p2->next=NULL;  
    return (head);  
}  
//删除结点  
struct student *del(struct student  *head,long num)  
{  
    struct student *p1,*p2;  

    if(head==NULL)   {printf("\nlist null!\n");goto end;}  
    p1=head;  
    while(num!=p1->num && p1->next!=NULL)   //p1指向不是所要找的结点，并且后面还有结点  
    {  
        p2=p1;  
        p1=p1->next;      //p1后移一个及诶单  
    }       //p1后移一个结点  
    if(num==p1->num)     //找到了  
    {  
        if(p1==head)  head=p1->next;    //若p1指向的是首结点，把第二个结点的地址head  
      
        else p2->next=p1->next;      //or 将下一个结点的地址赋给前一个结点地址  
        printf("delete:%d\n",num);  
        n=n-1;  
        free(p1);  
    }  
    else  printf("%dnot been found !\n",num);  
    end:  
    return(head);  


}  
//插入学生信息  
 struct student *insert(struct student *head ,struct student *stud)  
{  
    struct student *p0,*p1,*p2;  
    p1=head;         //使p1指向第一个结点  
    p0=stud;        //p0指向要插入的结点  
    if(head==NULL)     //原来的链表是空表  
    {  
        head=p0,p0->next=NULL; //使p0指向的结点作为头结点  
    }  
    else  
    {  
        while ((p1->num>p1->num)&&(p1->next!=NULL))  
        {  
            p2=p1;     //使p2指向刚才p1指向的及诶按  
            p1=p1->next;    //p1后移一个结点  
        }  
        if(p0->num<=p1->num)  
        {  
            if(head==p1)  head=p0;   //插到原来第一个结点之前  
            else p2->next=p0;        //插到p2指向的结点之后  
            p0->next=p1;  
        }  
        else  
        {  
            p1->next=p0;p0->next=NULL;    //插到最后的结点之后  
        }  
    }  
    n=n+1;                            //结点数加1  
    return (head);  
}  
//输出链表  
 void print(struct student *head)  
{  
    struct student *p;  
    p=head;  
    if(head!=NULL)  
        do  
    {  
        printf("%d %f\n",p->num,p->score);  
        p=p->next;  
      
    }  
    while(p!=NULL);  
}  
//main函数  
 void main()  
{  
    struct student *head,stu;  
    long del_num;  
    printf("Input records:\n");  
    head=create();        //建立链表，返回头指针  
    print(head);          //输出全部结点  
      
    printf("\nInput the deleted number:\n");  
    scanf("%ld",&del_num);       //输入要删除的学号  
    while(del_num!=0)  
    {  
    head=del(head,del_num);      //删除后链表的头指针  
    print(head);                       //输出全部结点  
    printf("Input the deleted number:\n");  
    scanf("%ld",&del_num);   
    }  
      
    printf("\nInput the inserted record:\n");  
    stu=(struct student *)malloc(LEN);  
    scanf("%d %f",&stu->num,&stu->score);     //输入要插入的结点  
    {  
    head=insert(head,&stu);                 //插入一个结点，返回头指针的  
    print(head);                                     //输出全部结点  
    printf("\nInput the inserted record:\n");  
    stu=(struct student *)malloc(LEN);  
    scanf("%d %f",&stu->num,&stu->score);  
    }  
}  
```