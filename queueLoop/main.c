#include <stdio.h>
#include <stdlib.h>

typedef int qElemtype;
typedef struct
{
    int data[20];
    int front;
    int rear;
}squeue;

int initQueue(squeue *s)
{
    s->front = 0;
    s->rear = 0;

    return 1;
}

int queueLength(squeue s)
{
    return (s.rear - s.front + 20) % 20;
}

int insertQueue(squeue *s, qElemtype e)
{
    if((s->rear+1)+20 == s->front)
    {
        return 0;
    }
    s->data[s->rear] = e;
    s->rear = (s->rear+1) % 20;
    return 1;
}

int dequeue(squeue *s,int *e)
{
    if(s->front == s->rear)
    {
        return 0;
    }
    *e = s->data[s->front];
    s->front = (s->front + 1)%20;
}

int main()
{
    squeue target;
    int record;
    initQueue(&target);
    insertQueue(&target,1);
    insertQueue(&target,2);
    insertQueue(&target,3);
    dequeue(&target,&record);
    printf("%d\n",target.data[1]);
    printf("record = %d", record);
    return 0;
}
