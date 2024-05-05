//Write a program to check if given character is digit or not.
#include<stdio.h>
int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c",&ch);

    if (ch >= '0' && ch <= '9')
    {
        printf("The character %c is Digit.",ch);
    }
    else
    {
        printf("the character %c is not a digit.",ch);
    }
    
    return 0;
}
