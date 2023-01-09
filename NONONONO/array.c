#include<stdio.h>
#include<stdlib.h>
int gru(int nos[], int n)
{
    int i;
    int max = 0, max2 = 0;
    for (i = 0; i<n; i++)
    {
        if (nos[i] > max)
        {
            max2 = max;
            max = nos[i];
        }
        else if (nos[i] > max2)
        {
            max2 = nos[i];
        }
    }
    printf("First largest number is %d\n", max);
    printf("Second largest number is %d\n", max2);

    return 0;
}
int main()
{
    int nos[69];
    int i = 0;
    int n;
    printf("enter the size of the array :");
    scanf("%d", &n);
    for (i = 0; i < n; ++i)
    {
        int k;
        printf("\n enter the nmber: ");
        scanf("%d", &k);
        nos[i] = k;
    }
    gru(nos, n);
    return 0;
}