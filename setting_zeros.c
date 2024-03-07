#include <stdio.h>
int main()
{
    int i,j,M,N;
    printf("Enter M and N:\n");
    scanf("%d%d",&M,&N);
    int matrix[M][N];
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("%d",matrix[i][j]);
        }
    }

    printf("Before:\n");
    for (i = 0; i < M; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    setZeros(matrix);

    printf("\nAfter:\n");
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void setZeros(int matrix[i][j])
{
    int row[M] = {0};
    int col[N] = {0};
    int i,j;
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (matrix[i][j] == 0) {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            if (row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }
}

