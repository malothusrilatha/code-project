#include<stdio.h>
int main()
{
    char st1[30], st2[30];
    int i, j, length = 0;
    printf("Enter string1:\n");
    fgets(st1, sizeof(st1), stdin);

    printf("Enter string2:\n");
    fgets(st2, sizeof(st2), stdin);
    for(i = 0; st1[i] != '\0'; i++)
        if(st1[i] == '\n') st1[i] = '\0';
    for(i = 0; st2[i] != '\0'; i++)
        if(st2[i] == '\n') st2[i] = '\0';
    for(i = 0; st2[i] != '\0'; i++)
        length++;
    for(i = 0, j = length; st1[i] != '\0'; i++, j++)
    {
        st2[j] = st1[i];
    }
    st2[j] = '\0';
    printf("The concatenation of string1 and string2 is:\n");
    puts(st2);
    return 0;
}

