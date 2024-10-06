# include<stdio.h>
int main()
{
    int i,n,a[20];
    printf("Enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {   
        if(a[i]%2==0)
        printf("%d\t",a[i]);
    }
    return 0;
}
