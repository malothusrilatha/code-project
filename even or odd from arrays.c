#include <stdio.h>
int trace_matrix(int a[][10], int n);
int main()
{
    int a[10][10], i, j, n;
    printf("Enter the size of the matrix:\n");
    scanf("%d", &n);
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);   
        }
    }
    printf("The trace of the given matrix is %d\n", trace_matrix(a, n));
    return 0;
}
int trace_matrix(int a[][10], int n)
{
    int i, sum = 0;
    for(i = 0; i < n; i++) {
        sum += a[i][i];   
    }
    return sum;
}


