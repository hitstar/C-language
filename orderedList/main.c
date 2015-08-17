#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 20
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int Elemtype;

typedef struct{
    Elemtype data[MAXSIZE];  //设置数组
    int length;  //当前数组长度
}SqList;

int getItem(SqList l, int i, Elemtype *e)
{
    if(l.length == 0 || i > l.length)
        return ERROR;
    *e = l.data[i-1];
    return OK;
}

int insert(SqList *l, int pos, Elemtype e)
{
    int i;
    if(pos > l->length + 1 || pos < 1 || l->length == MAXSIZE)
        return ERROR;

    if(pos <= l->length)
    {
        for(i = l->length-1; i >= pos-1; i-- )
        {
            (*l).data[i+1] = (*l).data[i];
        }
    }
    l->data[pos-1] = e;
    l->length++;
    return OK;
}

int listdelete(SqList *l, int i, Elemtype *e)
{
    int k;
    if(l->length == 0)
    {
        return ERROR;
    }
    if(i < 1 || i > l->length)
    {
        return ERROR;
    }
    *e = l->data[i-1];
    for(k=i; k < l->length; k++)
    {
        l->data[i-1] = l->data[i];
    }
    l->length--;
    return OK;
}
void printlist(SqList l)
{
    int i;
    for (i=0; i < l.length; i++)
    {
        printf("%d\n",l.data[i]);
    }
}

int main()
{
    int i=0;

    int record;
    SqList target;
    target.length = 4;
    for(i=0; i <  MAXSIZE; i++)
    {
         target.data[i] = i + 1;
    }

//    target.data[] = {11,22,32,1};
    printlist(target);

    getItem(target, 2, &record);
    printf("\n%d\n\n",record);

    insert(&target, 2, 100);
    printlist(target);

    listdelete(&target, 4, &record);

    printf("\n%d\n\n",record);

    return 0;
}



