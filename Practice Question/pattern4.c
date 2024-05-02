/* print the given pattern -
    ****
    ***
    **
    *            
*/
#include<stdio.h>
int main(){
    int row;
    printf("Enter the rows: ");
    scanf("%d",&row);

    for (int i = 1; i <= row; row--)
    {
        for (int j = 1; j <= row; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    return 0;
}