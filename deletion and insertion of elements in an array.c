/***************************************************************************
 Initialisation of array in run time and insertion and deletion of elements of an array

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[50],size,i,ele,in,ind;
    printf("Enter size of the array\n");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Overflow condition");
    }
    else{
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" elements of the array are\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("-------------------------insertion of Element-----------------------------------\n");
    printf("Enter the element to be inserted and the position\n");
    scanf("%d%d",&ele,&in);
    for(i=size-1;i>in;i--)
    {
        a[i+1]=a[i];
    }
    a[in+1]=a[in];
    a[in]=ele;
    printf("Array after insertion\n");
    for(i=0;i<=size;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("------------------------------deletion of element----------------------------------\n");
    printf("Enter the elements of the array\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf(" elements of the array are\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter the index of the array to be deleted\n");
    scanf("%d",&ind);
    for(i=ind;i<size;i++)
    {
        a[i]=a[i+1];
    }
    printf("Array after deletion\n");
    for(i=0;i<size-1;i++)
    {
        printf("%d\n",a[i]);
    }
    
        
    }
    
}
