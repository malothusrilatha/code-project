#include <stdio.h>
int copy_string(char src[], char dest[]);   
int main()
{
    char str1[100], str2[100];
    int result;
    printf("Enter the source string:\n");
    gets(str1);   
    result = copy_string(str1, str2);
    if(result == 1)
        printf("Copied string: %s\n", str2);
    else
        printf("Copying failed!\n");
 return 0;
}
int copy_string(char src[], char dest[])
{
    int i = 0;
	while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';   
   return 1;   
}




