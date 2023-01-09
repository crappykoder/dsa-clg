#include<stdio.h>
int main(){
    int a,fac=1,x=1;
    printf("enter the number :");
    scanf("%d",&a);
    for(x=1;x<=a;x++)
    fac*=x;
    printf("your factorial is :%d",fac);
    return 0;
}