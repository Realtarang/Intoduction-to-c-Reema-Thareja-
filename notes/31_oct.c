/*
#include<stdio.h>
struct Student
{
    int sap;
    int sub;
}var1,var2;

int main()
{
    var1.sap = 50;
    var2.sap = 51;
    var1.sub = 1;
    var2.sub = 2;

    printf("Student -1 Sap - %d subjects - %d\n",var1.sap,var1.sub);
    printf("Student -2 Sap - %d subjects - %d\n",var2.sap,var2.sub);
    return 0;
}
*/

//Array Of Structures 

/* 
#include<stdio.h>
struct Student
{
    int sap;
    int sub;
};

int main()
{
    int size;
    printf("Enter the size of Array : ");
    scanf("%d",&size);

    struct Student array[size];                    //Declare an array of structures
    for(int i=0;i<size;i++)                        //Loop to get sap and subject from user
    {
        printf("\nEnter student %d sap: ",i+1);
        scanf("%d",&array[i].sap);
        printf("Enter number of subjects: ");
        scanf("%d",&array[i].sub);
    }
    printf("\nDisplaying students details:\n");   //Print all entered data
    for(int j=0;j<size;j++)
    {
        printf("student - %d SAP - %d Subjects - %d\n",j+1,array[j].sap,array[j].sub);
    }

    return 0;
}
 */



// Array of Structure Pointers

/* 
#include<stdio.h>
struct Student
{
    int sap;
    int sub;
};

int main()
{
    struct student var[10],*ptr[10];
    for (int i = 0; i<10; i++)
    {
        ptr[i] = &var[i];
    }
    

    return 0;
}
 */

// Nested Structure 
/* 
#include<stdio.h>
struct date 
{
    int d,m,yr;
};
struct student
{
    int sap;
    int sub;
    struct date dob;
};

int main()
{
    struct student stud1;
    printf("Enter the sap , subject and dob : ");
    scanf("%d%d%d%d%d", &stud1.sap, &stud1.sub, &stud1.dob.d, &stud1.dob.m, &stud1.dob.yr);
    printf("\nStudent Details:\nsap: %d\nsubject: %d\ndob:%d/%d/%d", stud1.sap, stud1.sub, stud1.dob.d,stud1.dob.m,stud1.dob.yr);
    return 0;
}
 */

// Dynamic Structrue 

/* 
#include<stdio.h>
#include<stdlib.h>

struct student
{
    int sap;
    int sub;
};

int main()
{
    struct student *stud;
    stud = (struct student*)malloc(sizeof(struct student));
    stud->sap = 4000;
    stud->sub = 1000;

    printf("Student Details : %d %d",stud->sap,stud->sub);
    free(stud);

    return 0;
}
 */

// Q- Consider n has the number of students . Allocate Dynamic Memory For these n students to create a student database and print 


#include<stdio.h>
#include<stdlib.h>
struct student
{
    int sap;
    int marks;
};

int main()
{
    int size;
    printf("Enter the number of students : ");
    scanf("%d",&size);

    struct student *stud[size];

    for(int i=0 ;i < size ; i++)
    {
        stud[size]=(struct student*)malloc(sizeof(struct student));
    }

    // Entering SAP and Marks
    for (int i=0; i<size; i++)
    {
        printf("Enter the sap and marks of student-%d : ",i+1);
        scanf("%d%d",&stud[i]->sap,&stud[i]->marks);
    }

    // Displaying Student details
    printf("\nDetails of students \n");
    for(int i=0; i<size; i++)
    {
        printf("Student-%d\t Sap : %d, Marks : %d",i+1,stud[i]->sap,stud[i]->marks);
    }
    free(stud[size]);
    return 0;
}
