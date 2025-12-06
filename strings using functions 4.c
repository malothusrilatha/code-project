#include <stdio.h>
int find_position(char str[], char ch);   
int main()
{
    char str[100], ch;
    int pos;
    printf("Enter a string:\n");
    gets(str);   
    printf("Enter the character to search:\n");
    scanf("%c", &ch);
    pos = find_position(str, ch); 
    if (pos == -1)
        printf("Character not found.\n");
    else
        printf("Character '%c' found at position %d\n", ch, pos + 1);

    return 0;
}
int find_position(char str[], char ch)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)       
            return i;           
        i++;
    }
  return -1;              
}






