#include<stdio.h>
int main()
{
    int a,b;
    char o;
    printf("Enter the expression: ");
    scnaf("%d%d%d",&a,&o,&b);
    switch (o)
    {
        case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
        case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
        case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
        case '/':
        printf("%d / %d = %d",a,b,a/b);
        break;
        default:
        printf("Invalid Expression!!!");
    }
    return 0;
}