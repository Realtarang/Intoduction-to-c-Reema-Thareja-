
// Command line arguments
/*
#include<stdio.h>
#include<stdlib.h>

int main(int count, char *mycla[])                                  //count - Record no of cla's
{
    printf("\narg-1 (program name) : %s\n",mycla[0]);               //mycla - Array of character pointers(Stores cla as string)
    printf("arg-2 : %d\n", atoi(mycla[1]));                         //atoi() - Converts string to integer
    printf("arg-3 : %s\n", mycla[2]);
    printf("arg-4 : %s\n", mycla[3]);
    printf("Number of arguments: %d\n",count);

    return 0;
}
 */

// limit the size of command line argument

/*
#include<stdio.h>
#include<stdlib.h>

int main(int count, char *mycla[])                                  //count - Record no of cla's
{
    if (count == 5)
    {
        printf("\narg-1 (program name) : %s\n",mycla[0]);               //mycla - Array of character pointers(Stores cla as string)
        printf("arg-2 : %s\n", atoi(mycla[1]));                         //atoi() - Converts string to integer
        printf("arg-3 : %s\n", mycla[2]);
        printf("arg-4 : %s\n", mycla[3]);
        printf("Number of arguments: %d\n",count);

    }

    else
    {
        printf("Error! Insufficient number of arguments.\n");
    }
    return 0;
}
 */

// Vardic Arguments

/*
#include<stdio.h>
#include<stdarg.h>
int add(int num,...);                               //first argument has count of the remaining no of args

int main()
{
    printf("SUM 1 = %d\n",add(2,2,3));
    printf("SUM 2 = %d\n",add(4,2,3,4,5));

    return 0;
}
int add(int num,...)                                //called ellipsis
{
    va_list valist;                                 //contains the list of optional argumens
    int sum=0, i;
    va_start(valist,num);                           //sets the arg_ptr to first optional arguments
    printf("Number of arguments: %d\n",num);
    for (i=0; i<num; i++)
    {
        sum =sum + va_arg(valist,int);              //retrives the values of arg.in arg_ptr , incr,arg_ptr
    }
    va_end(valist);                                //after retriving all,set the arg_ptr to null
    return sum;
}
 */

// structure
/*
#include<stdio.h>
struct student
{
    int sap;                    //Structure's element-1
    int roll;                //Structure's element-2
};

int main(void)
{
    struct student stud1;
    printf("Enter SAP of the Student: ");
    scanf("%d", &stud1.sap);
    printf("\nEnter Roll no of the Student: ");
    scanf("%d", &stud1.roll);
    printf("Details stored: %d, %d\n",stud1.sap,stud1.roll);

    return 0;
}
 */

// Union
/*
#include<stdio.h>
union student
{
    int sap;
    int roll;
};

int main(void)
{
    union student stud1;
    printf("Enter SAP of the Student: ");
    scanf("%d", &stud1.sap);
    printf("Sap id is %d",stud1.sap);
    printf("\nEnter Roll no of the Student: ");
    scanf("%d", &stud1.roll);
    printf("Roll number is %d",stud1.roll);

    return 0;
}
 */

// nesting union inside the structure
/* 
#include <stdio.h>
struct student
{
    int choice;
    union number
    {
        int sap;
        int roll;
    } num;
};
int main()
{
    struct student stud1, stud2;

    printf("1- SAP\n2: Roll No\n");
    printf("Enter Choice : ");
    scanf("%d", &stud1.choice);

    switch (stud1.choice)
    {
    case 1:
        printf("Enter SAP ID : ");
        scanf("%d", stud1.num.sap);
        break;
    case 2:
        printf("Enter the rollno : ");
        scanf("%d", stud1.num.roll);
        break;
    default:
        printf("Wrong Choice");
        break;
    }

    printf("Student Details : %d", stud1.num.sap);

    return 0;
}
 */

//Annoymous union  -  In this there is no name of union 
/* 
#include <stdio.h>
struct student
{
    int choice;
    union number
    {
        int sap;
        int roll;
    };
};
int main()
{
    struct student stud1, stud2;

    printf("1- SAP\n2: Roll No\n");
    printf("Enter Choice : ");
    scanf("%d", &stud1.choice);

    switch (stud1.choice)
    {
    case 1:
    {
        printf("Enter SAP ID : ");
        scanf("%d", stud1.sap);
        break;
    }
    case 2:
    {
        printf("Enter the rollno : ");
        scanf("%d", stud1.roll);
        break;
    }
    default:
        printf("Wrong Choice");
    }

    printf("Student Details : %d", stud1.sap);

    return 0;
}


 */

// Homework -> Annoymous nested structure 

#include<stdio.h>
struct school
{
    int code;
    struct student
    {
        int rollno;
        char name[50];
    };
};

int main()
{
    struct school schl;
    printf("\nEnter School Code : ");
    scanf("%d",&schl.code);
    printf("\nEnter Student's Roll no : ");
    scanf("%d",&schl.rollno);
    printf("Enter the name of student : ");
    scanf("%s",&schl.name);
    printf("%d %d %d\n",schl.code,schl.rollno,schl.name);
    printf("%d\n",schl.code);
    printf("%s\n",schl.name);

    return 0;
}
