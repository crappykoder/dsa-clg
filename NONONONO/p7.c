#include<stdio.h>
void main()
{
    float P,R,T,SI;
    printf("enter the principle amount : ");
    scanf("%f",&P);
    printf("enter the rate of interest :");
    scanf("%f",&R);
    printf("enter the time period :");
    scanf("%f",&T);
    SI=P*R*T/100;
    printf("your SI is %f", SI); 
}