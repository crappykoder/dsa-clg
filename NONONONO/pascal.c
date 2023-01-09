#include<stdio.h>
int main (){
    int n,i=1,j=1;
    printf("\nenter the rows :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int x=1;
        for(j=1;j<=i;j++){
            printf(" %d",x);
            x=x*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}