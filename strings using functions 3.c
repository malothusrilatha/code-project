#include <stdio.h>
void to_lowercase(char str[]);   
int main()
{
    char str[100];
    printf("Enter a string in uppercase:\n");
    gets(str);   
    to_lowercase(str);
    printf("String in lowercase: %s\n", str);
    return 0;
}
void to_lowercase(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')   
        {
            str[i] = str[i] + 32;           
        }
        i++;
    }
}





