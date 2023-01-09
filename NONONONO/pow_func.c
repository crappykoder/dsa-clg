#include <math.h>
#include <stdio.h>
double chik(double a, double b);
int main (){
    double x,y;
    printf("enter the number : ");
    scanf("%lf",&x);
    printf("eneter the power of %lf : ",x);
    scanf("%lf",&y);
    printf("the required exponent is %lf",chik(x,y));
}

double chik(double a,double b){
    double s=pow(a,b);
    return s;
}