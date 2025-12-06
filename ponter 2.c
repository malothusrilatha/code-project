#include <stdio.h>
int main()
{
    int n, i;
    int a = 0, b = 1, c;
    int *p1 = &a, *p2 = &b, *p3 = &c;
    printf("Enter how many terms you want:\n");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    if (n >= 1)
        printf("%d ", *p1);
    if (n >= 2)
        printf("%d ", *p2);
    for (i = 3; i <= n; i++)
    {
        *p3 = *p1 + *p2;  
        printf("%d ", *p3);
        *p1 = *p2;  
        *p2 = *p3;
    }
   return 0;
}



