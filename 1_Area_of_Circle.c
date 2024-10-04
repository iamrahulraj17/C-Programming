#include<stdio.h>                           // Header file
int main()                                  // Main Function
{                                           // Bracket open
    int radius, area;                       // Variable declaration
    printf("Enter the radius: ");           // Message printing
    scanf("%d",&radius);                    // Read the value from the user
    area = 3.14*radius*radius;              // Applying the formula
    printf("Area of circle is: %d",area);   // Printing the area of circle
    return 0;                               // Return the function value 0
}                                           // Bracket close