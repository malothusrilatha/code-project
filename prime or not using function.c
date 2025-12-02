#include<stdio.h>
int fibonacci(int n);
int main()
{
	int n;
	printf("enter the value of n:\n");
	scanf("%d",&n);
	printf("fibonacci series:\n");
	return 0;
}
int fibonacci(int n)
{
	int f=0,s=1,t,i;
	printf("%d%d",f,s);
	for(i=1; i<=n-2; i++){
		t=f+s;
		printf("%d",t);
		t=s;
		s=t;
	}
}
