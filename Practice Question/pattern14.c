/* Print the Given patten - 
    1
    2 3
    4 5 6
    7 8 9 10
*/
#include<stdio.h>
int main(){
    int r;
    printf("Enter the Number of Rows : ");
    scanf("%d",&r);
    int a = 1;
    for (int i = 1; i <= r; i++)
    {
        
        for(int j = 1;j<=i;j++){
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    
}