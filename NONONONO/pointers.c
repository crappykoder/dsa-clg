#include <stdio.h>

int swap(int*,int*);

int main(){
    int a,b;
    printf("enter the first nunber :");
    scanf("%d",&a);
    printf("a=%d",a);


    printf("\nenetr the second number ");
    scanf("%d",&b);
    printf("b=%d",b);
    swap(&a,&b);
    printf("\nthe swapped number is : a= %d,b=%d",a,b);

}

int swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
