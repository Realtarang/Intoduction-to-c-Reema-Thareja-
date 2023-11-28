#include<stdio.h>
#include<stdlib.h>


int main()
{
    int n;
    char name[100];
    FILE *ptr1, *ptr2, *ptr3;       //FILE is typedef struct in stdio.h

    //File open in 'w' Mode : overwrite if file exists, else create new file 
    ptr1 = fopen("program.txt","w");

    //Writting to file: (1) Get from std.input (2) copy to BOF
    printf("Enter no. to file : ");
    scanf("%d",&n);                //(1)
    fprintf(ptr1,"%d",n);          //(2)

    fclose(ptr1);                  //File close 

    //File open in 'a' mode : append to EOF if file exists 
    ptr2 = fopen("program.txt","a");

    if(ptr2==NULL)
    {
        printf("File do not exists");
        exit(1);
    }

    //Writting to file: (1) get from std.input (2) Appent to EOF
    printf("\n\nEnter text to be appended : ");
    scanf("%s",name);                   //(1)
    fprintf(ptr2,"\n%s",name);          //(2)

    fclose(ptr2);                  //File Close

    //File open in 'r' mode : open Existing file else return NULL
    ptr3 = fopen("program.txt","r");
    
    if(ptr3 == NULL)
    {
        printf("File does not exist");
        exit(1);
    }

    //Getting data from file : (1) From file to variable , (2) Variable to std.output
    fscanf(ptr3,"%d%s",&n,name);
    printf("\nValue in file \nNumber read from file : %d",n);
    printf("\nText read from file : %s",name);

    return 0;
}


/* 
 ##HOMEWORK - 1
 you are getting 10 numbers and put it into the file and then goes into the array and sort in the array 
 after bubble sort put them in file 2  

 ##homework - 2
 random access file 
*/
