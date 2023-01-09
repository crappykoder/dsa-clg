#include<stdio.h>
int main (){
    int ch,b,p,f,s,x,y,z,v,tt;
    do{
    printf("\n1. menu ");
    printf(" \n2. order ");
    printf("\n 3. total ");

    printf("\nentr the choice ");
    scanf("%d",&ch);


    switch(ch){
        case 1:
        printf("\nburgers 1x 200");
        printf("\nfries 1x 50");
        printf("\npijja 1x 500");
        printf("\nsandwiches 1x 150");
        break;

        case 2:
        printf("\nenter the number of burgeres");
        scanf("%d",&x);

        printf("\nenter the number of fries");
        scanf("%d",&y);

        printf("\nenetr the number of sandbitches ");
        scanf("%d",&z);

        printf("\nenetr the number of pijja ");
        scanf("%d",&v);
        break;

        case 3:
        tt=x*200+y*50+z*150+v*500;

        printf("\nthe total billed amt is : %d",tt);
        break;



    }

    }while(ch!=0);
   

    
}