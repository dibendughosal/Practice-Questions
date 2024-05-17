/* Print the following pattern
    *
    * *
    * * *
    * * * *
    * * *
    * *
    * 
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the Number of Rows: ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");    
    }
    for (int k = 1; k <= n-1; n--)
    {
        for (int l = 1; l <= n-1; l++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
    
}