#include<Stdio.h>
void main(){
    int a;
    scanf("%d",a);

    
    int *x=&a;

    

    printf("%d\n",a);

    printf("%p\n",&a);

    printf("%p\n",&x);    

    printf("%p\n",x); 

    printf("%d\n",*x);


}