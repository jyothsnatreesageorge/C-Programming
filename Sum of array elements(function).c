# include<stdio.h>
int sum(int a[20],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of all elements in the array is:%d",sum);
    return sum;
}
int main()
{
    int arr[20],size,i;
    printf("Enter the number of elements in the array:");
    scanf("%d",&size);
    for(i=0;i<size;i++)
    {
        printf("Enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    sum(arr,size);
    return 0;
}
