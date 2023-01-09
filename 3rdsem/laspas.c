#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *a;
};
typedef struct node *NODE;
NODE first = NULL;

void create()
{
    NODE temp, ptr;

    temp = (NODE)malloc(sizeof(struct node));

    printf("\n enter the value of the element ");

    scanf("%d", &temp->data);

    temp->a = NULL;

    if (first == NULL)
    {
        first = temp;
    }

    else
    {
        ptr = first;
        while (ptr->a != NULL)
        {
            ptr = ptr->a;
        }
        ptr->a = temp;
    }
}
NODE display(NODE first)
{
    NODE ptr;
    if (first == NULL)
    {
        printf("\n linked list empty");
        return first;
    }

    else
    {
        ptr = first;

        printf(" \nthe elements are : \t");
        while (ptr != NULL)
        {
            printf("%d\n", ptr->data);
            ptr = ptr->a;
        }
    }
}

NODE insert_front(NODE first)
{
    NODE temp = (NODE)malloc(sizeof(struct node));
    int ele;
    if (temp == NULL){
        printf("unable to allocate");
        return first;
    }
    printf("enter the element to be entered ");
    scanf("%d", &ele);

    temp->data = ele;
    temp->a = NULL;

    if (first == NULL)
        temp = first;
    else
    {
        temp->a = first;
        first=temp;
    }

    return first;
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n1. create");
        printf("\n2. display");
        printf("\n3. insert front");

        printf("\nenetr your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display(first);
            break;
        case 3:
            insert_front(first);
            break;

        default:
            printf("\n oh no ");
            break;
        }
    }
    return 0;
}
