/* Print the given Pattern - 
    1
    0 1
    1 0 1
    0 1 0 1
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of Rows : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        int a;
        if (i%2 != 0) a = 1;
        else a =0;
        
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",a);
            if (a == 0) a=1;
            else a = 0;
            
        }
        printf("\n");
        
    }
    
}