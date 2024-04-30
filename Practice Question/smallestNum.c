//Write a program to print the smallest number of two.

#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter the first Number: ");
    scanf("%d",&num1);
    printf("Enter the Second Number: ");
    scanf("%d",&num2);

    if (num1 > num2)
    {
        printf("%d is the Smallest Number.",num2);
    }
    else
    {
        printf("%d is the Smallest Number.",num1);
    }
    
    return 0;
    
}