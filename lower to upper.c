#include<stdio.h>
int main()
{
	char st[100],ch;
	int i, flag = 0;
	printf("enter the string:\n");
	gets(st);
	printf("enter the character to search:\n");
	for(i=0; st[i]!='\0'; i++)
	{
		if(st[i]==ch){
			printf("the position of the %c is at %d:\n",ch,i);
			flag = 1;
			break;
		}
	}
	if(flag==0)
	{
		printf("sorry the charater is not found in string\n",ch);
	}
	return 0;
}
