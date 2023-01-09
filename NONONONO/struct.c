#include<stdio.h>
#include<string.h>
float avg(struct student); 

struct student {
    char std_name[50];
    int std_rno;
    float std_marks;    
}s[5];


int main(){


    printf("enter the details of 5 students : ");
    printf("\n");

    for(int i=0;i<5;i++){
       
        printf("\nenter the marks :");
        scanf("%f",&s[i].std_marks);
    }
    printf("The average marks of students is : %.1f",avg(s[5]));

}
float avg(struct student student_marks){
    float sum=0;
    for(float i=0;i<5;i++){
        sum=sum+i;
    }
    float avg = sum/5;
    return avg;
}
