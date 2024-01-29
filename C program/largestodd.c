#include <stdio.h>
int num1, num2, num3, res = 0;
int oddEven(int val)
{
  if (val % 2 == 0)
    printf("Even:-");
  else
    printf("Odd:-");
  return val;
}
void main()
{
  printf("Enter the value of num1:-");
  scanf("%d", &num1);
  printf("Enter the value of num2:-");
  scanf("%d", &num2);
  printf("Enter the value of num3:-");
  scanf("%d", &num3);
  if (num1 >= num2 && num1 >= num3)
  {

    printf("%d is the largest number. \n ", num1);
    res = num1;
  }
  else if ((num2 >= num1 && num2 >= num3))
  {
    printf("%d is the largest number. \n", num2);
    res = num2;
  }
  else
  {

    printf("%d is the largest number.\n", num3);
    res = num3;
  }
  printf(" %d  \n ", oddEven(res));
}
