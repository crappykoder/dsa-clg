#include<stdio.h>
int main(){
    int marks;
    printf("enter the marks(in whole numbers) : ");
    scanf("%d",&marks);
    switch (marks){
        case 1:
        if(marks>=90 && marks<100){
            printf("your grade is : A");
            break;
        }
        case 2:
        if(marks>=80 && marks<90){
            printf("your grade is : B");
            break;
        }
        case 3:
        if(marks>=70 && marks<80){
            printf("your grade is : C");
            break;
        }
        case 4:
        if(marks>=60 && marks<70){
            printf("your grade is : D");
            break;
        }
        case 5:
        if(marks<60){
            printf("tumse na hopaega beta :) ");
            break;
        }
        default:
        printf("invalid input");
    }
    return 0;

}