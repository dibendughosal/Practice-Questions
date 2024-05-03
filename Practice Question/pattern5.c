/* Print the given pattern
 1
 12
 123
 1234
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
}