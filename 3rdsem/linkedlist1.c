#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data; // for storing the data

    // int data[10];//array of int

    struct node *a; // for the pointer variable, whoch will point to the next variable
};
typedef struct node *NODE;

void travel(struct node *p)
{

    while (p != NULL)
    {
        printf("elements are : %d \n", p->data);
        p = p->a;
    }
}

NODE insert_front (NODE first)
{
    NODE temp=(NODE)malloc(sizeof(struct node));
    int ele;
    scanf("%d",&ele);
    //printf("%d",ele);

    temp->data=ele;
    temp->a=first;

    return temp;

}

NODE insert_betw(NODE first,int index,int data )
{
   NODE ptr=(NODE)malloc(sizeof(struct node));

    NODE p = first;
    int i=0;
    while(i!= index-1){
        p=p->a;
        i++;
    }

    ptr->data=data;

    ptr->a=p->a;
    p->a=ptr;
}
NODE insert_End(NODE first,int data){
    NODE ptr=(NODE)malloc(sizeof(struct node));
    ptr->data = data;
    NODE p = first;
    while(p->a!=NULL){
        p=p->a;
    }

    p->a=ptr;
    ptr->a=NULL;

    return(first);
}

int main()
{
    NODE first;

    NODE second;

    NODE third;

    NODE fourth;

    first  = (NODE)malloc(sizeof(struct node));
    second = (NODE)malloc(sizeof(struct node));
    third  = (NODE)malloc(sizeof(struct node));
    fourth  = (NODE)malloc(sizeof(struct node));
    

    first->data = 69;
    first->a = second;


    second->data=420;
    second->a=third;


    third->data=512;
    third->a=fourth;

    fourth->data=66;
    fourth->a=NULL;

    printf("before\n");
    travel(first);
    

   // first=insert_front(first);

   //insert_betw(first,3,36);

   printf("after\n");

    first=insert_End(first,88);

    travel(first);

}