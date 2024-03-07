#include <stdio.h>
int main()
{
    int m, n, i, j;
    printf("Enter the number of rows (m) and columns (n) of the array: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        sortRow(arr[i], n);
    }

    printf("The array sorted in ascending order (within each row):\n");
    for (i = 0; i < m; i++)
        {
        for (j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortRow(int arr[], int n)
{
    int i,j;
    for (i = 0; i < n - 1; i++)
        {
        for (j = i+1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

