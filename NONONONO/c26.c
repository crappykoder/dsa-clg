#include <stdio.h>
#include <conio.h>
void main(){
    int qty_b,qty_ba,qty_w,DOP;
    float amt_b,amt_ba,amt_w;
    double ST,TSA,GT;
    char NOB;
    printf("\n enter the name of purchaser : ");
    scanf("%c",&NOB);
    printf("\n enter the date of purchase(without spaces) : ");
    scanf("%d",&DOP);
    printf("enter the number of bats purchased : ");
    scanf("%d",&qty_b);
    printf("enter the price of one bat : ");
    scanf("%f",&amt_b);
    printf("\n enter the number of ballas purchased : ");
    scanf("%d",&amt_ba);
    printf ("\nenter the price of one ball : ");
    scanf("%f",amt_ba);
    printf("\neter the number of wickets purchased : ");
    scanf("%d",&qty_w);
    printf("\n enter the price of one wicket : ");
    scanf("%f",&amt_w);
    TSA=(qty_b*amt_b)+(qty_ba*amt_ba)+(qty_w*amt_w);
    if(TSA<150000){
        ST=(7*(TSA/100));
        GT=TSA+ST;
    }
    else if(TSA>150000 && TSA<300000){
        ST=(12.5*(TSA/100));
        GT=TSA+ST;
    }
    else{
    ST=(17.5*(TSA/100));
    GT=TSA+ST;
    }
    printf("Date of purchase was : %d \n",DOP);
    printf("Name of buyer : %c",NOB);
    printf("Total Sales : %lf \n",TSA);
    printf("Sales Tax : %lf \n", ST);
    printf("grand total : %lf \n",GT);
    getch ();
}