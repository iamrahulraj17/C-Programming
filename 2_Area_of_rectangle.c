#include<stdio.h>
int main()
{
    int l,b,area;
    printf("Enter the length: ");
    scanf("%d",&l);
    printf("Enter the breadth: ");
    scanf("%d",&b);
    area = l*b;
    printf("Area of rectangle is: %d",area);
    return 0;
}