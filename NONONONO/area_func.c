#include<stdio.h>
double area_s(double f);
double area_c(double r);
double perimeter(double l,double b);
void main(){
    double f,r,l,b;
    printf("enter the side of the square : ");

    scanf("%lf",&f);

    printf("enetr the radius of the circle : ");

    scanf("%lf",&r);

    printf("enetr the length of the rectangle :");

    scanf("%lf",&l);

    printf("enetr the breadth of the rectangle :");

    scanf("%lf",&b);
    
    printf("\nthe area of square is : %lf",area_s(f));

    printf("\nthe area of circle is : %lf",area_c(r));

    printf("\nthe perimeter of rectangle is : %lf",perimeter(l,b));
}

double area_s(double f){
    double a=f*f;
    return a;
}

double area_c(double r){
    double s=3.14*(r*r);
    return s;
}
double perimeter(double l,double b){
    double p=2*(l+b);
    return p;
}