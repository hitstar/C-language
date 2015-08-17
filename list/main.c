#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
}node,*list;

void create(list * newlist, int n){
    node *p;
    int i;
    (*newlist) = (list)malloc(sizeof(node)) ;
    (*newlist)->next = NULL;
    for(i=0; i < n; i++){
        p = (list)malloc(sizeof(node));
        p->next = (*newlist)->next;
        (*newlist)->next = p;
        p->data = rand();
    }
}
void printLink(list newlist)
{
    list p;
    p = newlist;
    while(p->next)
    {
        printf("%d\n",p->data);
        p = p->next;
    }
}
//在n位置插入m值
void insert(list *newlist,int n, int newNode)
{
    int i = 1;
    list p = (*newlist), m;

    while(i < n){
        p = p->next;
        i++;
    }

    m = (list)malloc(sizeof(node));
    m->data = newNode;
    m->next = p->next;
    p->next = m;
}

//删除n位置的值
void deletenode(list * newlist, int n)
{
        int i = 1;
        list p,q;//q为要删除的节点，p为它的前一个节点
        p = *newlist;
        while(i < n-1)
        {
            p = p->next;
            i++;
        }
        q = p->next;
        p->next = q->next;
        free(q);
}

int main()
{
    list  targetLink;
    int linkCount = 8;
    create(&targetLink, linkCount);
    printLink(targetLink);

    printf("\n");

    insert(&targetLink,2,3);
    printLink(targetLink);

    printf("\n");

    deletenode(&targetLink,2);
    printLink(targetLink);


    return 0;
}
