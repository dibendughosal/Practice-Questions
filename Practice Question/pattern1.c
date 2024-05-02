/* print the following pattern -
        1234
        1234
        1234                 */

#include<stdio.h>
int main(){
    int r,c;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    return 0;
    
}