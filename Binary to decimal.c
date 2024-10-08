# include<stdio.h>
# include<math.h>
int main()
{
    int n,rem,sum=0,i;
    printf("Enter the binary digit:");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*pow(2,i));
        n=n/10;
        i++;
    }
    printf("%d",sum);
    return 0;
}
