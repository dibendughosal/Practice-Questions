/* find out the Factorial of N */
#include<stdio.h>
int fact();
int main(){
    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);
    printf("The Factorial of %d is : %d",num,fact(num));
    return 0;
}
int fact(int n){
    if (n == 0)
    {
        return 1;
    }
    int factNM1 = fact(n-1);
    int factN = factNM1 * n;
    return factN;
    
}