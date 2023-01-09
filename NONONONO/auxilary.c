#include<stdio.h>

void main()
{
    float R,V,L,P,U;
    int choice;
    
    printf("This program finds the nature of motion\n");
    printf("\n\n If the nature of motion is known it finds the  velocity \n");
    printf("\n\n we can also find the length of diameter of fluid flow\n");
    printf("\n\n we can also find viscosity or density of fluid for motion in perticular type\n");
    
    printf("Enter choice\n");
    printf("1.Nature of flow\n 2.velocity\n 3.Length of diameter\n 4.Density\n 5.Viscocity\n");
    
    printf("Enter choice\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
        case 1 : 
        printf("Enter the values of\n P = \n,V = \n,L = \n,U = \n");
        scanf("%f %f %f %f",&P,&V,&L,&U);
        R = P*V*L/U;
        printf("Renoylds number is %f\n",R);
        if(R>1000)
        printf("The fluid flow is turbulent\n");
        else
        printf("The fluid flow is stream line\n");
        break;
        
        case 2 :
        printf("Enter the values of\n R = \n,V = \n,L = \n,U = \n");
        scanf("%f %f %f %f",&R,&V,&L,&U);
         V = R*U/P*L;
        printf("The  velocity is %f\n",V);
        break;
        
        case 3 :
        printf("Enter the values of\n P = \n,V = \n,R = \n,U = \n");
        scanf("%f %f %f %f",&P,&V,&R,&U);
         L = R*U/P*V;
        printf("Length of diameter is %f\n",L);
        break;
        
        case 4 : 
        printf("Enter the values of\n R = \n,V = \n,L = \n,U = \n");
        scanf("%f %f %f %f",&R,&V,&L,&U);
        P = R*U/V*L;
        printf("Density of fluid is %f \n",P);
        break;
        
        case 5 :
        printf("Enter the values of\n P = \n,V = \n,L = \n,R = \n");
        scanf("%f %f %f %f",&P,&V,&L,&R);
         U = P*V*L/R;
        printf("Viscocity is %f\n",U);
        break;
        
        default : printf("INPUT ERROR !!!!!!!!!\n");
    }
}