#include<stdio.h>
int sum_of_digits(int num);
int main()
{
	int num,res;
	printf("enter the number:\n");
	scanf("%d",&num);
	res=sum_of_digits(num);
	printf("sum of digits=%d",res);
	return 0;
}
int sum_of_digits(int num)
{
	int sum=0, digit;
	while(num!=0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;
	}
	return sum;
}
