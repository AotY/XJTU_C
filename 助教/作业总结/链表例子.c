#include <stdio.h>
#include <stdlib.h>

typedef struct List
{
    int value;
    List *next;
}List;


//创建链表，返回头节点的指针, 头节点不存放值
List *createList()
{
    List *head = (List *)malloc(sizeof(List));
    head -> next = NULL;
    
    return head;
}

//打印链表
void printList(List *head)
{
    List *temp = head->next; //为了避免改变head指针
    
    while(temp != NULL)
    {
        int value = temp -> value;
        printf("%d ", value);
        temp = temp -> next;
    }
    printf("\n");
}

//增加节点 ，value为值, head为指向头结点的指针, 默认插入到最后一位
void addNode(List *head, int value)
{
    
    //找到节点的next元素指向NULL的节点
    List *temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    
    //插入
    List *node = (List *)malloc(sizeof(List)); //分配一个新节点
    node->value = value;
    node->next = temp->next;
    temp->next = node;
    
}

//修改一个节点里面value的值
int updateNode(List *head, int oldValue, int newValue)
{
    int status = 1; //默认修改成功
    
    //找到值为oldValue的节点
    List *temp = head->next;
    
    while (temp->value != oldValue) {
        temp = temp->next;
    }
    
    if(temp == NULL)
    {
        status = 0;
        return status; //没有找到oldValue
    }
    
    
    temp->value = newValue; //修改值
    
    return status;
}

//删除值为value的节点
int deleteNode(List *head, int value)
{
    int status = 1; //默认删除成功
    
    //找到值为Value节点 的前一个节点
    
    List *temp = head->next;
    while (temp->next != NULL && temp->next->value != value) {
        temp = temp->next;
    }
    
    if(temp == NULL)
    {
        status = 0;
        return status; //没有找到value
    }
    
    
    //删除节点
    temp->next = temp->next->next;
    free(temp->next);
    
    return status;

}

int main()
{
    
    List *head = createList(); //返回头节点指针
    //增加三个节点
    addNode(head, 1);
    addNode(head, 2);
    addNode(head, 3);
    addNode(head, 4);
    addNode(head, 5);
    addNode(head, 6);
    
    //打印
    printList(head);
    
    //修改节点的值
    updateNode(head, 6, 7);
    
    //打印
    printList(head);
    
    //删除节点
    deleteNode(head, 5);
    
    //打印
    printList(head);


    /*
    输出为：
    1 2 3 4 5 6 
    1 2 3 4 5 7 
    1 2 3 4 7

    */
    return 0;
}


