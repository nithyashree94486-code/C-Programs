// cubing a number

#include<stdio.h>
int main(){
    float a,cube;  // given number can be any integer
    printf("Enter a number:");
    scanf("%f",&a);
    
    cube = a*a*a;    //formula for cubing a number
    
    printf("\ncube of a given number is %f",cube);
    return 0;

}