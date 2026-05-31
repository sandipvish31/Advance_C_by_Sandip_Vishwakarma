#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p;
    int i, j, k;
    int **A, **B, **C;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);

    printf("Enter columns of second matrix: ");
    scanf("%d", &p);

    A = (int **)malloc(m * sizeof(int *));
    B = (int **)malloc(n * sizeof(int *));
    C = (int **)malloc(m * sizeof(int *));

    for(i = 0; i < m; i++) {
        A[i] = (int *)malloc(n * sizeof(int));
        C[i] = (int *)malloc(p * sizeof(int));
    }

    for(i = 0; i < n; i++)
        B[i] = (int *)malloc(p * sizeof(int));

    printf("Enter first matrix:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Enter second matrix:\n");
    for(i = 0; i < n; i++)
        for(j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++) {
            C[i][j] = 0;
            for(k = 0; k < n; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }

    printf("Multiplication Matrix:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < p; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }

    for(i = 0; i < m; i++) {
        free(A[i]);
        free(C[i]);
    }

    for(i = 0; i < n; i++)
        free(B[i]);

    free(A);
    free(B);
    free(C);

    return 0;
}