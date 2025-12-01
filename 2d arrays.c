#include <stdio.h>
int main() {
    int n, m, a[100][100], i, j;

    printf("Enter number of rows (n) and columns (m): ");
    scanf("%d %d", &n, &m);

    printf("Enter the elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nThe array values:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

