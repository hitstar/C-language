#include <stdio.h>
#include <stdlib.h>

typedef struct stackNode
{
    int data;
    struct stackNode *next;
}stackNode, *stackLinkPtr;

typedef struct stackLink
{
    stackLinkPtr top;
    int count;
}stackLink;

int push(stackLink *s, int e)
{
    stackLinkPtr newNode = (stackNode *)malloc(sizeof(stackNode));
    newNode->data = e;
    newNode->next = s->top;
    s->top = newNode;
    s->count++;
    return 1;
}
int pop(stackLink *s, int *e)
{
    stackLinkPtr del = (s->top);
    *e = del->data;
    s->top = del->next;
    s->count--;
    free(del);
    return 1;
}

int main()
{
    stackLink target;
    int record;
    push(&target, 10);
    push(&target, 12);
    push(&target, 13);
    push(&target, 14);
    pop(&target, &record);
    printf("%d",(target.top)->data);
     printf("record = %d",record);
    return 0;
}
