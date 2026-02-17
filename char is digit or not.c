// checking if given character is digit or not

#include<stdio.h>
int main(){
    char ch;
    
    printf("Enter a character:");
    scanf("%c",&ch);
    
    if(ch >= '0' && ch <= '9'){
        printf("Given character is a digit");
    }else{
        printf("Given character is not a digit");
    }
    return 0;
}