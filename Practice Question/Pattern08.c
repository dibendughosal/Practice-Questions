/* print the given Pattern
    A B C D
    A B C D
    A B C D
    A B C D
*/
#include<stdio.h>
int main(){
    int n;
    printf("enter the Number of Rows : ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        char a = 1;
        for (int j = 1; j <= n; j++)
        {
            printf("%c",a+64);
            a++;
        }
        printf("\n");
        
    }
    
    return 0;
}