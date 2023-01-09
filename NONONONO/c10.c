#include<stdio.h>>
int main(){
    int age,diff;
    printf("enter your age : ");
    scanf("%d", &age);
    diff=18-age;
    if(age>=18){
        printf("you are aligible for casting vote");
    }
    else{
        printf("you cannot vote yet \n");
        printf("you need to wait for %d years \n",diff);
    }
    return 0;
}