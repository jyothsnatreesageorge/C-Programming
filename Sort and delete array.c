# include<stdio.h>
int main()
{
    int n1,n2,i,j,a[30],b[30],c[60];
    printf("Enter the number of elements in the array:");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&a[i]);
    }
    printf("Enter the number of elements in the array:");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n1;i++)
    {
        c[i]=a[i];
    }
    for(i=0;i<n2;i++)
    {
        c[n1+i]=b[i];
    }
    printf("The combined array is:\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\t",c[i]);
    }
    for(i=0;i<n1+n2;i++)
    {
        for(j=0;j<(n1+n2)-i-1;j++)
        {
            if(c[j]>c[j+1])
            {
                int temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    printf("\nThe sorted array is:\n");
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\t",c[i]);
    } 
    printf("\nThe array without duplicates is:\n");
    /*int d[60];
    for(i=0;i<n1+n2;i++)                    This code shall also do the same procedure 
    {
        if(c[i]!=c[i+1])
        {
            d[i]=c[i];
            printf("%d\t",d[i]);
        }
    }   */
    for(i=0;i<n1+n2;i++)
    {
        if(c[i]!=c[i+1])
        {
            printf("%d\t",c[i]);
        }
    }
    return 0;
}
