#include <stdio.h>
int main()
{
    int num, i;
    long long fact = 1;
    int *pnum = &num;
    long long *pfact = &fact;
    printf("Enter a number:\n");
    scanf("%d", pnum);
    for (i = 1; i <= *pnum; i++)
    {
        *pfact = (*pfact) * i;   
    }
   printf("Factorial of %d is %lld\n", *pnum, *pfact);
   return 0;
}




