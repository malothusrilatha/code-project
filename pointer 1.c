#include <stdio.h>
int main()
{
    int num, temp, *ptr, rem, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    ptr = &num;   
    temp = *ptr;  
    while (*ptr > 0)
    {
        rem = (*ptr) % 10;       
        sum += rem * rem * rem;   
        *ptr = (*ptr) / 10;       
    }
  if (sum == temp)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);
   return 0;
}


