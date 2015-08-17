#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 10
#define ERROR 0
#define OK 1
typedef struct
{
    int data[MAXSIZE];
    int top;
}sqStack;

int push(sqStack *s, int e)
{
    if(s->top == MAXSIZE-1)
        return ERROR;

    s->top++;
    s->data[s->top] = e;
    return OK;
}

int pop(sqStack *s, int *e)
{
    if(s->top == -1)
    {
        return ERROR;
    }
    *e = s->data[s->top];
    s->top--;
    return OK;
}
void prints(sqStack s)
{

}

int main()
{
    sqStack s;
    int record;
    push(&s, 3);
    push(&s, 13);
    push(&s, 33);
    pop(&s, &record);

    printf("%d",s.data[s.top]);
    printf("record = %d",record);
    return 0;
}
