#include <stdio.h>

int main()
{
    int a,b,perimeter;
    printf("Enter the length 'a' of rectangle:");
    scanf("%d",&a);
    
    printf("\nEnter the breadth 'b' of rectangle:");
    scanf("%d",&b);
    
    perimeter = a*b;
    printf("\nThe perimeter of the rectangle is : %d",perimeter);

    return 0;
}