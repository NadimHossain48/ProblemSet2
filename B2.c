#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
int size(node *x);

struct Node
{

    int value;
    node *next;

};
node *head =NULL;

int main()
{
    node a,b,c,d,e;
    head=&a;
    a.value=1;
    a.next=&b;
    b.value =1;
    b.next=&c;
    c.value=2;
    c.next=&d;
    d.value=2;
    d.next=&e;
    e.value=3;
    e.next=NULL;


    size(head);

    return 0;


}
int size(node *x)
{
    int count=0;

    while(x!=NULL)
    {
        count++;

        x=x->next;
    }
    printf("The size is : %d\n",count);
}
void front(node *x)
{
    if(x==head)
    {
        printf("%d\n",x->value);
    }
}
