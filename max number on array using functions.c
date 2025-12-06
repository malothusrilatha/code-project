#include <stdio.h>
void even(int a[], int n);
void odd(int a[], int n);
int main()
{
    int a[100], i, n;
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements in array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    even(a, n);
    odd(a, n);
    return 0;
}
void even(int a[], int n)
{
    int i;
    printf("Even numbers:\n");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}
void odd(int a[], int n)
{
    int i;
    printf("Odd numbers:\n");
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {      
            printf("%d ", a[i]);
        }
    }
    printf("\n");
}

