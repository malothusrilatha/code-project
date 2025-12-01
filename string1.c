#include<stdio.h>
int main()
{
	char st[30];
	int i,count = 0;
	printf("enter your string to reverse:\n");
	gets(st);
	for(i=0; st[i]!='\0';i++)
	count ++;
	printf("the length of the string is %d\n",count);
	printf("the reverse of your string:\n");
	for(i=count-1; i>=0; i++){
		printf("%c",st[i]);
	}
	return 0;
}
