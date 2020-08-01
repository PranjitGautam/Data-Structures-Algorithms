/***************************************************************************
 Initialisation of array in run time

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[5],i;
    printf("Enter the elements of the array\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of the array are as follows\n");
   for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
