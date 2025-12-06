#include <stdio.h>
void reverse_string(char str[]);   
int main()
{
    char str[100];
    printf("Enter a string:\n");
    gets(str);   
    reverse_string(str);  
    return 0;
}
void reverse_string(char str[])
{
    int i, length = 0;
    while (str[length] != '\0')
        length++;
	printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}



