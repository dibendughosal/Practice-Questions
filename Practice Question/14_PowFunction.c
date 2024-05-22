/* Make your own pow function. */

#include <stdio.h>
#include <math.h>

int main()
{
    int base, power;

    printf("Enter the base number: ");
    scanf("%d", &base);

    printf("Enter the power raised: ");
    scanf("%d",&power);

    printf("%d^%d = %d", base, power,Pow(base,power));

    return 0;
}

int Pow(int x, int y){
    int power = 1;
    for (int i = 1; i <= y; ++i)
    {
        power = power * x; 
    }
    return power;
    
}