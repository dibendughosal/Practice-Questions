/* print the given pattern - 
        A B C D E 
       A B C D
      A B C
     A B
    A
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
        for (int k = 1; k <= n +1 - i; k++)
        {
            printf("%c ",a+64);
            a++;
        }
        printf("\n");
           
    }
    
}