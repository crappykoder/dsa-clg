#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *llink;
    struct node *rlink;
    struct node *next;
};
typedef struct node *NODE;
NODE first = NULL;

void insert_rear()
{

    NODE temp, ptr;

    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nmemory hai hi ni beti\n");
    }
    printf("\n batao beti kya daalna hai \n");
    scanf("%d", &temp->data);
    temp->llink = NULL;
    temp->rlink = NULL;

    if (first == NULL)
    {

        first = temp;
    }

    else
    {
        ptr = first;
        while (ptr->rlink != NULL)
        {
            ptr = ptr->rlink;
        }
        ptr->rlink = temp;
        temp->llink = ptr;
    }
}
void insert_front()
{
    NODE temp;

    temp = (struct node *)malloc(sizeof(struct node));

    if (temp == NULL)
    {
        printf("no memory\n");
    }

    printf("enter the element to be inserted\n");
    scanf("%d", &temp->data);
    temp->rlink = NULL;
    temp->llink = NULL;

    if (first == NULL)
    {
        first = temp;
    }

    else
    {
        temp->rlink = first;
        first->llink = temp;
        first = temp;
    }
}

void diaplay()
{
    NODE ptr;

    if (first == NULL)
    {
        printf("the list is empty");
    }

    else
    {
        first = ptr;

        while (ptr != NULL)
        {
            printf("\nthe elements are : %d\t\n", ptr->data);
            ptr = ptr->rlink;
        }
    }
}

void insert_after()
{
    NODE temp;
    NODE cur;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("no memory");
    }

    printf("enter the elemnt to be entered ");
    scanf("%d", &temp->data);

    if (first == NULL)
    {
        printf("list is empty");
    }

    if (temp->data == first && first->rlink == NULL) // when there is only first node and that is selected
    {

        first->rlink = temp;
        temp->llink = first;
    }

    cur = first;

    if (temp->data == first) // when the frist node is selcted but its not the only node
    {
        temp->rlink = cur->rlink;
        temp->llink = cur;
        cur->rlink->llink = temp;
        cur->rlink = temp;
    }
    else
    {
        while(cur!=NULL && )

    }
}
void main()
{
    int c;
    while (1)
    {
        printf("\n1. insert rear ");
        printf("\n2. display");
        printf("\n3. insert front");
        printf("\nenetr the choice you wnat to enter ");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            insert_rear();
            break;

        case 2:
            diaplay();
            break;

        case 3:
            insert_front();
            break;

        default:
            printf("maa chudao bhai");
        }
    }
}
