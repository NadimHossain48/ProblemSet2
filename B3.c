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
    node a,b,c,e,f;
    head=&a;
    a.value= 1;
    a.next=&b;
    b.value =3;
    b.next=&e;
    e.value=5;
    e.next=&f;
    f.value=6;
    f.next=&c;
    c.value=9;
    c.next=NULL;


    printf("The Front Value Is : ", head);
    front(head);


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

