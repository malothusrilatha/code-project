#include <stdio.h>
int factorial(int *n)
{
    int i, fact = 1;
    for (i = 1; i <= *n; i++)
        fact = fact * i;
  return fact;
}
int isStrong(int *num)
{
    int temp = *num, rem, sum = 0;
    while (temp > 0)
    {
        rem = temp % 10;
        sum += factorial(&rem);
        temp /= 10;
    }
  return sum == *num; 
}
int main()
{
    int num;
	printf("Enter a number:\n");
    scanf("%d", &num);
    if (isStrong(&num))
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is not a Strong number.\n", num);
   return 0;
}






