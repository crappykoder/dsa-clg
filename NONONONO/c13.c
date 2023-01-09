#include<stdio.h> 
int main()  
{ 
int i,n,a,b,sum=0;  
printf("Enter the number of terms:");  
scanf("%d",&n); 
a=0; b=1;  
printf("%d%d",a,b);  
for(i=2; ;i++)  
{  
if(i==(n-1)) //condition specified using if statement 
 break;
sum=a+b;
printf("%d",sum); 
a=b;  b=sum; 
 }  
return 0; 
}
