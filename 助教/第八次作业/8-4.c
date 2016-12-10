/*
 设计一个队列，将整数3，4，5进入队列，打印该队列，
 将队列的前2个元素出队，随后将11和12入队，再次打印队列。
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100

typedef struct
{
    int numbers[N];
    int head;
    int tail;
    int len;
}Queue;

//初始化
void init_queue(Queue *queue)
{
    queue->head = 0;
    queue->tail = 0;
    queue->len = 0;
}

//出列， 先进先出
int dequeue(Queue *queue)
{
    int number = 0; //返回值
    if(queue->head != queue->tail)
    {
        number = queue->numbers[queue->head];
        queue->head ++ ;
        queue->len --;
    }
    return number;
}

//入队， 先进先出
int inqueue(Queue *queue, int number)
{
    int status = 1;//成功
    if(queue->tail == N)
    {
        status = 0;
    }
    else
    {
        queue->numbers[queue->tail++] = number;
        queue->len ++;
    }
    return status;
}


//打印
void printQueue(Queue *queue)
{
    int i ;
    for(i = queue->head; i < queue->tail; i++)
    {
        printf("%d ", queue->numbers[i]);
    }
    printf("\n");
}

int main()
{
    Queue queue;
    init_queue(&queue);
    int i ;
    //入队
    for(i = 3; i <= 5; i++)
    {
        inqueue(&queue, i);
    }
    printQueue(&queue);
    
    //出队
    for(i = 0; i < 2; i++)
        dequeue(&queue);
    printQueue(&queue);

    
    //入队
    for(i = 11; i <= 12; i++)
    {
        inqueue(&queue, i);
    }
    printQueue(&queue);
    return 0;
}


