//Write a program to check if a number is prime or not.

#include<stdio.h>
#include<math.h>

int main(){
    int i,n,c=0;
    printf("Enter Number: ");
    scanf("%d",&n);

    if(n <=1 ){
        printf("Not a prime number.");
    }
    for ( i = 2; i < sqrt(n); i++)
    {
        if (n % i== 0)
        {
            c++;
            break;
        }
        
    }
    if (c==0)
    {
        printf("%d is a Prime number",n);
    }
    else
    {
        printf("%d is not a prime Number.",n);
    }
    return 0;
    
    
    
}
