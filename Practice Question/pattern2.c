/* Print The Following pattern -****
                                ****
                                ****
                                ****         */

#include<stdio.h>
int main(){
    int row,clm;
    printf("enter the row's : "); //4
    scanf("%d",&row);
    printf("Enter the Column: "); //4
    scanf("%d",&clm);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= clm; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}