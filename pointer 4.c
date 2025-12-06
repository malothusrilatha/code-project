#include <stdio.h>
void selection(int *a, int n)
{
    int i, j, min, temp;
    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (*(a + j) < *(a + min))   
                min = j;
        }
        temp = *(a + i);
        *(a + i) = *(a + min);
        *(a + min) = temp;
    }
}
int main()
{
    int arr[50], n, i;
    printf("Enter number of elements:\n");
    scanf("%d", &n);
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
        selection(arr, n);
     printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));
   return 0;
}





