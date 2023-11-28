#include<stdio.h>
struct student
{
    int sap;
    int avg;
};
int main()
{
    struct student stud1,*stud;
    stud = &stud1;
    printf("Enter sap and avg of student 1 : ");
    scanf("%d %d",&stud1.sap,&stud1.avg);

    printf("Details of student 1 : %d %d",stud->sap,stud->avg);

    return 0;
}
