#include <stdio.h>
int main (){
    int n,x,sum=0;
    printf("this is a program to print the summ of odd numbers between 1 to n \n");
    printf("enter the value of n : ");
    scanf("%d",&n);
    for(x=1;x<=n;x+=2){
        sum+=x;
    }
    printf("the required sum is :%d",sum);
    return 0;
}
