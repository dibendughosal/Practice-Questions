//Write a function to find sum of digits of a number
#include<stdio.h>
int main(){
    int n;
    printf("Enter number to find sum of digits: ");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of digits: %d",sum);
    
}