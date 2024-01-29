#include<stdio.h>
void main(){
    int P,T,R;
    double SI,CI;
    printf("Enter the  P value:\n");
    scanf("%d",&P);
    printf("Enter the  T value:\n");
    scanf("%d",&T);
    printf("Enter the  R value:\n");
    scanf("%d",&R);
    SI=P*T*R/100;
    CI=P*(1+R/100)^T;
    printf("Simple Interest %lf :\n",SI);
    printf("Compound  Interest %lf :\n",CI);
}