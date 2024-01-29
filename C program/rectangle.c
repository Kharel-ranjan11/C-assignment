#include <stdio.h>
void main()
{
    int l, b, h, area = 0, peri = 0, v = 0;
    printf("Enter the length :");
    scanf("%d", &l);
    printf("Enter the breath :");
    scanf("%d", &b);
    printf("Enter the height :");
    scanf("%d", &h);
    area = l * b;
    peri = 2 * (l + b);
    v = l * b * h;
    printf("--------------- O/P --------- \n");
    printf("Area of Rectangle :%d \n " , area);
    printf("Perimeter of Rectangle :%d \n" , peri);
    printf("Volume of Rectangle :%d \n" , v);
    printf("--------------- O/P ---------");
}