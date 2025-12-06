#include <stdio.h>
int find_substring(char str[], char substr[]);  
int main()
{
    char str[200], substr[100];
    int pos;
    printf("Enter the main string:\n");
    gets(str);
    printf("Enter the substring to search:\n");
    gets(substr);
    pos = find_substring(str, substr);  
    if (pos == -1)
        printf("Substring not found.\n");
    else
        printf("Substring found at position %d\n", pos + 1);
  return 0;
}
int find_substring(char str[], char substr[])
{
    int i, j, start;
    for (i = 0; str[i] != '\0'; i++)
    {
        start = i;
        j = 0;
        while (str[i] == substr[j] && substr[j] != '\0')
        {
            i++;
            j++;
        }
        if (substr[j] == '\0')
            return start;
        i = start;
    }
 return -1;   
}








