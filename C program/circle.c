#include<stdio.h>
#define PI 3.142 
void main(){
    int r;
    double area=0;
    printf("Enter the radius of circle:");
    scanf("%d",&r);
    area=PI*r*r;
    printf("Area of circle is : %lf",area);
}