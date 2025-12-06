#include <stdio.h>
int main() {
    int marks[100], n, i, sum = 0;
    float percentage;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    printf("Enter the marks of %d subjects:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];   
    }
    percentage = (float)sum / n;
    printf("\nTotal Marks = %d\n", sum);
    printf("Percentage = %.2f%%\n", percentage);
    return 0;
}




