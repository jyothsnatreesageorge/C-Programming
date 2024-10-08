# include<stdio.h>
int main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    printf("the ASCII value of the character is:%d\n",c);
    if(c>96&&c<123)
    printf("It is a lower case alphabet");
    if(c>64&&c<91)
    printf("It is an upper case alphabet");
    return 0;
}
