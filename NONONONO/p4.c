#include <stdio.h>
int max(int num1,int num2){
int result;
if(num1>num2){
    result = num1;
} else {
    result = num2;
}
return result;
}

int main(){
    int num1,num2 ;
    printf("enter the first no. : ");
    scanf("%d",&num1);
    printf("enter the second no. :");
    scanf("%d",&num2);
    printf("The greater number is %d",max(num1,num2));                                                                                 
    return 0;

}                                                   