/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[50],i,j,size;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Overflow Condition\n");
        
    }
    else
    {
        printf("Enter the elements of the array\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("Elements of the array\n");
        for(i=0;i<size;i++)
        {
            printf("%d",a[i]);
        }
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                if(a[i]==a[j])
                {
                    printf("Duplicate elements of %d\n",a[i]);
                }
                else{
                    printf("No duplicate elements found\n");
                }
            }
        }
    }
    return 0;
}
