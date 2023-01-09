#include<stdio.h>
int main(){ 
    int a,x;
    printf("enter an integer : ");
    scanf("%d",&a);
    x=1;
    while(x<=10){
        printf("%d*%d=%d\n",a,x,a*x);
        ++x;
    }
    return 0;
}