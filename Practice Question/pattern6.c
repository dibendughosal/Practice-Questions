/* 
print the given Pattern -
    1234
    123
    12
    1
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of Rows: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; n--)
    {
        for (int j = 1; j <= n; j++)
        {
            printf("%d",j);
        }
        printf("\n");
        
    }
    
}