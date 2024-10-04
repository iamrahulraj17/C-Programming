#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("%d is Negative number",n);
    }
    else
    {
        printf("%d is Positive number",n);
    }
    return 0;
}