#include<stdio.h>
int fac(int n);

int main (){
    int n,duf;
    printf("enter the number : ");
    scanf("%d",&n);
    if(n<0){
        printf("factorial ni hopaega sorry");
    }
    else{
     duf=fac(n);
     printf("the factorial of the given number is :%d",duf);

    }

}

int fac(int n){
    int res;
    if(n==0){
        return(1);
    }
    else{
        res=n*fac(n-1);
    }
    return res;
}