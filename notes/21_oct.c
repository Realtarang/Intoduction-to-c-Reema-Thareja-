#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a,n,m,i;
    printf("enter size of an array : ");
    scanf("%d",&n);
    a=calloc(n,sizeof(int));                    //request for dma allocation 
    if (a!=NULL)
    {
        printf("Base adress of array %p\n",a);

        printf("Enter the elements : ");
        for(i = 0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        printf("Elements of array : ");
        for(i = 0; i<n; i++)
        {
            printf("%d",a[i]);
        }
        printf("\n");

        //-------------------------------------------------reallocation of memory =---------------------

        printf("Enter the size of new array : ");
        scanf("%d",&m);
        a=realloc(a,m*sizeof(int));
        if(a!=NULL)
        {
            printf("Enter the new base adress of array %p\n",a);

            printf("Element of old array : ");
            for(i = 0; i<n; i++)
            {
                printf("%d",a[i]);
            }
            printf("\n");

            printf("enter %d elements of new array : ",m-n);
            for(i=n; i<m; i++)
            {
                scanf("%d",&a[i]);
            }
            printf("Elements of new array : ");
            for(i = 0; i<m ; i++)
            {
                printf("%d ",a[i]);
            }
            printf("\n");

            free(a);
        }
    
    else
    {
        printf("heap insufficient Memory not allocated \n");
    }



    }


    return 0;
}