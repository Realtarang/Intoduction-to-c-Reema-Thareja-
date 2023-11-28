//Structure normal variable and dot(.) operator to acess structure's elements

/*
#include<stdio.h>
struct student 
{
    int sap;                    //Structure's element-1 
    int average;                //Structure's element-2
}stud2;                         //creating global Structure variable

int main(void)
{
    struct student stud1,stud3;
    printf("Enter SAP of the Student: ");
    scanf("%d", &stud1.sap);     //accessing structure's sap using dot(.) operator
    printf("\nEnter Average of the Student: ");
    scanf("%d", &stud1.average);   //accessing structure's average using dot(.) operator

    printf("Enter SAP of the Student: ");
    scanf("%d", &stud2.sap);     //accessing structure's sap using dot(.) operator
    printf("\nEnter Average of the Student: ");
    scanf("%d", &stud2.average);   //accessing structure's average using dot(.) operator

    printf("Enter SAP of the Student: ");
    scanf("%d", &stud3.sap);     //accessing structure's sap using dot(.) operator
    printf("\nEnter Average of the Student: ");
    scanf("%d", &stud3.average);   //accessing structure's average using dot(.) operator

    printf("Details stored: %d, %d\n",stud1.sap,stud1.average);
    printf("Details stored: %d, %d\n",stud2.sap,stud2.average);
    printf("Details stored: %d, %d\n",stud3.sap,stud3.average);
    
    return 0;
}
*/

// display void

/*
#include<stdio.h>
struct student 
{
    int sap;                    //Structure's element-1 
    int average;                //Structure's element-2
}stud2,stud3;                         //creating global Structure variable

void display();

int main(void)
{
    struct student stud1;
    printf("Enter SAP of the Student: ");
    scanf("%d", &stud1.sap);     //accessing structure's sap using dot(.) operator
    printf("\nEnter Average of the Student: ");
    scanf("%d", &stud1.average);   //accessing structure's average using dot(.) operator

    printf("Enter SAP of the Student: ");
    scanf("%d", &stud2.sap);     //accessing structure's sap using dot(.) operator
    printf("\nEnter Average of the Student: ");
    scanf("%d", &stud2.average);   //accessing structure's average using dot(.) operator

    printf("Enter SAP of the Student: ");
    scanf("%d", &stud3.sap);     //accessing structure's sap using dot(.) operator
    printf("\nEnter Average of the Student: ");
    scanf("%d", &stud3.average);   //accessing structure's average using dot(.) operator

    display();

    return 0;
}

void display()
{
    printf("Details of student - 2:- %d, %d\n", stud2.sap,stud2.average);
    printf("Details of student - 3:- %d, %d\n", stud3.sap,stud3.average);
}
*/

// structure using array multiple data 

/*
#include<stdio.h>
struct student
{
    int sap;
    int average;
};

int main()
{
    int nos;
    printf("Enter the number of students : ");
    scanf("%d",&nos);

    struct student stud[nos];                                   //structure array 
    for (int i = 0 ;i < nos; i++)                              //for loop to take input from user
    {
        printf("\nEnter SAP of the Student %d: ",i+1);          
        scanf("%d", &stud[i].sap);                              
        printf("\nEnter Average of the Student %d: ",i+1);      
        scanf("%d", &stud[i].average);                          
    }

    for (int i = 0; i<nos; i++)
    {
        printf("Details of student %d -> %d, %d\n",i+1,stud[i].sap,stud[i].average);
    }

    return 0;
}
*/

//Structure pointor variable and ( -> ) for acessing the element 

/*
#include<stdio.h>

struct student
{
    int sap;
    int average;
};


int main()
{
    struct student stud1, *stud;
    stud = &stud1;

    printf("Enter SAP of the Student: ");
    scanf("%d", &stud1.sap);     //accessing structure's sap using dot(.) operator
    printf("\nEnter Average of the Student: ");
    scanf("%d", &stud1.average);   //accessing structure's average using dot(.) operator

    printf("Details of student -1 are : %d, %d", stud->sap,stud->average);
    

    return 0;
}
*/

// size of memory allocated to structure 

/*
#include<stdio.h>

struct student
{
    int sap;
    int average;
};


int main()
{
    struct student stud1,stud;
    printf("Memory %lu",sizeof(stud));

    return 0;
}
*/

// size of memory allocated to structure 

/*
#include<stdio.h>
#pragma pack(1)

struct student
{
    int sap;
    char average;
};


int main()
{
    struct student stud1,stud;
    printf("Memory %lu",sizeof(stud));

    return 0;
}

*/

//Homework 
//Data structure using pointor array 

#include<stdio.h>
struct student
{
    int sap;
    int average;
};

int main()
{
    int nos;
    printf("Enter the number of student : ");
    scanf("%d",&nos);

    struct student stud[nos],*stude[nos];
    stude[nos] = &stud[nos];

    for (int i=0 ;i < nos ; i++)
    {
        printf("Enter the sap of %d student : ",i+1);
        scanf("%d",&stud[i].sap);
        printf("Enter the average of %d student : ",i+1);
        scanf("%d",&stud[i].average);
    }
    for(int i = 0; i<nos; i++)
    {
        printf("Details of %d student are : %d %d", i+1, stud[i].sap, stud[i].average);
    }
    return 0;
}
