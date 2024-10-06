# include<stdio.h>
int main()
{
    int a[20],i,n;
    float sum=0.0,average;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter element %d:",i+1);
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\nSum=%.3f",sum);
    average=sum/n;
    printf("\nAverage=%.3f",average);
    return 0;
}
