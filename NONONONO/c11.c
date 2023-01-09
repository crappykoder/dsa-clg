#include<stdio.h>
#include<math.h>
int main(){
    double a,b,c,R1,R2,D,Re,I;
    printf("enter the coeff of X^2 :");
    scanf("%lf",&a);
    printf("enter the coeff of X :");
    scanf("%lf",&b);
    printf("enter the constant term :");
    scanf("%lf",&c);
    printf("your quadratic eqn is : \n %.1lfX^2+%.1lfx+%.1lf",a,b,c);
    D= b*b -(4*a*c);
    if(D>0){
        printf("\nroots are real and distinct \n");
        R1 = (-b + sqrt(D))/(2*a);
        R2 = (-b - sqrt(D))/(2*a);
        printf("First root = %.1lf \n Second root= %.1lf",R1,R2);
    }
    else if(D == 0){
        printf("\nThe roots are real and equal\n");
        R1 = R2 =-b/(2*a);
        printf("Root1 = Root2 = %.1lf : ",R1);
    }
    else{
        printf(" \nroots are imaginary \n");
        Re = -b/(2*a);
        I = sqrt(-D)/(2*a);
        printf("First Root= %.1lf+%.1lfi and Second Root = %.1f-%.1fi",Re,I,Re,I);
    }
    return 0;
}