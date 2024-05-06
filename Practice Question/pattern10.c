/*
Print the given pattern -
1 
1 1 2 2
1 1 1 2 2 2 3 3 3
1 1 1 1 2 2 2 2 3 3 3 3 4 4 4 4 
1 1 1 1 1 2 2 2 2 2 3 3 3 3 3 4 4 4 4 4 5 5 5 5 5
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number of Rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            char a = 1;
            for (int k = 1; k <= i; k++)
            {
                if (n % 2 == 0)
                {
                    printf("%c ", a + 64);
                    a++;
                }
                else
                {
                    printf("%d ", j);
                }
            }
        }
        printf("\n");
    }
}