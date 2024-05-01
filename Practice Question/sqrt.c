#include<stdio.h>
int main(){
    int n;
    printf("Enter number to find square root: ");
    scanf("%d",&n);
    float sqrt = 1;
    for (int i = 1; i <= n; i++)
    {
        sqrt = (sqrt + n/sqrt) / 2;
    }
    printf("Square root of %d: %f",n,sqrt);
}