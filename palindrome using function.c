#include<stdio.h>
int prime(int num);
int main()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	if(prime(num))
	printf("%d is prime number:\n",num);
	else
	printf("%d is not a prime number:\n",num);
	return 0;
}
int prime(int num)
{
	int i,count=0;
	for(i=0; i<=num; i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==2)
	return 1;//prime
	else
	return 0;//not prime
}
