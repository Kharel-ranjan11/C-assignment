#include<stdio.h>
int a,b,temp;
void main(){
printf("Enter the first number :");
scanf("%d",&a);
printf("Enter the Second number :");
scanf("%d",&b);
temp=a;
a=b;
b=temp;
printf("After swapping the value of a  :%d \n",a);
printf("After swapping the value of b  :%d",b);
}