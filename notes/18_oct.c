#include<stdio.h>
#include<stdlib.h>

/*
int main()
{
    char a[5];
    puts("enter : ");
    gets(a);
    puts(a);

    return 0;
}
*/

/*
int main()
{
    char a[3];
    a[4]=30;
    printf("%d",a[4]);

    return 0;
}
*/

/*
int main()
{
    char str7[15];
    printf("");
    gets(a);
    puts("string 7 ",a);

    return 0;
}
*/

/*
int main()
{
    int a;                                              //static allocation 
    int *a1 = malloc(sizeof(int));                      //dynamic allocation 
    int *a2 = malloc(4);

    a=10;                                               //static assignment
    *a1 = 20;                                           //dynamic assignment

    scanf("%d",&a);
    scanf("%d",&*a1);

    printf("%d\n",a);
    printf("%d",*a1);


    return 0;
}
*/

/*
int main()
{
    int a;
    a = 10;
    printf("Entered input : %d\n",a);

    int *a1 = malloc(sizeof(int));
    *a1 = 20;
    printf("Entered input : %d\n",*a1);

    printf("enter the value of a :");
    scanf("%d",&a);
    printf("Entered value: %d\n",a);

    printf("enter the value of a1 : ");
    scanf("%d",&a1);
    printf("Entered value : %d ",a1);
    free(a1);
    return 0;
}
*/


int main()
{
    //static allocation 
    int a[2];

    printf("Enter the elements : ");
    for (int i = 0; i<2; i++)
    scanf("%d",&a[i]);

    printf("array has : ");
    for (int i = 0; i<2; i++)
    printf(" %d ",a[i]);

    //dynamic allocation 
    int size;
    printf("\nEnter the size of dynamic array : ");
    scanf("%d",&size);

    int *a1 = (int*)malloc(size*sizeof(int));

    printf("Enter the elements of dynamic array : ");
    for (int i = 0; i<size; i++)
    scanf("%d",&a1[i]);

    printf("Dynamic array is : ");
    for (int i = 0; i<size; i++)
    printf(" %d ",a1[i]);

    free(a1);
    return 0;
}
