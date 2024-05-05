//Write a program to Calculate perimeter of rectangle.
#include<stdio.h>
void main(){
    float length,width,p;
    printf("Enter Length: ");
    scanf("%f",&length);
    printf("Enter the width : ");
    scanf("%f",&width);

    p = 2 * (length + width);
    printf("The Perimeter of the Rectangle is : %.2f",p);

}
