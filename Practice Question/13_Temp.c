// Write a function to print "Hot" or "Cold" depending on the temperature the user enters.
#include <stdio.h>

int temperature(int temp);

void main()
{
    int temp;
    printf("Enter Temperature in Celsius: ");
    scanf("%d", &temp);
    temperature(temp);
}
int temperature(int temp)
{
    if (temp >= 30)
    {
        printf("HOT");
    }
    if (temp <= 30)
    {
        printf("Cold");
    }
}