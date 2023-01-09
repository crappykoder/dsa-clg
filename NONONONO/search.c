#include<stdio.h>
 
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define max 69

int bb_srch(int x, int y[max]); 
int l_sort(int x, int y[max]);

int  main (){
    int a[69],n,i,ele,choice;
    printf("enetr the number of elements of the array : ");
    scanf("%d",&n);
    pritnf("enter the elemnts of the matrix :"); 

    REP(i,0,n){
        scanf("%d",a[i]);
    }
    printf("enetr the elment to be searched :");
    scanf("%d",&ele);
    
    printf("choose the sorting method \n 1. linear search \n2.binary search");

    scanf("%d",choice);

    switch(choice){
        case 1:
        printf("the sorted array is %d",bb_srch(ele,a[n]));
        break;
        case 2:
        printf("the sorted array is %d",l_sort(ele,a[n]));
        break;
    }

    int bb_srch(int x, int y[max]){

    }

}   
