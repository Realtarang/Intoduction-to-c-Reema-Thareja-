//nested structure 

#include<stdio.h>
struct employee
{
    int id;
    char name[10];
};
struct organisation
{
    int address;
    char branch[10];
    struct employee emp;
};

int main()
{
    struct organisation org;
    printf("Enter the id , name of employee : ");
    scanf("%d %s",&org.emp.id,&org.emp.name);
    printf("enter the pin and branch of organisation : ");
    scanf("%d %s",&org.address,&org.branch);

    printf("The details of employee and its branch : \n%d\n %s\n %d\n %s\n",org.emp.id,org.emp.name,org.address,org.branch);
    return 0;
}