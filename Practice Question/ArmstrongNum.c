//Write a program to check if a given number is Armstrong number or not.
#include<stdio.h>
void main(){
    int n,temp,sum = 0,r;
    printf("Enter Number: ");
    scanf("%d",&n);
    temp = n;
    while (n>0)
    {
        r = n % 10;
        sum = sum + (r*r*r);
        n = n/10;
    }
    if (temp == sum){
        printf("The Number %d is a Armstrong Number.",temp);
    }
    else
    {
        printf("The Number %d is not a Armstrong Number",temp);
    }
    
}