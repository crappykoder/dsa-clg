#include <stdio.h>

struct bank{
    char bank_name[20];
    char bank_branch[20];
    int branch_code[10];

    struct employee{
        int emp_id[10];
        char emp_name[20];
        int basic_sal[10];
        int net_sal[10];
    }e1;
}b1;

int main (){
    printf("enter the Bank Name : ");
    scanf("%s",&b1.bank_name);

    printf("enetr the bank branch name ");
    scanf("%s",&b1.bank_branch);

    printf("enetr the branch code :");
    scanf("%d",&b1.branch_code);

    printf("enter the employee id : ");
    scanf("%d",&b1.e1.emp_id);

    printf("enetr the employee name :");
    scanf("%s",&b1.e1.emp_name);

    printf("enter the basic salary :");
    scanf("")



}
