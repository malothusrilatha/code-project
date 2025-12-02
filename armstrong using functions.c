#include <stdio.h>
int arm_strong(int n);
int main()
{
    int num;
    printf("Enter the value of n:\n");
    scanf("%d", &num);
    if (arm_strong(num))
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);
   return 0;
}
int arm_strong(int n)
{
    int original = n;
    int rem, sum = 0;
    while (n != 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
   // Return 1 if Armstrong number, else 0
    return (sum == original);
}

