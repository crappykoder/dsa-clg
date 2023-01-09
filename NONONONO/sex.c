#include<stdio.h>
int fib(int n);

int main(){
    int n;
    printf("enter the number of terms :");

    scanf("%d",&n);

    printf("the fibonaci is : ");

    printf("0,");

    for(int i=1;i<=n;i++){

        printf("%d,",fib(i));
        
    }

}

int fib(int n){
    
    if(n==0){
        return (0);
    }
    if(n==1){
        return (1);
    }
    return ( fib(n-1) + fib(n-2));
}


