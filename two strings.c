#include <stdio.h>
#include <string.h>
int main()
{
    char st1[50], st2[50];
    int i = 0, flag = 0;
    printf("Enter the 1st string:\n");
    gets(st1);
    printf("Enter the 2nd string:\n");
    gets(st2);
    while (st1[i] != '\0' || st2[i] != '\0')
    {
        if (st1[i] != st2[i])
        {
            flag = 1;
            break;
        }
        i++;
    }
    if (flag == 0)
        printf("Both strings are equal\n");
    else
        printf("Both strings are not equal\n");
     return 0;
}


