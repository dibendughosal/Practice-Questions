//Write a program to check if the given number is a natural number.

#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if (n >= 1)
    {
        printf("it is a natural Number.");
    }
    else
    {
        printf("it is not a natural Number.");
    }
    return 0;
    
}

// by using loop print natural no. between 1 to given input
#include<stdio.h>
int main(){
    int count;
    printf("Enter the Number: ");
    scanf("%d",&count);
    for (int i = 1; i <= count; i++)
    {
        printf("%d ",i);
    }
    
}
    
    
    

