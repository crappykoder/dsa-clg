#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

void find();
void destinations();
void flight_numbers();



struct cust{
    char name[20];
    int age;
    char sex[10];
}C1;

void main(){ 
    int  choice;
    do{
    printf("\n==========WELCOME TO AAI TICKET BBOKING==========");
    printf("\nENTER YOUR NAME : ");
    scanf("%s",&C1.name);

    printf("\nENETR YOUR AGE : ");
    scanf("%d",&C1.age);

    printf("\nENTER YOUR SEX : ");
    scanf("%s",&C1.sex);

    printf("\n================================");

    printf("\n 1. MAKE A BOOKING ");
    printf("\n");
    printf("\n 2. SEE ALL THE TRAVEL DESTINATIONS FROM BANGLORE ");
    printf("\n");

    printf("\nENETR YOUR CHOICE :");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        break;

        case 2:
        destinations();
        break;
        
        default:
        printf("WRONG CHOICE");
        break;

    }

    }while(choice!=0);
    
}

void destinations(){
    printf("1. Port Blair\n2. Hydreabad\n3. Itanagar\n4. Dispur\n5. Patna\n6. Chandigarh\n7. Raipur\n8. Silvassa\n9. Daman");
    printf("10. Panaji\n11. Gandhinagar\n12. Shimla\n13. Srinagr\n14. Ranchi\n15. Thiruvananthapuram\n16. Kavaratti\n17. Bhopal");
    printf("18. Mumbai\n19. Imphal\n20. Shillong\n21. Aizawl\n22. Kohima\n23. Bhubaneswar\n24. Puducherry\n25. Jaipur\n26. Gangtok\n27. Chennai");
    printf("28. Hydrabad\n29. Agartala\n30. Lucknow\n31. Dehradun\n32. Kolkata");
}


