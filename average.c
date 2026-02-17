// average of three numbers 

#include<stdio.h>
int main(){
    int a,b,c,avg;
    printf("Enter three numbers:");  //taking three numbers from the user
    scanf("%d%d%d",&a,&b,&c);
    
    avg = (a+b+c)/3;  //formula for average of three numbers
    
    printf("Average of three numbers:%d",avg);
    return 0 ;
}