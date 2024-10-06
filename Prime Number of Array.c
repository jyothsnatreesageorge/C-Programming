# include<stdio.h>
int main()
{
    int n,i,j,a[20],flag;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            flag++;
        }
        if(flag==0&&a[i]!=1)
        printf("%d\t",a[i]);
    }
        
    return 0;
}
