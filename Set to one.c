#include <stdio.h>
int main() {
    int m, n, i, j;
    printf("Enter the number of rows and columns of the matrix (m x n): ");
    scanf("%d %d", &m, &n);
    int matrix[m][n];
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (is_prime(matrix[i][j]))
            {
                matrix[i][j] = 1;
            }
        }
    }
    printf("The matrix with prime numbers set to 1:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int is_prime(int num)
{
    int i;
    if (num <= 1)
    {
        return 0;
    }
    if (num <= 3)
    {
        return 1;
    }
    if (num % 2 == 0 || num % 3 == 0)
    {
        return 0;
    }
    for (i = 5; i * i <= num; i= i+6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
        {
            return 0;
        }
    }
    return 1;
}

