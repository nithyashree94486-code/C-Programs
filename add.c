/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b,sum;
    printf("Enter the value of a and b:\n");
    scanf("%d %d",&a,&b);
    
    sum = a+b;
    
    printf("sum is %d",sum);
    return 0;
}