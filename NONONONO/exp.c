#include<Stdio.h>
int main(){

    char s[100];
    printf("enter your name(without spaces) \n");
    scanf("%s",&s);
    int i,j;
    for(i=0;s[i];i++){
        for(j=0;j<=i;j++){
            printf("%c",s[j]);
        }
        printf("\n");
    }
    return 0;
}

