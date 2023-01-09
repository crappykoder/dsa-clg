#define MAX_ITEMS 10

typedef struct
{
    int items[MAX_ITEMS];
    int top;
} stack;

void push(stack *s, int item)
{
    if (s->top == MAX_ITEMS - 1)
    {

        return;
    }
    s->items[++s->top] = item;
}

int pop(stack *s)
{
    if (s->top == -1)
    {
        return -1;
    }
    return s->items[s->top--];
}
