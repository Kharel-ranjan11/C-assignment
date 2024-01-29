#include<stdio.h>
void main(){
    int num;
    printf("Enter a number : \n");
    scanf("%d",&num);
    if (num>0)
    {
        if((num % 7 ==0) && !(num % 11 ==0)){
            printf(" divisible by 7 but not by 11:-  %d",num);
        }else{
            printf("divisible by both.");
        }
    }else{
        printf("0");
    }
    
}