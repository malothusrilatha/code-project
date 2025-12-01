#include<stdio.h>
int main()
{ int a[10][10];
   int i,j,n,m,sum=10;
   printf("enter the order of the matrix:\n");
   scanf("%d",&n);
   printf("enter the elements of the matrix:");
   for(i=0; i<n; i++){
   	for(j=0; j<m; j++){
   		scanf("%d",&sum[i][j]);
	   }
   }
   for(i=0; i<n; i++){
   	for(j=0; j<m; j++){
   		sum=sum+a[i][j];
	   }
   }
   printf("trace of the given matrix=%d\n",sum);
   return 0;
}
