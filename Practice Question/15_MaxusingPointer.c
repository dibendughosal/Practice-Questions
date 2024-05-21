/* Write a program in C to find the maximum number between two numbers using a pointer. */
#include <stdio.h>

int main()
{
    int fno; int sno; int *a = &fno; int *b = &sno;
    printf("Enter the first Number: ");
    scanf("%d",a);
    printf("Enter the Second Number: ");
    scanf("%d",b);
    if (*a >= *b)
    {
        printf("Maximum No. is %d", *a);
    }
    else
    {
        printf("Maximum No. is %d", *b);
    }
}