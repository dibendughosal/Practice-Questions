//find the average of three numbers:

#include<stdio.h>
int main(){
    int first,second,third;

    printf("Enter the first numbers: ");
    scanf("%d",&first);
    printf("Enter the Second numbers: ");
    scanf("%d",&second);
    printf("Enter the Third numbers: ");
    scanf("%d",&third);

    int avg = (first + second + third) / 2;
    printf("The average of 3 numbers are: %d ",avg);

}