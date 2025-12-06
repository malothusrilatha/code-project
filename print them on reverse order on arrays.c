#include <stdio.h>
int main() {
    int marks[100], n, i, sum = 0;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    printf("Enter the marks of %d subjects:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];  
    }
    printf("\nSum of marks = %d\n", sum);
    return 0;
}



