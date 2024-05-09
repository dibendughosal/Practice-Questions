/* print the given pattern -   
        *
       * *
      * * *
     * * * *
    * * * * *
*/
#include<stdio.h>
void main(){
    int n;
    printf("Enter The number of Rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
           
    }
    
}