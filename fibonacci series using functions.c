#include<stdio.h>
void table(int num);
int main()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	table(num);
	return 0;
}
void table(int num)
{
	int i;
	for(i=i; i<=10; i++)
	printf("%d*%d=%d",num,i,num*i);
}
