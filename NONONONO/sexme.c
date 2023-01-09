#include<stdio.h>
#include<string.h>

void rev();

int main(){
    char c[50];
    printf("enetr the string ");
     rev();    
}

void rev(){
    char x;
    scanf("%c",x);
    if(x!='\n'){
        rev();
        printf("%x",x);
    }
    
}