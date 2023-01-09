#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *llink;
    struct node *rlink;
};

typedef struct node *NODE;

NODE insertRear(NODE first)
{
    NODE temp, cur;
    int ele;

    temp = (NODE)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory cant be allocated");
        return first;
    }

    printf("Enter an element");
    scanf("%d", &ele);
    temp->info = ele;
    temp->rlink = NULL;
    temp->llink = NULL;

    if (first == NULL)
    {
        first = temp;
        return first;
    }
    else
    {
        cur = first;
        while (cur->rlink != NULL)
            cur = cur->rlink;

        temp->llink = cur;
        cur->rlink = temp;
    }
    return first;
}

NODE insertFront(NODE first)
{
    NODE temp, cur;
    int ele;

    temp = (NODE)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory cant be allocated");
        return first;
    }

    printf("Enter an element");
    scanf("%d", &ele);
    temp->info = ele;
    temp->rlink = NULL;
    temp->llink = NULL;

    if (first == NULL)
    {
        first = temp;
        return first;
    }
    cur = first;
    temp->rlink = cur;
    cur->llink = temp;
    first = temp;
    return first;
}

void display(NODE first)
{
    NODE cur;
    if (first == NULL)
        printf("DLL is empty");
    else
    {
        cur = first;
        printf("Elements are \t");
        while (cur != NULL)
        {
            printf("%d", cur->info);
            cur = cur->rlink;
        }
    }
}

void main()
{
    NODE first = NULL;
    int c;
    while (1)
    {
        printf("\nDLL\n");
        printf("1.InsertRear\n");
        printf("2.InsertFront\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            first = insertRear(first);
            break;
        case 2:
            first = insertFront(first);
            break;
        case 3:
            display(first);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
}