// C program to calculate perimeter of rectangle

#include<stdio.h>
int main(){
    int a,b,perimeter;     
    printf("Enter the value of side a :");   //taking sides from the user
    scanf("%d",&a);
    
    printf("\nEnter the value of side b:");
    scanf("%d",&b);
    
    perimeter = a*b;    //formula for perimeter of rectangle 
    
    printf("\nPerimeter of the Rectangle is: %d",perimeter);
    return 0;
}