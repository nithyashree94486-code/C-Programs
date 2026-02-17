//   To print the smallest of two numbers 

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    
    if(a < b ){
        printf("%d is the smallest number of two",a);
    }else{
        printf("%d is the smallest number of two",b);
    }
    return 0;
}