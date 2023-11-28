/* 
#include<stdio.h>
#include<stdlib.h>

struct student
{
    int sap;
    int avg;
};
int main()
{
    struct student stud1,*stud;
    stud=&stud1;
    printf("Enter the SAP number of first student: ");
    scanf("%d", &stud1.sap);
    printf("Enter average marks of first student: ");
    scanf("%d", &stud1.avg);

    printf("Details of student 1:\nSAP : %d\nAverage : %d",stud->sap,stud->avg);

}
 */

// Global DMA 

/* 
#include<stdio.h>
#include<stdlib.h>
struct student                      //Self-refrential Structure 
{
    int sap;
    int avg;
    struct student *next;           //Srn
}*new,*head;                        //new - Stores Adress of new block 
                                    //head  - Stores adress of next block 

void dma();
int main()
{
    int choice;
    while(1)
    {
        printf("1:DMA\n2:Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        
        switch(choice)
        {
            case 1: 
                dma(); 
                break;
            case 2:
                printf("\nApplication Terminated \n");
                exit(0);
                break;
            default:
                printf("\nInvalid Choice \n");
        }
    }   

    return 0;
}

void dma()
{
    new = (struct student*)malloc(sizeof(struct student));
    if (new == NULL)
        printf("DMA unsuccessful\n");
    else
    {
        printf("DMA Successful : %p\n",new);
        printf("Enter Data : ");
        scanf("%d%d",&new->sap,&new->avg);
    }
}
 */

// 3 Element 
/* 
#include<stdio.h>
#include<stdlib.h>
struct student                      //Self-refrential Structure 
{
    int sap;
    int subs;
    struct student *next;           //Srn
}*new,*head;                        //new - Stores Adress of new block 
                                    //head  - Stores adress of next block 

int main()
{
    
    //Create Block 1 
    new = (struct student*)malloc(sizeof(struct student));
    head = new;
    new->sap = 1000;
    new->subs = 1;
    new->next = NULL;

    //Create Block 2
    new = (struct student*)malloc(sizeof(struct student));
    head->next = new;                                          //Chaining
    new->sap = 2000;
    new->subs = 2;
    new->next = NULL;

    //Create Block 3
    new = (struct student*)malloc(sizeof(struct student));
    head->next->next = new;
    new->sap = 3000;
    new->subs = 3;
    new->next = NULL;

    // Insert Code to print the values stored in Bock - 1,2,3

    printf("Details of Student - 1 : %d %d %p\n",head->sap,head->subs,head->next);

    printf("Details of Student - 2 : %d %d %p\n",head->next->sap,head->next->subs,head->next->next);

    printf("Details of Student - 3 : %d %d %p\n",head->next->next->sap,head->next->next->subs,head->next->next->next);
    free(new);
}
 */

// typedef
#include<stdio.h>
typedef struct 
{
    int sap;
    int subs;
}student;               //Student -> uds

int main()
{
    student var;
    var.sap=546789;
    var.subs=1;
    
    return 0;
}
