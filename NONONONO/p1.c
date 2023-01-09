#include <stdio.h>
int main(){
    int a,b,choice;
    printf("enetr the first number : ");
    scanf("%d",&a);
    printf("enetr the second number :");
    scanf("%d",&b);
    printf("1. add\n2. subtract \n3. multiply \n4. divide ");
    printf("enetr the choice (1-4) :");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("the sum of the two given numbes is : %d",a+b);
        break;
        case 2:
        printf("the difference of the two numbers is : %d",a-b);
        break;
        case 3:
        printf("the produvt of the two given numbers is : %d",a*b);
        break;
        case 4:
        printf(" the division of the two number is : %d",a/b);
        break;
        default:
        printf("invalid input");
    }
    return 0;
}