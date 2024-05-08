/* print the given pattern -   
        A
       A B
      A B C
     A B C D
    A B C D E
*/
#include<stdio.h>
void main(){
    int n;
    printf("Enter The number of Rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        char a = 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%c ",a+64);
            a++;
        }
        printf("\n");
           
    }
    
}